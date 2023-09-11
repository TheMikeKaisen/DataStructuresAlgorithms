// inserting an element in heap

#include<iostream>
using namespace std;

class Heap{
    public:
        int arr[100];
        int size;
        Heap(){
            arr[0] = -1;
            size = 0;
        }
        // insertion
        void insert(int k){
            size = size + 1;
            arr[size] = k;
            int i = size;
            while( i > 1){
                int parent = i/2;

                if(arr[parent] < arr[i]){
                    swap(arr[parent], arr[i]);
                    i = parent;
                }
                else {
                    return;
                }
                    
            }
        }

        void deleteRoot(){
            if(size == 0){
                cout << "nothing to be deleted ";
            }
            arr[1] = arr[size];
            size--;

            int i = 1;
            while(i < size){
                int leftIndex = i*2;
                int rightIndex = i*2+1;

                if(leftIndex < size && arr[i] < arr[leftIndex]){
                    swap(arr[i], arr[leftIndex]);
                    i = leftIndex;
                }
                else if(rightIndex < size && arr[i] < arr[rightIndex]){
                    swap(arr[i], arr[rightIndex]);
                    i = rightIndex;
                }
                else {
                    return;
                }
                
            }
        }


        //pirnting the heap
        void print(){
             for(int i = 1; i <= size; i++){
                cout << arr[i] << " ";
             }   
             cout << endl;
        }
};
int main(){
    Heap h;
    h.insert(61);
    h.insert(54);
    h.insert(59);
    h.insert(50);
    h.insert(52);

    h.print();
    
    h.deleteRoot();
    h.print();
    return 0;
}