#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int s, int e ){
    int mid = (s + e)/2;
    int lenLeft = mid - s + 1;
    int lenRight = e - mid;
    int* leftArray = new int[lenLeft];
    int* rightArray = new int[lenRight];
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;
    int k = s;
    for(int i =0; i<lenLeft; i++){
        leftArray[i] = arr[k++];
    }
    k = mid + 1;
    for(int j =0; j<lenRight; j++){
        rightArray[j] = arr[k++];
    }
    
    while(rightIndex<lenRight && leftIndex < lenLeft){
        if(leftArray[leftIndex]<rightArray[rightIndex]){
            arr[mainArrayIndex++] = leftArray[leftIndex++];
        }
        else {
            arr[mainArrayIndex++] = rightArray[rightIndex++];
        }
    }
    while(leftIndex<lenLeft){
        arr[mainArrayIndex++] = leftArray[leftIndex++];
    }
    while(rightIndex<lenRight){
        arr[mainArrayIndex++] = rightArray[rightIndex++];
    }
    delete[] leftArray;
    delete[] rightArray;
}
void mergeSort(int arr[], int start, int end){
    if(start>=end){
        return ;
    }
    int mid = start + (end-start)/2;
    // left side array
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end);
}
int main(){
    int arr[] = {2,1,9,3,10,8,7};
    int size =  sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size-1;
    cout<<"Original array: ";
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    
    mergeSort(arr, start, end);
    cout<<"Sorted array: ";
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}