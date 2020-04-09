#ifndef NODE_H
#define NODE_H

#include "YourClass.h"

class Node {
public:
    Node();

// Node constructor
    Node(YourClass v, Node *n = nullptr) : value(value) {
        next = n;
    }

    //Destructor
    ~Node() {
        delete next;
    }

    friend class LinkedList;

private:

    YourClass value;
    Node* next;

};

#endif //NODE_H
