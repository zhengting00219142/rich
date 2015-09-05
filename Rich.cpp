//
//  Rich.cpp
//  Rich
//
//  Created by 王春 on 15/9/4.
//  Copyright (c) 2015年 王春. All rights reserved.
//

#include "Rich.h"
#include "IOHelper.h"
#include "rich_def.h"
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

Rich::Rich():map(new LandMap())
{

}

Rich::~Rich()
{

}

int Rich::Start()
{
    unsigned map_type = IOHelper<unsigned>::getValueInRange("Please choose a map:\n\t1. normal 2. snow 3. sea 4. mountain", 1, 4);
    unsigned player_number = IOHelper<unsigned>::getValueInRange("Please input the number of players(2~4):", 2, 4);
    
    // Initialize game map
    
    // Initialize players
    for (int i=0; i<player_number; i++) {
        string name = IOHelper<string>::getValue("Please input the user's name:");
        players.push_back(Player(name, i));
        
        IOHelper<string>::notice("create user " + name + " success!");
    }
    
    return 0;
}

int Rich::Run()
{
    // get the current player
    Player current = players.front();
    
    // user operation
    current.operation();
    
    // dice and step forward
    unsigned steps = Dice();
    if (map->step_forward(steps, current) != 0) {
        return 1;
    }
    
    // change to next
    players.pop_front();
    players.push_back(current);
    
    return 0;
}

int Rich::Over()
{
    // clear resources
    return 0;
}

unsigned Rich::Dice()
{
    srand((unsigned)time(NULL));
    
    return (rand() % 6 + 1);
}

