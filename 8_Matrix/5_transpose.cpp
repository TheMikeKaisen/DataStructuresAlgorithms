// to print the transpose of a matrix

#include<iostream>
#include<vector>
using namespace std;
void transpose(vector< vector<int> > v){
    int nRows = v.size();
    int mCols = v[0].size();
    for(int j = 0; j<mCols; j++){
        for(int i = 0; i<nRows; i++){
            cout << v[i][j] << " ";
        }
        cout<<endl;
    }
}

void print(vector<vector<int> > v){
    for(int i = 0; i<v.size(); i++){
        for(int j = 0;j< v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int m = 4, n = 4;
    vector<vector<int> > arr;

    for (int i = 0; i < m; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            v.push_back(i * 10 + j);
        }
        arr.push_back(v);
    }
    print(arr);
    cout << endl;
    transpose(arr);
    return 0;
}