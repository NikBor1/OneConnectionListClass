#include <iostream>
#include <vector>
#include <string>
#include "NodeClass.h"
#include "OCListClass.h"

int main()
{
    int choiser = 0;

    std::cout << "Hello!\n";

    std::vector <Node <double> > allNodes;
    std::vector <OCList <double> > allLists;





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
            Node<double> no; //проблемы с типом переменных
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
            OCList<double> ocl; //проблемы с типом переменных
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
            break;
        }
        case 6:
        {
            std::cout << "Enter index of node to add: \n";
            int indexNode = -1;
            std::cin >> indexNode;
            std::cout << "Enter index of list add to: \n";
            int indexList = -1;
            std::cin >> indexList;
            allLists[indexList].addElementBack(&allNodes[indexNode]);
            break;
        }
        case 7:
        {
            std::cout << "Enter index of node to add: \n";
            int indexNode = -1;
            std::cin >> indexNode;
            std::cout << "Enter index of list add to: \n";
            int indexList = -1;
            std::cin >> indexList;
            std::cout << "Enter position add to: \n";
            int indexPos = -1;
            std::cin >> indexPos;
            allLists[indexList].addElement(&allNodes[indexNode], indexPos);
            break;
        }
        case 8:
        {
            std::cout << "Enter index of list delete from: \n";
            int indexList = -1;
            std::cin >> indexList;
            allLists[indexList].deleteElementByIndex(0);
            break;
        }
        case 9:
        {
            std::cout << "Enter index of list delete from: \n";
            int indexList = -1;
            std::cin >> indexList;
            allLists[indexList].deleteTail();
            break;
        }
        case 10:
        {
            std::cout << "Enter index of list delete from: \n";
            int indexList = -1;
            std::cin >> indexList;
            std::cout << "Enter position delete from: \n";
            int indexPos = -1;
            std::cin >> indexPos;
            allLists[indexList].deleteElementByIndex(indexPos);
            break;
        }
        case 11:
        {
            std::cout << "Enter index of list delete from: \n";
            int indexList = -1;
            std::cin >> indexList;
            std::cout << "Enter value to delete: \n";
            double valueDel = -1;
            std::cin >> valueDel;
            allLists[indexList].deleteElementByValue(valueDel);
            break;
        }
        case 12:
        {
            std::cout << "Enter index of list know about: \n";
            int indexList = -1;
            std::cin >> indexList;
            std::cout << "Enter value to know about: \n";
            double valueKnow = -1;
            std::cin >> valueKnow;

            Node <double> valuerSame(valueKnow);

            std::cout << "The index of the element is: ";

            std::cout << allLists[indexList].foundElementByValue(&valuerSame);

            break;
        }
        case 13:
        {
            std::cout << "Enter index of list know about: \n";
            int indexList = -1;
            std::cin >> indexList;
            std::cout << "Enter position to know about: \n";
            int indexKnow = -1;
            std::cin >> indexKnow;

            std::cout << "The value of the element is: ";

            std::cout << allLists[indexList][indexKnow];

            break;
        }
        case 14:
        {
            std::cout << "Sorry, this option is unavailable now. We are working on it.\n";
            break;
        }
        case 15:
        {
            std::cout << "Enter index of list know about: \n";
            int indexList = -1;
            std::cin >> indexList;
            std::cout << allLists[indexList];
            break;
        }
        case 16:
        {
            std::cout << "Developer: Borisevich N. V. \n E-mail: borisevich170@yandex.ru \n";
            break;
        }
        case 42:
        {
            std::cout << "Hi! Now you have admin rights. There aren't any yet, but I'm working on it. Have a nice day! \n";
            break;
        }
        default:
        {
            std::cout << "Sorry, this command code is unavailable. Please try again. \n";
            break;
        }

        }
    }




    return 0;
}
