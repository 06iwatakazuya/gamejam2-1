#include "Player.h"
#include "Dxlib.h"

/// <summary>
/// èâä˙âª
/// </summary>
void Player::Initialize() {
	playerAlive = 1;
	playerPosX = 100;
	playerPosY = 592;
	playerRadiusX = 16;
	playerRadiusY = 32;
	playerSpeed = 10;

	jumpFlag = 0;
	jump = 15;

	fireFlag = 0;
	firePosX = playerPosX;
	firePosY = playerPosY;
	fireRadius = 5;
	fireSpeed = 5;
	fireGravity = -3;
	/*for (std::unique_ptr<PlayerAttack>& fire : fire) {
		fire->Initialize(playerPosX, playerPosY);
	}*/
}

/// <summary>
/// çXêV
/// </summary>
void Player::Update(char* keys, char* oldkeys)
{

	if (keys[KEY_INPUT_A] == 1) {
		playerPosX -= playerSpeed;
	}
	else if (keys[KEY_INPUT_D] == 1)
	{
		playerPosX += playerSpeed;
	}
	if (playerPosY >= 592)
	{
		if (keys[KEY_INPUT_SPACE] == 1 && oldkeys[KEY_INPUT_SPACE] == 0)
		{
			jump = -17;
		}
	}
	playerPosY += jump;
	jump += 1;
	if (playerPosY >= 592)
	{
		jump = 0;
	}

	if (keys[KEY_INPUT_A] == 1)
	{
		playerDirection = true;
	}
	else if (keys[KEY_INPUT_D] == 1)
	{
		playerDirection = false;
	}

	//ÉvÉåÉCÉÑÅ[ÇÃçUåÇèàóù
	Attack();

	/*for (std::unique_ptr<PlayerAttack>& fire : fire) {
		fire->Update();
	}*/
}

/// <summary>
/// ï`âÊ
/// </summary>
void Player::Draw()
{
	if (playerAlive == 1)
	{
		DrawBox(playerPosX - playerRadiusX,
			playerPosY - playerRadiusY,
			playerPosX + playerRadiusX,
			playerPosY + playerRadiusY,
			GetColor(200, 200, 200),
			true);
	}

	if (fireFlag == 1)
	{
		DrawCircle(firePosX, firePosY, fireRadius, GetColor(255, 50, 50), true);
	}

	/*for (std::unique_ptr<PlayerAttack>& fire : fire) {
		fire->Draw();
	}*/

	DrawFormatString(50, 30, GetColor(255, 255, 255), "playerPosX : %d", playerPosX);
	DrawFormatString(50, 50, GetColor(255, 255, 255), "playerPosY : %d", playerPosY);
	DrawFormatString(50, 70, GetColor(255, 255, 255), "fireTimer : %d", fireTimer);
	DrawFormatString(50, 90, GetColor(255, 255, 255), "fireFlag : %d", fireFlag);
	DrawFormatString(50, 110, GetColor(255, 255, 255), "playerDirection : %d", playerDirection);

}

/// <summary>
/// çUåÇ
/// </summary>
void Player::Attack()
{
	if (fireFlag == 0)
	{
		firePosY = playerPosY;
		firePosX = playerPosX;
		fireGravity = -3;
		if (firePosY <= 650)
		{
			fireTimer++;
		}
	}

	if (fireTimer >= 50)
	{
		fireFlag = 1;
		fireTimer = 0;
	}

	if (fireFlag == 1)
	{
		if (playerDirection == false)
		{
			firePosX += fireSpeed;
			firePosY += fireGravity;
			fireGravity++;
		}
		else if (playerDirection == true)
		{
			firePosX -= fireSpeed;
			firePosY += fireGravity;
			fireGravity++;
		}
	}

	if (firePosY >= 650)
	{
		fireFlag = 0;
	}

	/*std::unique_ptr<PlayerAttack> newFire = std::make_unique<PlayerAttack>();
	newFire->Initialize(playerPosX, playerPosY);

	fire.push_back(std::move(newFire));*/
}
