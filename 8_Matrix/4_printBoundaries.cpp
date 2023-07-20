// printint only the boundaries of a matrix
#include<iostream>
#include<vector>
using namespace std;
void printBoundaries(vector< vector<int> > arr){
    int nRows = arr.size();
    int mCols = arr[0].size();
    int top = 0, right = mCols-1, bottom = nRows-1, left = 0;
    if(nRows == 1){
        for(int i = 0; i<mCols; i++){
            cout << arr[0][i] << " ";
        }
    }
    else if(mCols == 1){
        for(int i = 0; i<nRows; i++){
            cout << arr[i][0] << " ";
        }
    }
    else{
        for(int i = left; i<right; i++){
            cout<< arr[top][i] << " ";
        }
        for(int i = top; i<bottom; i++){
            cout<< arr[i][right] << " ";
        }
        for(int i = right; i>left; i--){
            cout << arr[bottom][i] << " ";
        }
        for(int i = bottom; i>top; i--){
            cout << arr[i][top] << " ";
        }
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
    int m = 4, n = 1;
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
    cout<<endl;
    printBoundaries(arr);
    return 0;
}