#include <iostream>
#include "/projects/Cpp_Workspace/Calculator/Compute.hpp"

double a, b, rezult;
int choice;

int main () 
{
    std::cout << "Choose operation.";
    std::cout << "1-Adding, 2-Substracting, 3-Multiplying, 4-Dividing\n";
    std::cin >> choice;
    
    std::cout << "Pass first number:";
    std::cin >> a;
    std::cout << "Pass second number:";
    std::cin >> b;

    Compute compute;  
    switch (choice)
    {
    case 1: {
        rezult = compute.add(a, b);
        break;
    }
    case 2: {
        rezult = compute.substract(a, b);
        break;
    }
    case 3: {
        rezult = compute.multiply(a, b);
        break;
    }
    case 4: {
        rezult = compute.substract(a, b);
        break;
    }
    default:
        break;
    }

    std::cout << rezult;
    return 0;
}