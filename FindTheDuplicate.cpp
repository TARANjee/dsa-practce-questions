#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr){
   
    // eg:
    //  [1,3,4,2,2]
    
    int slow=arr[0];
    int fast=arr[0];

    do{
        slow=arr[slow];  // 3 2  
        fast=arr[arr[fast]]; // 2 2
    }while(slow != fast);
    
    int slow2=arr[0];

    while(slow!=slow2){
        slow=arr[slow]; // 4 2
        slow2=arr[slow2]; // 3 2
    }
    return slow;
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

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"dupicate is "<<findDuplicate(arr);


    return 0;
}