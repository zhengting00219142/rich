//
//  Place.cpp
//  Rich
//
//  Created by 王春 on 15/9/4.
//  Copyright (c) 2015年 王春. All rights reserved.
//

#include "Place.h"
#include "rich_def.h"

Place::Place(unsigned index)
{
    this->index = index;
}

Place::~Place()
{

}

// 从上面走过
int Place::stepOver(Player& player)
{
    LOGGER << "Player " << player.getName() << " step over place " << index << std::endl;
    player.setAxis(index);
    
    return 0;
}

// 停留在上面
int Place::stepOn(Player& player)
{
    LOGGER << "Player " << player.getName() << " step on place " << index << std::endl;
    player.setAxis(index);
    
    return 0;
}