#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{

    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << " ";
    }
    cout << endl;
}

void print(vector<vector<int> > v){
    for(int i = 0; i<v.size(); i++){
        for(int j = 0;j< v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

vector<int> snake(vector<vector<int> > v)
{
    int nRows = v.size();
    int nCols = v[0].size();
    vector<int> arr;
    for (int i = 0; i < nRows; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = nCols-1; j >= 0; j--)
            {
                arr.push_back(v[i][j]);
            }
        }
        else
        {
            for (int j = 0; j < nCols; j++)
            {
                arr.push_back(v[i][j]);
            }
        }
    }
    return arr;
}
int main()
{
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
    vector<int> v1 = snake(arr);
    print(v1);
    return 0;
}