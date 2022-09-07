#include "Player.h"
#include "Dxlib.h"

void Player::Initialize()
{
	playerAlive = 1;
	playerPosX = 100;
	playerPosY = 592;
	playerRadius = 16;
	playerSpeed = 10;

	jumpFlag = 0;
	jump = 15;
}

void Player::Update()
{
	// 最新のキーボード情報だったものは1フレーム前のキーボード情報として保存
	for (int i = 0; i < 256; ++i) {
		oldkeys[i] = keys[i];
	}
	// 最新のキーボード情報を取得
	GetHitKeyStateAll(keys);

	if (keys[KEY_INPUT_A] == 1)
	{
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
	jump++;
	if (playerPosY >= 592)
	{
		jump = 0;
	}
}

void Player::Draw()
{
	if (playerAlive == 1)
	{
		DrawBox(playerPosX - playerRadius,
			playerPosY - playerRadius,
			playerPosX + playerRadius,
			playerPosY + playerRadius,
			GetColor(200, 200, 200),
			true);
	}
	DrawFormatString(50, 30, GetColor(255, 255, 255), "playerPosX : %d", playerPosX);
	DrawFormatString(50, 50, GetColor(255, 255, 255), "playerPosY : %d", playerPosY);
}
