#include<iostream>
using namespace std;

class maxHeap{
int *arr;
int size;
int total_size;
public:
maxHeap(int s){
  arr = new int[s];
  size = 0;
  total_size = s;
}

void insert(int value){
  if(size == total_size){
    cout << "Heap Overflow" << endl;
    return;
  }

  arr[size] = value;
  int index = size;
  size++;
  
  while(index > 0 && arr[(index-1)/2] < arr[index]){
    swap(arr[(index-1)/2],arr[index]);
    index = (index-1)/2;
  }

  cout << arr[index] << " is inserted into heap" << endl;
}

void print(){
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void Heapify(int index){
int largest = index;
int left = 2*index + 1;
int right = 2*index+2;

if(left < size && arr[left] > arr[largest])
largest = left;

if(right < size && arr[right] > arr[largest])
largest = right;

if(largest != index){
  swap(arr[largest],arr[index]);
  Heapify(largest);
}
}

void del(){
  if(size==0){
    cout << "Heap Underflow" << endl;
    return;
  }

  cout << arr[0] << " is deleted from heap" << endl;
  arr[0] = arr[size - 1];
  size--;

  if(size==0)
  return;

  Heapify(0);
}
};

int main(){
maxHeap H(10);
H.insert(4);
H.insert(14);
H.del();
H.insert(11);
H.print();
H.insert(114);
H.insert(24);
H.insert(1);
H.del();
H.insert(10);
H.print();
}