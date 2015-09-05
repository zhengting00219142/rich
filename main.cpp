//
//  main.cpp
//  Rich
//
//  Created by 王春 on 15/9/4.
//  Copyright (c) 2015年 王春. All rights reserved.
//

#include <iostream>
#include <thread>
#include <memory>
#include "Game.h"
#include "Rich.h"

int main(int argc, const char * argv[]) {
    
    std::shared_ptr<Game> game(new Rich());
    if (game->Start() != 0)
    {
        std::cout<<"Game Initialize failed!"<<std::endl;
        return 1;
    }
    
    while(game->Run() == 0) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    
    return game->Over();
}
