//
//  Map.cpp
//  Rich
//
//  Created by 王春 on 15/9/4.
//  Copyright (c) 2015年 王春. All rights reserved.
//

#include "Map.h"
#include "rich_def.h"

LandMap::LandMap()
{
    size = 128;
    for (int i=0; i<size; i++) {
        places.push_back(Place(i));
    }
}

LandMap::~LandMap()
{
    size = 0;
}

int LandMap::step_forward(unsigned steps, Player& player)
{
    ASSERT(steps > 0 && steps < 7);
    unsigned axis = player.getAxis();
    
    if (places.size() == 0) {
        return 1;
    }
    
    // check if the player is in rest
    if (isRest(player)) {
        return 0;
    }
    
    // step over all places
    for (int i=1; i<=steps; i++) {
        if (places[axis + i].stepOver(player) != 0) {
            LOGGER << "step over break" << std::endl;
            break;
        }
        
        if (i == steps) {
            // step on the last place
            places[axis + steps].stepOn(player);
        }
    }
    
    return 0;
}

bool LandMap::isRest(const Player& player)
{
    std::map<unsigned, Rest>::iterator iter = rests.find(player.getIndex());
    if (iter == rests.end()) {
        return false;
    }
    
    LOGGER << "Player " << player.getName() << " is in rest, still need sleep " << iter->second.rounds -1 << " rounds" << std::endl;
    
    if (--(iter->second.rounds) <= 0) {
        rests.erase(iter);
    }
    
    return true;
}