#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;

        for(auto& val:s){
            if(s.contains(val-1)){
                continue;
            }

            int num=val;
            int cur=1;

            while(s.contains(num+1)){
                cur++;
                num++;
            }
            ans=max(ans,cur);
        }
        return ans;
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

    cout<<"Longest consecutive sequence is :"<<longestConsecutive(arr);
    

    return 0;
}