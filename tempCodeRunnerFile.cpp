
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& nums) {
    int row = nums.size();
    int col = nums[0].size();

    vector<vector<int>> ans(col,vector<int>(row));

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
           ans[i][j]=nums[j][i];
        }
    }

    return ans;
}

int main() {
    int row, col;

    cout << "Enter the row of matrix: ";
    cin >> row;

    cout << "Enter the col of matrix: ";
    cin >> col;

    vector<vector<int>> arr(row, vector<int>(col));

    cout << "Enter the " << row * col << " elements: ";

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> ans = transpose(arr);

    cout << "\nTranspose of the matrix:\n";

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
