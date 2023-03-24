#include <iostream>
using namespace std;

void displayArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void quickSort(int arr[],int beg,int end){
    if(beg>=end)
        return;
    int p = beg,i,temp;
    int lower = beg+1;
    int upper = beg+1;
    for(i=lower;i<=end;i++){
        if(arr[p] > arr[i]){
            temp = arr[lower];
            arr[lower] = arr[upper];
            arr[upper] = temp;
            upper++;
            lower++;
        }
        else{
            upper++;
        }
    }
    temp = arr[lower-1];
    arr[lower-1] = arr[p];
    arr[p] = temp;
    p = lower-1;
    quickSort(arr,beg,p-1);
    quickSort(arr,p+1,end);
}

int main(){
    int arr[] = {5,3,4,2,1};
    int len = 5;
    quickSort(arr,0,len-1);
    displayArray(arr,len);
    return 0;
}