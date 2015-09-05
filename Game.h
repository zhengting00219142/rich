//
//  Game.h
//  Rich
//
//  Created by 王春 on 15/9/4.
//  Copyright (c) 2015年 王春. All rights reserved.
//

#ifndef __Rich__Game__
#define __Rich__Game__


class Game
{
public:
    virtual ~Game(){}
    
    virtual int Start() = 0;
    
    virtual int Run() = 0;
    
    virtual int Over() = 0;
};

#endif /* defined(__Rich__Game__) */
