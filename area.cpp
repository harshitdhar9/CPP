#include <iostream>

double square(double length);

int main()
{
    double length=5.0;
    square(length);
    //std::cout<<"Area is "<<area;
    return 0;
}

double square(double length)
{
    double result=length*length;
    std::cout<<result;
    return result;
}