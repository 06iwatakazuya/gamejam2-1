#pragma once
//#include "PlayerAttack.h"
#include <list>
#include <memory>

class Player
{
public:
	/// <summary>
	/// ������
	/// </summary>
	void Initialize();

	/// <summary>
	/// �X�V
	/// </summary>
	void Update(char* keys, char* oldkeys);

	/// <summary>
	/// �`��
	/// </summary>
	void Draw();

	/// <summary>
	/// �U��
	/// </summary>
	void Attack();

	// �e���X�g�擾
	//const std::list<std::unique_ptr<PlayerAttack>>& GetBullets() { return fire; }

private:
	/// <summary>
	/// �v���C���[
	/// </summary>
	int playerAlive = 1;
	int playerPosX = 100;
	int playerPosY = 700;
	int playerRadiusX = 16;
	int playerRadiusY = 16;
	int playerSpeed = 10;
	bool playerDirection = 0;

	/// <summary>
	/// �W�����v
	/// </summary>
	int jump;
	int jumpFlag;

	//const int
	int fireFlag;
	int firePosX;
	int firePosY;
	int fireRadius;
	int fireSpeed;
	int fireTimer;
	int fireGravity;

	//// �ŐV�̃L�[�{�[�h���p
	//char keys[256] = { 0 };

	//// 1���[�v(�t���[��)�O�̃L�[�{�[�h���
	//char oldkeys[256] = { 0 };
	// �e
	//std::list<std::unique_ptr<PlayerAttack>> fire;
};

