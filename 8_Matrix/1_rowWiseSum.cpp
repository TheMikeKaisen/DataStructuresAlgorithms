#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> v;
    for(int i = 0; i<mCols; i++){
        if(i&1){
            // bottom to top
            for(int j = nRows-1; j>=0; j--){
                v.push_back(arr[j][i]);
            }
        }
        else{
            // top to bottom 
            for(int j = 0; j<nRows; j++){
                v.push_back(arr[j][i]);
            }
        }
    }
    return v;
}
int main(){

    return 0;
}