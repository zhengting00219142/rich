//
//  Rich.h
//  Rich
//
//  Created by 王春 on 15/9/4.
//  Copyright (c) 2015年 王春. All rights reserved.
//

#ifndef __Rich__Rich__
#define __Rich__Rich__

#include "Game.h"
#include "Map.h"
#include "Player.h"
#include <memory>
#include <list>

const unsigned MIN_MAP_SIZE = 32;
const unsigned MAX_MAP_SIZE = 128;

class Rich : public Game
{
    std::shared_ptr<LandMap> map;
    std::list<Player> players;
public:
    Rich();
    
    virtual ~Rich();
    
    virtual int Start();
    
    virtual int Run();
    
    virtual int Over();
    
private:
    
    // 掷骰子
    unsigned Dice();
};

#endif /* defined(__Rich__Rich__) */
