#include "EnemyData.h"


void Enemy::InitEneWrk(unsigned int id)
{
    memset(&enemies[id], 0, 0x430);
    //InitMoveBox();
    //enemies[id].field_0x28 = param1;
    //enemies[id].field_0x33c = 0x3f800000;
    //enemies[id].field_0x413 = 0xff;
    //enemies[id].field_0x412 = 0xff;

    for (int i = 0; i < 3; i++)
    {
        // ToDo reverse logic in here
    }

    // 100 is just a random value. That's wrong
    for (int i = 100; i > -1; i --)
    {
    
    }

    // 100 is just a random value. That's wrong
    for (int i = 100; i > -1; i --)
    {
    
    }
}