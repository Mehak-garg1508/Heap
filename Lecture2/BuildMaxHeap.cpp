// Using step down method
#include<iostream>
using namespace std;

void Heapify(int arr[],int index, int size){
  int largest = index;
  int left = 2*index + 1;
  int right = 2*index + 2;

  if(left < size && arr[left] > arr[largest]){
    largest = left;
  }

  if(right < size && arr[right] > arr[largest]){
    largest = right;
  }

  if(largest!=index){
    swap(arr[largest],arr[index]);
    Heapify(arr,largest,size);
  }
}

void BuildMaxHeap(int arr[],int n){
for(int i = n/2 - 1; i >= 0; i--){
Heapify(arr,i,n);
}
}

void printHeap(int arr[], int n){
for(int i = 0; i < n; i++){
  cout << arr[i] << " ";
}
cout << endl;
}

int main(){
  int arr[] = {10,3,8,9,5,13,18,14,11,70};
  int n = 10;
  BuildMaxHeap(arr,n);
  printHeap(arr,10);
}