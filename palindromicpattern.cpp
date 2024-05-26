#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of rows :";
    cin>>row;
    for(int i=1;i<=row;i++){
        int j;
        for(j=1;j<=row-i;j++){
            cout<<"  ";
        }
        int k=i;
        for(;j<=row;j++){
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=row+i-1;j++){
            cout<<k++<<" ";
        }
        cout<<'\n';
    }
}

