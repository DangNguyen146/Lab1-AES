#include <iostream>
#include <iomanip> // manipulator std::setprecision()
#include <sstream>
int main()
{
    float x[200];
    x[0] = 0.413;     //key
    float r = 3.8312; //key
    int i = 0;
    for (i = 1; i < 200; i++)
    {
        x[i] = r * x[i - 1] * (1 - x[i - 1]); // x(n) = r* x(n-1)(1-x(n-1))
        std::cout << std::setprecision(16);
        std::cout << std::fixed << "x[" << i << "]=" << x[i] << std::endl;
    }
}