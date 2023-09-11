// to find the kth smallest element in the heap

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
        int j = nums.size() - k;
        priority_queue<int> q;

        for(int i = 0; i <= j; i++){
            q.push(nums[i]);
        }
        for(int i = j + 1; i < nums.size(); i++){
            if(nums[i] < q.top()){
                q.pop();
                q.push(nums[i]);
            }
        }
        return q.top();
    }
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(4);
    v.push_back(8);
    v.push_back(13);
    v.push_back(7);
    v.push_back(17);
    int sm = findKthLargest(v, 4);

    cout << sm << endl;

    return 0;
}