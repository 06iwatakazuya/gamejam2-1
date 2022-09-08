#include "Hit.h"

//円と矩形の当たり判定
int BoxCircle(int LeftTopBoxX, int LeftTopBoxY, int RightBottomX, int RightBottomY, int circleX, int circleY, int r)
{
    if ((circleX > LeftTopBoxX - r)
        && (circleX < RightBottomX + r)
        && (circleY > LeftTopBoxY - r)
        && (circleY < RightBottomY + r)) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

//短形と矩形の当たり判定
int BoxHit(int playerLeftTopX, int playerLeftTopY, int playerRightBottomX, int playerRightBottomY,
		   int enemyLeftTopX, int enemyLeftTopY, int enemyRightBottomX, int enemyRightBottomY)
{
	if (playerLeftTopX < enemyRightBottomX && enemyLeftTopX < playerRightBottomX)
	{
		if (playerLeftTopY < enemyRightBottomY && enemyLeftTopY < playerRightBottomY)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

//-------マップチップとプレイヤーの当たり判定-------//

//左に向かった時のマップチップの当たり判定
int leftHitMaptip(int playerPosX, int playerPosY, int playerRadius, int playerSpeed,
			  int *leftTopX, int *leftTopY, int *leftBottomX, int *leftBottomY,
			  int leftCenterX, int leftCenterY,
			  int blockSize, int map) 
{
	*leftTopX = ((playerPosX - playerSpeed) - playerRadius) / blockSize;
	*leftTopY = (playerPosY - playerRadius) / blockSize;
	*leftBottomX = ((playerPosX - playerSpeed) - playerRadius) / blockSize;
	*leftBottomY = (playerPosY - playerRadius) / blockSize;
	leftCenterX = ((playerPosX - playerSpeed) - playerRadius) / blockSize;
	leftCenterY = playerPosY / blockSize;
	if (map[leftTopY][leftTopX] == 0 && map[leftBottomX][leftBottomY] == 0) 
	{
		playerPosX -= playerSpeed;
	}
}

//右に向かった時のマップチップの当たり判定
int rightHitMaptip(int playerPosX, int playerPosY, int playerRadius, int playerSpeed,
				   int *rightTopX, int *rightTopY, int *rightBottomX, int *rightBottomY,
				   int rightCenterX, int rightCenterY,
				   int blockSize, int map) 
{
	*rightTopX = ((playerPosX - playerSpeed) - playerRadius) / blockSize;
	*rightTopY = (playerPosX - playerRadius) / blockSize;
	*rightBottomX = ((playerPosX - playerSpeed) - playerRadius) / blockSize;
	*rightBottomY = (playerPosX - playerRadius) / blockSize;
	rightCenterX = ((playerPosX - playerSpeed) - playerRadius) / blockSize;
	rightCenterY = (playerPosX - playerRadius) / blockSize;
	if (map[rightTopY][rightTopX] == 0 && map[rightBottomY][rightBottomX] == 0) 
	{
		playerPosX += playerSpeed;
	}
}

//int underHitMaptip(int playerPosX, int playerPosY, int playerRadius, int playerSpeed,
//				   int* rightBottomX, int* rightBottomY, int* leftBottomX, int* leftBottomY,
//				   int underCenterX, int underCenterY,
//				   int blockSize, int map) 
//{
//	*rightBottomX = 
//}