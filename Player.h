#pragma once
//#include "PlayerAttack.h"
#include <list>
#include <memory>

class Player
{
public:
	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 更新
	/// </summary>
	void Update(char* keys, char* oldkeys);

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

	/// <summary>
	/// 攻撃
	/// </summary>
	void Attack();

	// 弾リスト取得
	//const std::list<std::unique_ptr<PlayerAttack>>& GetBullets() { return fire; }

private:
	/// <summary>
	/// プレイヤー
	/// </summary>
	int playerAlive = 1;
	int playerPosX = 100;
	int playerPosY = 700;
	int playerRadiusX = 16;
	int playerRadiusY = 16;
	int playerSpeed = 10;
	bool playerDirection = 0;

	/// <summary>
	/// ジャンプ
	/// </summary>
	int jump = 0;
	int jumpFlag = 0;

	//const int
	int fireFlag = 0;
	int firePosX = 0;
	int firePosY = 0;
	int fireRadius = 0;
	int fireSpeed = 0;
	int fireTimer = 0;
	int fireGravity = 0;

	//// 最新のキーボード情報用
	//char keys[256] = { 0 };

	//// 1ループ(フレーム)前のキーボード情報
	//char oldkeys[256] = { 0 };
	// 弾
	//std::list<std::unique_ptr<PlayerAttack>> fire;
};

