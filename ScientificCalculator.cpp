#include <iostream>
#include <cmath>

using namespace std;

class ScientificCalculator
{
public:
    // Arithmetic operations
    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    ScientificCalculator calc;
    double a, b;
    int choice;

    while(1)
    {
        cout << "\n Scientific Calculator" << endl;
        cout << "1. Add" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice)
        {
        case 1:
            cout << "Enter two numbers to add: ";
            cin >> a >> b;
            cout << "Result: " << calc.add(a, b) << endl;
            break;
        case 0:
            cout << "\n Are you sure you want to exit? (y/n): ";
            char exitChoice;
            cin >> exitChoice;
            if (exitChoice == 'y' || exitChoice == 'Y')
            {
                exit(0);
            }
            break;
        default:
            cout << "\n Invalid choice.\nEnter again.";
            getchar();
        }
    }

    return 0;
}



