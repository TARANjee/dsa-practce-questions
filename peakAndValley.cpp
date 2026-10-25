#include <iostream>
#include <vector>
using namespace std;

int peakValleyDifference(vector<int>& nums) {
     int i=0;
        int j=1;
        int k=2;
        int peak=0;
        int valley=0;
        while(k<nums.size()){
            if((nums[j]>nums[i]) && (nums[j]>nums[k])){
                peak+=nums[j];
            }
            else if((nums[j]<nums[i]) && (nums[j]<nums[k])){
                valley+=nums[j];
            }
            i++;
            j++;
            k++;
        }
        return peak-valley;
}

int main() {
    vector<int> nums = {-5,-6,-1,-2,5,3,2};

    cout << peakValleyDifference(nums) << endl;

    return 0;
}