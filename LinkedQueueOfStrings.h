//
//  LinkedQueueOfStrings.h
//  Queues
//
//  Created by Daniel Walsh on 4/8/14.
//  Copyright (c) 2014 Daniel Walsh. All rights reserved.
//

#ifndef __Queues__LinkedQueueOfStrings__
#define __Queues__LinkedQueueOfStrings__

#include <iostream>
template <typename T>
class LinkedQueueOfStrings
{
    struct Node {
        T item;
        Node *next;
    };
    Node *first, *last;
public:
    LinkedQueueOfStrings():first(NULL),last(NULL) {
        std::cout << "default const\n";
    }
    ~LinkedQueueOfStrings() {
        delete first;
        delete last;
        std::cout << "destructor\n";
    }
    inline bool isEmpty() { return first == NULL; }
    void enqueue(T item) {
        Node *oldlast = last;
        last = new Node();
        last->item = item;
        last->next = NULL;
        if (isEmpty()) first = last;
        else oldlast->next = last;
    }
    T dequeue() {
        T item = first->item;
        first = first->next;
        if (isEmpty()) last = NULL;
        return item;
    }
};

#endif /* defined(__Queues__LinkedQueueOfStrings__) */
