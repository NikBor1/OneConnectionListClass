#ifndef NODECLASS_H_INCLUDED
#define NODECLASS_H_INCLUDED

#include <iostream>

template <typename T>

class Node
{
    T value;
    Node<T>* next;

public:
    Node(T val, T* nex);
    Node(T val);
    Node(T* nex);
    Node();

    T get_value(){return value;}
    Node<T>* get_next(){return next;}

    void set_value(T val){value = val;}
    void set_nex(Node<T>* nex){next = nex;}


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



#endif // NODECLASS_H_INCLUDED
