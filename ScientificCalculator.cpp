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

    double subtract(double a, double b)
    {
        return a - b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }

    double divide(double a, double b)
    {
        if (b == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return NAN; // Not a Number
        }
        return a / b;
    }

// Trigonometric functions
    double sine(double angle_degrees)
    {
        return sin(degreesToRadians(angle_degrees));
    }

    double cosine(double angle_degrees)
    {
        return cos(degreesToRadians(angle_degrees));
    }

    double tangent(double angle_degrees)
    {
        return tan(degreesToRadians(angle_degrees));
    }

// Exponentiation
    double power(double base, double exponent)
    {
        return pow(base, exponent);
    }

// Square root
    double squareRoot(double number)
    {
        if (number < 0)
        {
            cout << "Error: Cannot calculate square root of a negative number!" << endl;
            return NAN;
        }
        return sqrt(number);
    }

// Logarithms
    double logarithm(double number)
    {
        if (number <= 0)
        {
            cout << "Error: Cannot calculate logarithm of a non-positive number!" << endl;
            return NAN;
        }
        return log(number);
    }

    double logarithm(double number, double base)
    {
        if (number <= 0 || base <= 0 || base == 1)
        {
            cout << "Error: Invalid input for logarithm calculation!" << endl;
            return NAN;
        }
        return log(number) / log(base);
    }

private:
// Helper function to convert degrees to radians
    double degreesToRadians(double angle_degrees)
    {
        return angle_degrees * M_PI / 180.0;
    }
};

int main()
{
    ScientificCalculator calc;
    double a, b;
    int choice;

    cout << "Scientific Calculator" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Sine" << endl;
    cout << "6. Cosine" << endl;
    cout << "7. Tangent" << endl;
    cout << "8. Power" << endl;
    cout << "9. Square Root" << endl;
    cout << "10. Natural Logarithm" << endl;
    cout << "11. Logarithm (Custom Base)" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter two numbers to add: ";
        cin >> a >> b;
        cout << "Result: " << calc.add(a, b) << endl;
        break;
    case 2:
        cout << "Enter two numbers to subtract: ";
        cin >> a >> b;
        cout << "Result: " << calc.subtract(a, b) << endl;
        break;
    case 3:
        cout << "Enter two numbers to multiply: ";
        cin >> a >> b;
        cout << "Result: " << calc.multiply(a, b) << endl;
        break;
    case 4:
        cout << "Enter two numbers to divide: ";
        cin >> a >> b;
        cout << "Result: " << calc.divide(a, b) << endl;
        break;
    case 5:
        cout << "Enter angle in degrees for sine: ";
        cin >> a;
        cout << "Result: " << calc.sine(a) << endl;
        break;
    case 6:
        cout << "Enter angle in degrees for cosine: ";
        cin >> a;
        cout << "Result: " << calc.cosine(a) << endl;
        break;
    case 7:
        cout << "Enter angle in degrees for tangent: ";
        cin >> a;
        cout << "Result: " << calc.tangent(a) << endl;
        break;
    case 8:
        cout << "Enter base and exponent for power: ";
        cin >> a >> b;
        cout << "Result: " << calc.power(a, b) << endl;
        break;
    case 9:
        cout << "Enter number to find square root: ";
        cin >> a;
        cout << "Result: " << calc.squareRoot(a) << endl;
        break;
    case 10:
        cout << "Enter number for natural logarithm: ";
        cin >> a;
        cout << "Result: " << calc.logarithm(a) << endl;
        break;
    case 11:
        cout << "Enter number and base for logarithm: ";
        cin >> a >> b;
        cout << "Result: " << calc.logarithm(a, b) << endl;
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

