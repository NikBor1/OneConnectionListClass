#include <iostream>
#include "NodeClass.h"

template <typename T>

class OCList
{
    Node <T>* head;
    Node <T>* tail;

public:
    OCList();


    Node <T>* get_head(){return head;}
    Node <T>* get_tail(){return tail;}
    void set_head(Node <T>* he){head = he;}
    void set_tail(Node <T>* ta){tail = ta;}



    void addElement(Node <T>* elem, int position)
    {
        if(position == 0)
        {
            *elem.set_next(head);
            head = elem;
        }
        else
        {
            Node <T>* nowAt = head;

            for(int i = 1; i < position; i ++)
                nowAt = *nowAt.get_next();

            *elem.set_next(*nowAt.get_next);
            *nowAt.set_next(elem);
        }

        if(*elem.get_next() == nullptr)
            tail = elem;
    }


    void addElementBack(Node <T>* elem)
    {
        *elem.set_next(nullptr);
        tail = elem;
    }

    void deleteElementByIndex(int position)
    {
        if(position == 0)
            head = *head.get_next();
        else
        {
            Node<T>* nowAt = head;

            for(int i = 1; i < position; i ++)
                nowAt = *nowAt.get_next();

            *nowAt.set_next((*nowAt.get_next()).get_next());

            if(*nowAt.get_next() == nullptr)
            tail = nowAt;
        }


    }

    void deleteTail()
    {
        Node <T>* nowAt = head;

        while((*nowAt.get_next()).get_next() != nullptr)
            nowAt = *nowAt.get_next();

        *nowAt.set_next(nullptr);
        tail = nowAt;
    }

    void deleteElementByValue(Node <T>* sameElement)
    {
        Node <T>* nowAt = head;

        while((*nowAt.get_next()).get_value() != *sameElement.get_value())
            nowAt = *nowAt.get_next();

        *nowAt.set_next((*nowAt.get_next()).get_next());

        if(*nowAt.get_next() == nullptr)
            tail = nowAt;
    }

    int foundElementByValue(Node <T>* sameElement)
    {
        Node <T>* nowAt = head;
        int index = 0;

        while(*nowAt.get_value() != *sameElement.get_value())
        {
            nowAt = *nowAt.get_next();
            index ++;
            if(nowAt == nullptr)
                return -1;
        }

        return index;
    }


    Node<T>* operator[](int position)
    {
        Node<T>* nowAt = head;

        for(int i = 0; i <= position; i ++)
            nowAt = *nowAt.get_next();

        return nowAt;
    }

    friend std::ostream& operator<<(std::ostream&, OCList&);

};

template <typename T>
OCList <T> :: OCList()
{
    head = nullptr;
    tail = nullptr;
}

template <typename T>
std::ostream& operator<<(std::ostream&, OCList <T>& ocl)
{
    Node <T>* nowAt = ocl.head();

    while((*nowAt.get_next()).get_next() != nullptr)
    {
        nowAt = *nowAt.get_next();
        std::cout << nowAt.get_value << " ";
    }
}

int main()
{


    return 0;
}
