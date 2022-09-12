#pragma once
#include "DxLib.h"

class Map 
{
public://メンバ関数

	//マップシーン
	enum class MapScene
	{
		NONE,		//0
		BLOCK,		//1
		ICEBLOCK,	//2
		
	};

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

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

	
};

