#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
// For max Heap 
priority_queue<int>p;
p.push(10);
p.push(11);
p.push(20);
p.push(14);
p.push(18);
// Top element
cout << p.top() << endl;
// delete
p.pop();
// size
cout << p.size() << endl;
// printing
while(!p.empty()){
  cout << p.top() << " ";
  p.pop();
}
cout << endl;
// min heap
priority_queue<int,vector<int>,greater<int>>p1;
p1.push(10);
p1.push(11);
p1.push(20);
p1.push(14);
p1.push(18);
cout << p1.top() << endl;
// printing element
while(!p1.empty()){
  cout << p1.top() << " ";
  p1.pop();
}
}