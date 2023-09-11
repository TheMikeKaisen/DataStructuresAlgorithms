#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;

    // all the function of unordered set runs in O(1) time complexity
    //insert function
    s.insert(10);
    s.insert(3);
    s.insert(56);
    s.insert(7);

    //printing the values of a set
    for(auto it = s.begin(); it != s.end(); it++){
        cout << (*it) << endl;
    }

    //size 
    cout << "size : " << s.size() << endl;

    //clear
    s.clear(); // deletes the entire set
    cout << "size : " << s.size() << endl;


    s.insert(10);
    s.insert(3);
    s.insert(56);
    s.insert(7); // now size is 4

    //find
    // find function returns an iterator
    if(s.find(56) == s.end()){ // if the find operator returns iterator pointing to end of set, then element is not present in the set
        cout << "not found" << endl;
    }
    else { // if the find operator does'nt point to end of set, which means it lies between begin and end, then it means the element is present in the set
        cout << "found" << endl;
    }

    // erase
    //1
    s.erase(3); // deletes 3 from the set and the size becomes 3
    cout << "size : " << s.size() << endl;

    //2
    auto it = s.begin();
    s.erase(it);
    cout << "size : " << s.size() << endl;

    // count
    // count function is just like the find function , but it returns 0 if an element is not present and 1 if the element is present
    cout << s.count(3) << endl;
    cout << s.count(56) << endl;

    return 0;
}