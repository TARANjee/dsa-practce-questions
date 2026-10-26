#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n ; i++) {
            if(i>0 && nums[i] == nums[i-1]) continue;
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                sum = nums[i] + nums[j] + nums[k];

                if (sum > 0) {
                    k--;
                }
                else if (sum < 0) {
                    j++;
                }
                else {
                    v.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while(j<k && nums[j] == nums[j-1]) j++;
                }
            }
        }
        return v;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = obj.threeSum(nums);

    cout << "Triplets whose sum is zero:" << endl;

    for (auto triplet : ans) {
        cout << "[ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}