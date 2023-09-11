// priority queue in the stl is used to make max heap or min heap.
// it has various functions such as : top(), size(), pop(), etc.

#include<iostream>
#include<queue>
using namespace std;

int main(){
    // max heap
    priority_queue<int> pq;
    pq.push(34);
    pq.push(21);
    pq.push(38);
    pq.push(15);
    pq.push(55);

    cout << "Element at the top : " << pq.top() << endl; // prints the element at the top position according to max heap
    pq.pop();// deletes the top element from the heap
    cout << "Element at the top : " << pq.top() << endl; 

    cout << "size of the heap : " << pq.size() << endl; // prints the size of the element


    // min heap
    cout << "------MIN HEAP--------" << endl ;
    priority_queue<int, vector<int>, greater<int> > minheap; // syntax to create a min heap
    minheap.push(34);
    minheap.push(21);
    minheap.push(38);
    minheap.push(15);
    minheap.push(55);

    cout << "Element at the top : " << minheap.top() << endl; // prints the element at the top position according to max heap
    minheap.pop();// deletes the top element from the heap
    cout << "Element at the top : " << minheap.top() << endl; 

    cout << "size of the heap : " << minheap.size() << endl; // prints the size of the element

    return 0;
}