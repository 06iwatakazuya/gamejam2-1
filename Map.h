#pragma once
#include "DxLib.h"

class Map 
{
public://�����o�֐�

	//�}�b�v�V�[��
	enum class MapScene
	{
		NONE,		//0
		BLOCK,		//1
		ICEBLOCK,	//2
		
	};

	/// <summary>
	/// ������
	/// </summary>
	void Initialize();

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

private://�����o�ϐ�

	//�}�b�v�V�[��
	int mapScene = 0;
};

