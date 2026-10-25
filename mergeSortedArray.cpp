#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     
        int i=m-1;
        int j=n-1;
        int k=n+m-1;

        while(j>=0){
            if( nums1[i]>nums2[j]){
                nums1[k--]=nums1[i--];
            }
            else{
                nums1[k--]=nums2[j--];
            }
        }
}

int main() {
    vector<int> nums1 = {1, 2,3,5,0,0,0,0};
    vector<int> nums2 = {2, 4, 6,7};

    int m = 4;
    int n = 4;

    merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }

    cout << endl;
    return 0;
}