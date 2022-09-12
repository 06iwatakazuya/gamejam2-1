#pragma once
#include "DxLib.h"

class Map 
{
public://�����o�֐�

	//�}�b�v�u���b�N�V�[��
	enum MapBlockScene
	{
		NONE,		//0
		BLOCK,		//1
		ICEBLOCK,	//2
		
	};

	/// <summary>
	/// ������
	/// </summary>
	void Initialize(int mapHeight, int mapWidth);

	/// <summary>
	/// �X�V
	/// </summary>
	void Update();

	/// <summary>
	/// �`��
	/// </summary>
	void Draw();

	//�}�b�v�ǉ�
	void CreateMap();

public:
	//�}�b�v�V�[��
	int mapScene = 0;
 

private://�����o�ϐ�

	//�E�B���h�E�c��
	int mapHeight_ = 0;

	//�E�B���h�E����
	int mapWidth_ = 0;

	//�u���b�N�T�C�Y
	int blockSize = 32;

	int tutorialCopyMap[18][52] = {0};
};

