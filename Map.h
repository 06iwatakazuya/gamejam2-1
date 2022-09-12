#pragma once
#include "DxLib.h"

class Map 
{
public://メンバ関数

	//マップブロックシーン
	enum MapBlockScene
	{
		NONE,		//0
		BLOCK,		//1
		ICEBLOCK,	//2
		
	};

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize(int mapHeight, int mapWidth);

	/// <summary>
	/// 更新
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

	//マップ追加
	void CreateMap();

public:
	//マップシーン
	int mapScene = 0;
 

private://メンバ変数

	//ウィンドウ縦幅
	int mapHeight_ = 0;

	//ウィンドウ横幅
	int mapWidth_ = 0;

	//ブロックサイズ
	int blockSize = 32;

	int tutorialCopyMap[18][52] = {0};
};

