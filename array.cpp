#include <iostream>
int main()
{
    std::string car[]={"Mercedes","Mustang","Audi"};
    std::cout<<car[0]<<'\n';
    for(std::string i:car){
        std::cout<<i<<'\n';
    }
    double prices[]={3.00,7.88,9.66};
    int totalsize=sizeof(prices)/sizeof(double);
    for(int i=0;i<totalsize;i++){
        std::cout<<prices[i]<<'\n';
    }
    return 0;
}