// Using step down method
#include<iostream>
#include<bits/stdc++.h>
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

int kthSmallestElement(int arr[],int n,int k){
priority_queue<int>p;
for(int i = 0; i < k; i++){
  p.push(arr[i]);
}
for(int i = k; i < n; i++){
  if(arr[i] < p.top()){
    p.pop();
    p.push(arr[i]);
  }
}
return p.top();
}

int main(){
  int arr[] = {10,3,8,9,5,13,18,14,11,70};
  int n = 10;
  BuildMaxHeap(arr,n);
  printHeap(arr,10);
  cout << endl;
  cout << kthSmallestElement(arr,10,4) << endl;;
}