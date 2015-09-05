//
//  Place.h
//  Rich
//
//  Created by 王春 on 15/9/4.
//  Copyright (c) 2015年 王春. All rights reserved.
//

#ifndef __Rich__Place__
#define __Rich__Place__

#include <stdio.h>
#include <list>
#include "Player.h"
#include "Prop.h"

// 地图上的一个方块
class Place
{
    unsigned index; // 坐标
    std::list<Prop> props; // 本方块上的物品：房子／炸弹／路障／加成道具等
public:
    Place(unsigned index=0);
    ~Place();
    
    // 从上面走过
    int stepOver(Player&);
    
    // 停留在上面
    int stepOn(Player&);
};

#endif /* defined(__Rich__Place__) */
