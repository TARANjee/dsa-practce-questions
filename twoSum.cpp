#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }

        for(int i=0;i<n;i++){
            int sc=target-nums[i];
            if(mp.count(sc)){
                return {mp[sc].second,i};
            }
        }
        return {-1,-1};
    }

int main(){
    int n=0;
    cout<<"Enter the number of element: ";
    cin>>n; 

    vector<int> arr(n,0);
    cout<<"Enter the "<<n<<" element: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target=0;
    cout<<"Enter the target: ";
    cin>>target;

    vector<int> ans=twoSum(arr,target);
    cout<<"The index of the two number is: "<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}