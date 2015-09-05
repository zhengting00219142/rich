//
//  Map.h
//  Rich
//
//  Created by 王春 on 15/9/4.
//  Copyright (c) 2015年 王春. All rights reserved.
//

#ifndef __Rich__Map__
#define __Rich__Map__

#include "Place.h"
#include "Player.h"
#include <vector>
#include <map>

// 轮空休息
struct Rest {
    unsigned playerIndex;
    unsigned rounds;
};

class LandMap
{
    unsigned size;
    std::vector<Place> places;
    std::map<unsigned,Rest> rests;
public:
    LandMap();
    ~LandMap();
    
    int step_forward(unsigned steps, Player& player);
    
private:
    
    bool isRest(const Player&);
};

#endif /* defined(__Rich__Map__) */
