// creation, insertion, deletion of hashmap

#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    // unordered map : an unordered map is a type of associative container that is typically implemented as a hash table. It is also sometimes referred to as a hash map or dictionary in other programming languages. Unordered maps provide a way to store key-value pairs, where each key is unique within the container, and you can quickly retrieve the associated value using the key.

    // creation
    unordered_map<string, int> m;

    //INSERTION

    // 1
    pair<string, int> pair1 = make_pair("Mera", 1);
    m.insert(pair1);

    // 2
    pair<string, int> pair2("naam", 2);
    m.insert(pair2);

    // 3
    m["karthik"] = 3;

    // what will happen in this case:
    m["karthik"] = 5; // in this case, the value of (karthik, 3) will be replaced by (karthik, 5)

    //SEARCHING

    cout << m["naam"] << endl;

    cout << m.at("Mera") << endl; // using at function

    // if i search for a key which is not present
    //1
    //cout << m.at("bro") << endl; // this will return an error
    //2
    //cout << m["bro"] << endl; // when tried to find a key that does not exist using this way, map creates the given key, and assigns value as zero. so this will return zero.

    // important : now, if i write 2 before 1 :
    cout << m["nair"] << endl;
    cout << m.at("nair") << endl;
    // now 2nd method being called before 1, already created a new key with value zero, and method 1 being called after 2, find that there is already a value 0 present. so both will print 0

    // SIZE 
    cout << "Size : " << m.size() << endl;

    // COUNT 
    cout << "count : "<< m.count("system" ) << endl; // returns 0 if not present
    cout <<"count : " << m.count("karthik") << endl; // returns 1 if present

    // ERASE
    m.erase("karthik");
    cout << "size : " << m.size() << endl;

    // ITERATING THROUGH ALL THE ELEMENTS USING ITERATOR
    cout << "---printing key values---"<< endl;
    unordered_map<string, int > :: iterator it = m.begin();

    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it ++;
    }
    
    return 0;
}