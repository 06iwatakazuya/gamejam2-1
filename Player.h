#pragma once
class Player
{
public:
	void Initialize();
	void Update();
	void Draw();

private:
	/// <summary>
	/// プレイヤー
	/// </summary>
	int playerAlive = 1;
	int playerPosX = 100;
	int playerPosY = 700;
	int playerRadius = 16;
	int playerSpeed = 10;

	/// <summary>
	/// ジャンプ
	/// </summary>
	int jump;
	int jumpFlag;

	// 最新のキーボード情報用
	char keys[256] = { 0 };

	// 1ループ(フレーム)前のキーボード情報
	char oldkeys[256] = { 0 };
};

