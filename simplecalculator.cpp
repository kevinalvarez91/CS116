#include <iostream>
using namespace std;

int addition(int a, int b)
{
    int addition;

    addition = a + b; 
    return addition;

}

double division(int a, int b)
{
    double division;

    division = a / b;

    return division;
}

int subtraction (int a, int b)
{
    int subtraction;
    subtraction = a - b;
    return subtraction;
}

int multiplication (int a, int b)
{
    int multiplication;
    multiplication = a * b;
    return multiplication;
}


int main ()
{

    char operation;
    double number1, number2;
    double z;



    cout << "Select your operation ";
    cin >> operation;
    
    cout << endl << "What is number 1? ";
    cin >> number1;

    cout << endl << "What is number 2? ";
    cin >> number2;


    if (operation == '+')
    {
        z = addition(number1, number2);
        cout << z;
        return 0;

    }
    else if (operation == '/')
    {
        z = division(number1, number2) ;
        cout << z;
    }
    else if ( operation == '-')
    {
        z = subtraction(number1, number2);
        cout << z;
        return 0;
    }
    else if (operation == 'x')
    {
        z = multiplication(number1, number2);
        cout << z;
        return 0;
    }
    else 
    {
        cout << "That is not a valid operator";
        return 1;
    }

}
