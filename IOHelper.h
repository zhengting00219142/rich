//
//  IOHelper.h
//  Rich
//
//  Created by 王春 on 15/9/5.
//  Copyright (c) 2015年 王春. All rights reserved.
//

#ifndef __Rich__IOHelper__
#define __Rich__IOHelper__

#include <stdio.h>
#include <string>
#include <iostream>

const std::string OPERATION_PREFIX = "[OPERATION]";
const std::string NOTICE_PREFIX = "[NOTICE]";

template <class TYPE>
class IOHelper
{
public:
    
    static TYPE getValue(std::string message);
    
    static TYPE getValueInRange(std::string message, TYPE min, TYPE max);
    
    static void notice(TYPE message);
};

template <class TYPE>
TYPE IOHelper<TYPE>::getValue(std::string message)
{
    TYPE value;
    std::cout << OPERATION_PREFIX << message << std::endl;
    std::cin >> value;
    
    return value;
}

template <class TYPE>
TYPE IOHelper<TYPE>::getValueInRange(std::string message, TYPE min, TYPE max)
{
    TYPE value;
    do {
        value = getValue(message);
        if (value < min || value > max)
        {
            std::cout << NOTICE_PREFIX << "Invalid input!" << std::endl;
            continue;
        }
        
        break;
    } while (1);
    
    return value;
}

template <class TYPE>
void IOHelper<TYPE>::notice(TYPE message) {
    std::cout << NOTICE_PREFIX << message << std::endl;
}

#endif /* defined(__Rich__IOHelper__) */
