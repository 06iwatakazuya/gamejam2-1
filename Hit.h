#pragma once

//円と矩形の当たり判定
int BoxCircle(int LeftTopBoxX, int LeftTopBoxY, int RightBottomX, int RightBottomY, int circleX, int circleY, int r);

//矩形と矩形の当たり判定
int BoxHit(int playerLeftTopX, int playerLeftTopY, int playerRightBottomX, int playerRightBottomY,
	int enemyLeftTopX, int enemyLeftTopY, int enemyRightBottomX, int enemyRightBottomY);

//左マップチップの当たり判定
int leftHitMaptip(int playerPosX, int playerPosY, int playerRadius, int playerSpeed,
				  int* leftTopX, int* leftTopY, int* leftBottomX, int* leftBottomY,
				  int leftCenterX, int leftCenterY,
				  int blockSize, int map);

//右マップチップの当たり判定
int rightHitMaptip(int playerPosX, int playerPosY, int playerRadius, int playerSpeed,
				   int* rightTopX, int* rightTopY, int* rightBottomX, int* rightBottomY,
				   int rightCenterX, int rightCenterY,
				   int blockSize, int map);