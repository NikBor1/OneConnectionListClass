#ifndef NODECLASS_H_INCLUDED
#define NODECLASS_H_INCLUDED
#include <iostream>

template <typename T>

class Node
{
    T value;
    T* next;

public:
    Node(T val, T* nex);
    Node(T val);
    Node(T* nex);
    Node();

    T val(){return value;}
    T* nex(){return next;}



};

template <typename T>

Node<T>::Node(T val, T* nex)
{
    value = val;
    next = next;
}

template <typename T>

Node<T>::Node(T val)
{
    value = val;
    next = nullptr;
}

template <typename T>

Node<T>::Node(T* nex)
{
    value = 0;
    next = next;
}

template <typename T>

Node<T>::Node()
{
    value = 0;
    next = nullptr;
}

int main()
{
    return 0;
}

#endif
