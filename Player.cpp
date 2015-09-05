//
//  Player.cpp
//  Rich
//
//  Created by 王春 on 15/9/4.
//  Copyright (c) 2015年 王春. All rights reserved.
//

#include "Player.h"
#include "rich_def.h"
#include "IOHelper.h"

Player::Player(std::string name, unsigned index)
{
    this->name = name;
    this->index = index;
    this->axis = 0;
}

Player::~Player()
{

}

int Player::operation()
{
    int operation = IOHelper<int>::getValue("Current User " + name + ", Please input operation:");
    return 0;
}
    
unsigned Player::getIndex() const
{
    return index;
}
    
std::string Player::getName() const
{
    return name;
}
    
unsigned Player::getAxis() const
{
    return axis;
}
    
void Player::setAxis(unsigned axis)
{
    this->axis = axis;
}