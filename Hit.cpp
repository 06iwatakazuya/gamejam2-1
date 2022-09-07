#include "Hit.h"

//‰~‚Æ‹éŒ`‚Ì“–‚½‚è”»’è
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

//’ZŒ`‚Æ‹éŒ`‚Ì“–‚½‚è”»’è
int BoxHit(int playerlefttopX, int playerlefttopY, int playerrightbottomX, int playerrightbottomY,
	int enemylefttopX, int enemylefttopY, int enemyrightbottomX, int enemyrightbottomY)
{
	if (playerlefttopX < enemyrightbottomX && enemylefttopX < playerrightbottomX)
	{
		if (playerlefttopY < enemyrightbottomY && enemylefttopY < playerrightbottomY)
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