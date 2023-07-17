// general purpose print function using vector of vectors as an argument

#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int> > v){
    for(int i = 0; i<v.size(); i++){
        for(int j = 0;j< v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int m = 3, n = 2;
    vector< vector<int> > arr;

    for(int i = 0; i<m; i++){
        vector<int> v;
        for(int j = 0; j<n; j++){
            v.push_back(i);
        }
        arr.push_back(v);
    }

    print(arr);
    
    return 0;
}