#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
       
        for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
            if (!isalnum(s[i])) continue;
            if (!isalnum(s[j])) continue;
            if (tolower(s[i])!=tolower(s[j])) return 0;
            else{
                i++;
                j--;
            }
        }

        return 1;
    }
};

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    Solution obj;

    if (obj.isPalindrome(s)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}