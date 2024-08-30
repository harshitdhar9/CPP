#include <iostream>
using namespace std;

void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[i],arr[min]);
        }
    }
}

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void Maxcount(int arr[], int size) {
    int maxCount = 0;        
    int freq_ele;

    for (int i = 0; i < size; i++) {
        int count = 1;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            freq_ele = arr[i];
        }
    }

    cout << "Element with the highest count: " << freq_ele << " (occurs " << maxCount << " times)" << endl;
}

void printTop3FrequentElements(int arr[], int size) {
    int firstMaxCount = 0, secondMaxCount = 0, thirdMaxCount = 0;
    int firstElement, secondElement, thirdElement;

    for (int i = 0; i < size; i++) {
        int count = 1;

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > firstMaxCount) {
            thirdMaxCount = secondMaxCount;
            thirdElement = secondElement;

            secondMaxCount = firstMaxCount;
            secondElement = firstElement;

            firstMaxCount = count;
            firstElement = arr[i];
        } else if (count > secondMaxCount && arr[i] != firstElement) {
            thirdMaxCount = secondMaxCount;
            thirdElement = secondElement;

            secondMaxCount = count;
            secondElement = arr[i];
        } else if (count > thirdMaxCount && arr[i] != firstElement && arr[i] != secondElement) {
            thirdMaxCount = count;
            thirdElement = arr[i];
        }
    }
    cout<<"Top 3 frequent elements are: "<<firstElement<<" "<<secondElement<<" "<<thirdElement<<endl;
}

int main(){
    int n;

    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    sort(arr,n);
    printarr(arr,n);

    cout<<endl;
    Maxcount(arr,n);
    return 0;
}