//
// Created by sarra on 3/30/2020.
//

#ifndef BINARYINSERTIONSORT_LINKEDLIST_H
#define BINARYINSERTIONSORT_LINKEDLIST_H

#include "Node.h"
#include <iostream>
using namespace std;

class LinkedList {

public:
    //Constructors
    LinkedList();

    LinkedList(int *head);


    //Big Three Implementation
    ~LinkedList();

    LinkedList(const LinkedList &list);

    LinkedList &operator=(const LinkedList &rhs);


    //Functions. You may not need to use them all
    void append(YourClass obj);

    bool Delete(YourClass obj);

    YourClass find(YourClass obj);

    void printList();

    void InsertionSort();

private:
    Node* head;

};

#endif //BINARYINSERTIONSORT_LINKEDLIST_H