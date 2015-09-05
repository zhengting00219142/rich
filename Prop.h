//
//  Prop.h
//  Rich
//
//  Created by 王春 on 15/9/4.
//  Copyright (c) 2015年 王春. All rights reserved.
//

#ifndef __Rich__Prop__
#define __Rich__Prop__

#include <stdio.h>
#include "Player.h"


// 地上的道具基类
class Prop {
public:
    Prop();
    ~Prop();
    
    // 从上面走过
    int stepOver(Player&);
    
    // 停留在上面
    int stepOn(Player&);
};

#endif /* defined(__Rich__Prop__) */
