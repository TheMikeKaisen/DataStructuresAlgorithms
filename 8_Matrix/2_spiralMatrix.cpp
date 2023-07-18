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

vector<int> spiralMatrix(vector< vector<int> > arr){
    int nRow = arr.size();
    int mCol = arr[0].size();

    int top = 0, bottom = nRow-1, left = 0, right = mCol-1;
    vector<int> v;
    while(top<=bottom && left <= right){
        for(int i = left; i<=right; i++){
            v.push_back(arr[top][i]);
        }
        top++;

        for(int j = top; j<=bottom; j++){
            v.push_back(arr[j][right]);
        }
        right--;
        if(top<=bottom){
            for(int i = right; i>=left; i--){
                v.push_back(arr[bottom][i]);
            }
            bottom--;

        }
        if(left<=right){
            for(int i = bottom; i>=top; i--){
                v.push_back(arr[i][left]);
            }
            left++;
        }
    }
    return v;
}

void print(vector<int> v){
    
        for(int j = 0;j< v.size(); j++){
            cout << v[j] << " ";
        }
        cout << endl;
    }

int main(){
    int m = 4, n = 4;
    vector< vector<int> > arr;

    for(int i = 0; i<m; i++){
        vector<int> v;
        for(int j = 0; j<n; j++){
            v.push_back(i*10 + j);
        }
        arr.push_back(v);
    }
    print(arr);
    vector<int> v1 = spiralMatrix(arr);
    print(v1);
    return 0;
}