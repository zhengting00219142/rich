//
//  Player.h
//  Rich
//
//  Created by 王春 on 15/9/4.
//  Copyright (c) 2015年 王春. All rights reserved.
//

#ifndef __Rich__Player__
#define __Rich__Player__

#include <stdio.h>
#include <string>

class Player
{
    std::string name;
    unsigned index;
    unsigned axis;
    
public:
    Player(std::string name, unsigned index);
    ~Player();
    
    int operation();
    
    unsigned getIndex() const;
    
    std::string getName() const;
    
    unsigned getAxis() const;
    
    void setAxis(unsigned);
};

#endif /* defined(__Rich__Player__) */
