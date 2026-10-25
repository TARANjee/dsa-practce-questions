#include<bits/stdc++.h>
using namespace std;

void rotatebyk(vector<int> &arr,int k){
    int n=arr.size();
    k%=n;
    //O(n*k) brute force
    // for(int i=0;i<k;i++){
    //     int shift=arr[n-1];
    //     for(int j=n-1;j>0;j--){
    //         arr[j]=arr[j-1];
    //     }
    //     arr[0]=shift;
    // }
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());

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
    int k=0;
    cout<<"Enter the number of element rotate: ";
    cin>>k;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotatebyk(arr,k);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}