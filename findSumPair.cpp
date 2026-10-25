#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class FindSumPairs {
public:
    vector<int> vec1, vec2;
    unordered_map<int, int> mp;

    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        vec1 = nums1;
        vec2 = nums2;

        for (int i = 0; i < vec2.size(); i++) {
            mp[vec2[i]]++;
        }
    }

    void add(int index, int val) {
        mp[vec2[index]]--;
        vec2[index] += val;
        mp[vec2[index]]++;
    }

    int count(int tot) {
        int cnt = 0;

        for (int i = 0; i < vec1.size(); i++) {
            int comp = tot - vec1[i];

            if (mp.count(comp)) {
                cnt += mp[comp];
            }
        }

        return cnt;
    }
};

int main() {
    vector<int> nums1 = {1, 1, 2, 2, 2, 3};
    vector<int> nums2 = {1, 4, 5, 2, 5, 4};

    FindSumPairs* obj = new FindSumPairs(nums1, nums2);

    cout << obj->count(7) << endl;  // Output: 8

    obj->add(3, 2);

    cout << obj->count(8) << endl;  // Output: 2

    obj->add(0, 1);

    cout << obj->count(7) << endl; //Output: 9

    delete obj;

    return 0;
}