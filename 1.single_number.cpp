#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int ans=0;
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    cin>>vec[i];
    for(int i=0;i<n;i++)
    {
    ans=ans^vec[i];
    
    }
 cout<<ans;   
}