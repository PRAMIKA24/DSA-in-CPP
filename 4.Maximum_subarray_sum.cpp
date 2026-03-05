#include<iostream>
#include<vector>
using namespace std;
int algo(vector<int> nums)
{
    int currsum=0,maxsum=INT32_MIN;
    for(int val:nums)
    {
    currsum+=val;
    maxsum=max(currsum,maxsum);
    if (currsum<0)
    currsum=0;
    }
    return maxsum;

}
int main()
{
    vector<int> nums={-50,20,30,20};
    int msum=algo(nums);
    cout<<msum;


}
