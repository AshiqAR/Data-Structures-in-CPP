#include <iostream>
using namespace std;

void displayArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[],int beg,int mid,int end){
    int i=beg,j=mid+1,k=0;
    int a[end-beg+1];
    while(i<=mid && j<=end){
        if(arr[i] < arr[j])
            a[k++] = arr[i++];
        else
            a[k++] = arr[j++];
    }
    while(i<=mid)
        a[k++] = arr[i++];
    while(j<=end)
        a[k++] = arr[j++];
    
    for(k=0,i=beg;i<=end;i++,k++)
        arr[i] = a[k];
}

void mergeSort(int arr[],int beg,int end){
    if(beg>=end)
        return ;
    int mid = (beg+end)/2;
    mergeSort(arr,beg,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,beg,mid,end);
}

int main(){
    int arr[] = {5,3,4,2,1};
    int len = 5;
    mergeSort(arr,0,len-1);
    displayArray(arr,len);
    return 0;
}