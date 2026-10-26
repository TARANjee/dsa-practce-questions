//Write a C++ Program to count vowels, consonants, digits, special characters in given string
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void count(string s) {
    int vowels=0,consonants=0,digits=0,spaces=0,special=0;

    for(char str:s){
    if(tolower(str)=='a' ||tolower(str)=='e' ||tolower(str)=='i' ||tolower(str)=='o' ||tolower(str)=='u'){
            vowels++;
        }
    else if((str>='a' && str<='z') || (str>='A' && str<='Z')){
            consonants++;
    }
    else if(str==' '){
        spaces++;
    }
    else if(isdigit(str)) digits++;
    else  special++;
    
    }
    cout<<"Vowels: "<<vowels;
    cout<<"\nConsonants: "<<consonants;
    cout<<"\nDigits: "<<digits;
    cout<<"\nspace: "<<spaces;
    cout<<"\nspecial: "<< special;
    }
};

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    Solution obj;

    obj.count(s);
       
    
    return 0;
}