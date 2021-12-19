#include <iostream>
#include <vector>
#include <string>
#include "NodeClass.h"
#include "OCListClass.h"

int main()
{
    int choiser = 0;

    std::cout << "Hello!\n";

    OCList<double> ocl;


    while(choiser != 1)
    {
        std::cout << "If you want to end a program, enter 1.\n";
        std::cout << "If you want to add an element to the beginning of the list, enter 2.\n";
        std::cout << "If you want to add an element to the end of the list, enter 3.\n";
        std::cout << "If you want to add an element to a fixed position, enter 4.\n";
        std::cout << "If you want to delete the first element, enter 5.\n";
        std::cout << "If you want to delete the last element, enter 6.\n";
        std::cout << "If you want to delete the element from a fixed position, enter 7.\n";
        std::cout << "If you want to delete the first element with fixed value, enter 8.\n";
        std::cout << "If you want to get the position of the first element with a fixed value, enter 9.\n";
        std::cout << "If you want to get the value of the element with a fixed position, enter 10.\n";
        std::cout << "If you want to sort the list, enter 11.\n";
        std::cout << "If you want to output the list, enter 12.\n";
        std::cout << "If you want to get the developer's contact information, enter 13:\n";

        std::cin >> choiser;

        switch (choiser)
        {
        case 1:
            return 0;

        case 2:
        {
            std::cout << "Enter value: \n";
            double val;
            std::cin >> val;
            ocl.addElement(val, 0);
            break;
        }
        case 3:
        {
            std::cout << "Enter value: \n";
            double val;
            std::cin >> val;;
            ocl.addElementBack(val);
            break;
        }
        case 4:
        {
            std::cout << "Enter value: \n";
            double val;
            std::cin >> val;
            std::cout << "Enter position add to: \n";
            int indexPos = -1;
            std::cin >> indexPos;
            ocl.addElement(val, indexPos);
            break;
        }
        case 5:
        {
            ocl.deleteElementByIndex(0);
            break;
        }
        case 6:
        {
            ocl.deleteTail();
            break;
        }
        case 7:
        {
            std::cout << "Enter position delete from: \n";
            int indexPos = -1;
            std::cin >> indexPos;
            ocl.deleteElementByIndex(indexPos);
            break;
        }
        case 8:
        {
            std::cout << "Enter value to delete: \n";
            double valueDel = -1;
            std::cin >> valueDel;
            ocl.deleteElementByValue(valueDel);
            break;
        }
        case 9:
        {
            std::cout << "Enter value to know about: \n";
            double valueKnow = -1;
            std::cin >> valueKnow;

            Node <double> valuerSame(valueKnow);

            std::cout << "The index of the element is: ";

            std::cout << ocl.foundElementByValue(valueKnow);

            break;
        }
        case 10:
        {
            std::cout << "Enter position to know about: \n";
            int indexKnow = -1;
            std::cin >> indexKnow;

            std::cout << "The value of the element is: ";

            std::cout << ocl[indexKnow] <<std::endl;

            break;
        }
        case 11:
        {
            std::cout << "Sorry, this option is unavailable now. We are working on it.\n";
            break;
        }
        case 12:
        {
            std::cout << ocl;
            break;
        }
        case 13:
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
