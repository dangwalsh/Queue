//
//  main.cpp
//  Queues
//
//  Created by Daniel Walsh on 4/8/14.
//  Copyright (c) 2014 Daniel Walsh. All rights reserved.
//

#include <iostream>
#include "LinkedQueueOfStrings.h"
using namespace std;
int main(int argc, const char * argv[])
{
    LinkedQueueOfStrings<string> lqos;

    lqos.enqueue("first");
    lqos.enqueue("second");
    lqos.enqueue("third");
    
    while (!lqos.isEmpty())
        std::cout << lqos.dequeue() << '\n';
    
    return 0;
}

