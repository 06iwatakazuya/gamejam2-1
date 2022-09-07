#pragma once
class Player
{
public:
	void Initialize();
	void Update();
	void Draw();

private:
	/// <summary>
	/// �v���C���[
	/// </summary>
	int playerAlive = 1;
	int playerPosX = 100;
	int playerPosY = 700;
	int playerRadius = 16;
	int playerSpeed = 10;

	/// <summary>
	/// �W�����v
	/// </summary>
	int jump;
	int jumpFlag;

	// �ŐV�̃L�[�{�[�h���p
	char keys[256] = { 0 };

	// 1���[�v(�t���[��)�O�̃L�[�{�[�h���
	char oldkeys[256] = { 0 };
};

