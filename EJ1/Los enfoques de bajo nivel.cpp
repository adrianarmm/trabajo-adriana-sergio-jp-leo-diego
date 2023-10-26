#include<iostream>

bool errorFlag = false;

int divide(int a, int b)
{
    if (b == 0)
    {

        errorFlag = true;
        return 0;
    }
    else {
        return a / b;
    }
}

int main()
{
    int result = divide(5, 0);
    if (errorFlag)
    {
        std::cout << "Ocurrió un error: división por cero." << std::endl;
        // Se maneja el error y se reinicia la bandera
        errorFlag = false;
    }

    return 0;
}