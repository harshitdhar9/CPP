#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of rows :";
    cin>>row;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int s=2*row-2*i;
        for(int j=1;j<=s;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<'\n';
    }
    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int s=2*row-2*i;
        for(int j=1;j<=s;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<'\n';
    }

}