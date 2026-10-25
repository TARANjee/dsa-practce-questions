#include <bits/stdc++.h>
using namespace std;

void duplicate(int arr[],int n) {
	unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x:mp){
        if(x.second>1){
            cout<<x.first<<" ";
        }
    } 
}

int main() {
	int n;
    cout<<"enter the size:";
    cin>>n;

    int arr[n];
    cout<<"enter the "<<n<<"element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    duplicate(arr,n);
	return 0;
}

