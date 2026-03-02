#include<iostream>
#include<vector>
using namespace std;

void algo(vector<int> nums, int target) {
    int n = nums.size();
    vector<int> ans;
    int i = 0, j = n - 1;

    while (i < j) {
        int ps = nums[i] + nums[j];
        if (ps > target) {
            j--;
        }
        else if (ps < target) {
            i++;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            break; // stop after finding first pair
        }
    }

   cout<<ans[0]<<","<<ans[1];
}

int main() {
    vector<int> nums = {20, 30, 50, 70}; // sorted input 
    int target = 80;
    algo(nums, target);
}
