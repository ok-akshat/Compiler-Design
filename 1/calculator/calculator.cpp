#include <iostream>
using namespace std;

// menu driven code

int main()
{
    int choice;
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter 1 to add, 2 to subtract, 3 to multiply, 4 to divide: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case 2:
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case 3:
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case 4:
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
        cout << "Invalid choice";
    }
    return 0;
}