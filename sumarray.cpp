#include <iostream>

void calcSum(double numbers[],int len);

int main(){
    double numbers[]={1,4,5,6,7,9,23};
    int len=sizeof(numbers)/sizeof(numbers[0]);
    calcSum(numbers,len);
    return 0;
}

void calcSum(double numbers[],int len){
    int sum=0;
    for(int i=0;i<len;i++){
        sum+=numbers[i];
    }
    std::cout<<"The sum of elements in array is: "<<sum<<'\n';
}