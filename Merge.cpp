#include <iostream>
using namespace std;

void Merge(int arr[], int start_index, int mid_index, int end_index){
    int n1=mid_index-start_index+1;
    int n2=end_index-mid_index;
    int L[n1], R[n2];

    for(int i=0;i<n1;i++){
        L[i]=arr[start_index+i];
    } 
    for(int j=0;j<n2;j++){
        R[j]=arr[mid_index+1+j];
    }

    int i=0,j=0,k=start_index;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int start_index, int end_index) {
    if (start_index < end_index) {
        int mid_index = start_index + (end_index - start_index) / 2;

        MergeSort(arr, start_index, mid_index);
        MergeSort(arr, mid_index + 1, end_index);
        Merge(arr, start_index, mid_index, end_index);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
