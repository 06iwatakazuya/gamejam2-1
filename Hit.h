#pragma once

//�~�Ƌ�`�̓����蔻��
int BoxCircle(int LeftTopBoxX, int LeftTopBoxY, int RightBottomX, int RightBottomY, int circleX, int circleY, int r);

//��`�Ƌ�`�̓����蔻��
int BoxHit(int playerLeftTopX, int playerLeftTopY, int playerRightBottomX, int playerRightBottomY,
	int enemyLeftTopX, int enemyLeftTopY, int enemyRightBottomX, int enemyRightBottomY);

//���}�b�v�`�b�v�̓����蔻��
int leftHitMaptip(int playerPosX, int playerPosY, int playerRadius, int playerSpeed,
				  int* leftTopX, int* leftTopY, int* leftBottomX, int* leftBottomY,
				  int leftCenterX, int leftCenterY,
				  int blockSize, int map);

//�E�}�b�v�`�b�v�̓����蔻��
int rightHitMaptip(int playerPosX, int playerPosY, int playerRadius, int playerSpeed,
				   int* rightTopX, int* rightTopY, int* rightBottomX, int* rightBottomY,
				   int rightCenterX, int rightCenterY,
				   int blockSize, int map);