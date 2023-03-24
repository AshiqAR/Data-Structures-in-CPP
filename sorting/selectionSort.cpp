#include <iostream>
using namespace std;

void displayArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[],int n){
    int i,j,minPos,temp;
    for(i=0;i<n-1;i++){
        minPos = i;
        for(j=i+1;j<n;j++){
            if(arr[minPos] > arr[j])
                minPos = j;
        }
        temp = arr[i];
        arr[i] = arr[minPos];
        arr[minPos] = temp;
    }
}


int main(){
    int arr[] = {5,3,4,2,1};
    int len = 5;
    selectionSort(arr,len);
    displayArray(arr,len);
    return 0;
}