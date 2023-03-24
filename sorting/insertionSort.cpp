#include <iostream>
using namespace std;

void displayArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        j = i-1;
        while(arr[j] > arr[j+1] && j>=0){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
        }
    }
}

int main(){
    int arr[] = {5,3,4,2,1};
    int len = 5;
    insertionSort(arr,len);
    displayArray(arr,len);
    return 0;
}
