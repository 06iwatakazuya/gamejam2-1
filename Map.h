#pragma once
#include "DxLib.h"

class Map 
{
public://�����o�֐�

	//�}�b�v�u���b�N�V�[��
	enum class MapBlockScene
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

public:
	//�}�b�v�V�[��
	int mapScene = 0;

private://�����o�ϐ�

	
};

