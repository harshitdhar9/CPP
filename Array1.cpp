#include <iostream>
using namespace std;

void Printarray(int arr[],int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int len;
    cout<<"Enter length of array: ";
    cin>>len;

    cout<<endl;

    int arr[len];
    for(int i=0;i<len;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }

    cout<<"Original Array: ";
    Printarray(arr,len);

    cout<<endl;

    char choice;
    cout<<"Enter choice(y/n)";
    cin>>choice;

    while(choice=='y'){

        int element;
        cout<<"Enter element to insert: ";
        cin>>element;

        cout<<"Enter choice: (1-Insert at start,2-Insert at end,3-Insert at index): ";
        int input;
        cin>>input;
        
        cout<<endl;

        if(input==1){
            len=len+1;
            for(int i=len-1;i>=0;i--){
                arr[i]=arr[i-1];
            }
            arr[0]=element;

            cout<<"Array after Insertion: ";
            Printarray(arr,len);
        }
        else if(input==2){
            len=len+1;
            arr[len-1]=element;

            cout<<"Array after Insertion: ";
            Printarray(arr,len);
        }
        else if(input==3){
            len=len+1;
            cout<<"Enter index";
            int index;
            cin>>index;
            for(int i=len-1;i>=index;i--){
                arr[i]=arr[i-1];
            }
            arr[index]=element;

            cout<<"Array after Insertion: ";
            Printarray(arr,len);
        }
        else{
            cout<<"Not a valid choice!";
        }
        cout<<endl;
        cout<<"Enter y to continue or n to exit: ";
        cin>>choice;
    }
    return 0;
}