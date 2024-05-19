#include <iostream>

void sort(int arr[],int num);

int main(){
    int num;
    std::cout<<"Enter length of the array: ";
    std::cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        int ele;
        std::cout<<"Enter element at index "<<i<<':';
        std::cin>>ele;
        arr[i]=ele;
    }

    sort(arr,num);

    std::string str="";
    for(int i:arr){
        std::string a=std::to_string(i);
        str+=a+',';
    }
    str.pop_back();
    std::cout<<str;
}

void sort(int arr[],int num){
    int temp;
    for(int i=0;i<num-1;i++){
        for(int j=0;j<num-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}