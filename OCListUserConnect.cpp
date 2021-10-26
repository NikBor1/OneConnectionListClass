#include <iostream>
#include <vector>
#include <string>
#include "NodeClass.h"
#include "OCListClass.h"

int main()
{
    int choiser = 0;

    std::cout << "Hello!\n";

    bool error = true;

    while(error)
    {
        std::cout << "Please choose the type of values in lists:\n enter 1 for int, 2 for double and 3 for string:\n";

        int ch = 0;

        std::cin >> ch;

        switch (ch)
        {
            case 1:
            {
                std::vector <Node <int> > allNodes;
                std::vector <OCList <int> > allLists;
                error = false;
                break;
            }

            case 2:
            {
                std::vector <Node <float> > allNodes;
                std::vector <OCList <float> > allLists;
                error = false;
                break;
            }

            case 3:
            {
                std::vector <Node <std::string> > allNodes;
                std::vector <OCList <std::string> > allLists;
                error = false;
                break;
            }

            default:
            {
                std::cout << "Sorry, but this type is not supported now. Please, try again.";
                error = true;
                break;
            }
        }




    while(choiser != 1)
    {
        std::cout << "If you want to end a program, enter 1.\n";
        std::cout << "If you want to create a new empty node, enter 2.\n";
        std::cout << "If you want to change a node, enter 3.\n";
        std::cout << "If you want to create a new list, enter 4.\n";
        std::cout << "If you want to add an element to the beginning of the list, enter 5.\n";
        std::cout << "If you want to add an element to the end of the list, enter 6.\n";
        std::cout << "If you want to add an element to a fixed position, enter 7.\n";
        std::cout << "If you want to delete the first element, enter 8.\n";
        std::cout << "If you want to delete the last element, enter 9.\n";
        std::cout << "If you want to delete the element from a fixed position, enter 10.\n";
        std::cout << "If you want to delete the first element with fixed value, enter 11.\n";
        std::cout << "If you want to get the position of the first element with a fixed value, enter 12.\n";
        std::cout << "If you want to get the value of the element with a fixed position, enter 13.\n";
        std::cout << "If you want to sort the list, enter 14.\n";
        std::cout << "If you want to output the list, enter 15.\n";
        std::cout << "If you want to get the developer's contact information, enter 16:\n";

        std::cin >> choiser;

        switch (choiser)
        {
        case 1:
            return 0;

        case 2:
        {
            Node<T> no(); //проблемы с типом переменных
            allNodes.push_back(no);
            std::cout << "The index is " << allNodes.size() - 1 << std::endl;
            break;
        }
        case 3:
        {
            std::cout << "Enter index of node to change: \n";
            int index = -1;
            std::cin >> index;
            std::cout << "Enter new value of node: \n";
            int val = 0;
            std::cin >> val;
            allNodes[index].set_value(val);
            break;
        }
        case 4:
        {
            OCList<T> ocl(); //проблемы с типом переменных
            allLists.push_back(ocl);
            std::cout << "The index is " << allLists.size() - 1 << std::endl;
            break;
        }
        case 5:
        {
            std::cout << "Enter index of node to add: \n";
            int indexNode = -1;
            std::cin >> indexNode;
            std::cout << "Enter index of list add to: \n";
            int indexList = -1;
            std::cin >> indexList;
            allLists[indexList].addElement(&allNodes[indexNode], 0);
        }






        }
    }




    return 0;
}
