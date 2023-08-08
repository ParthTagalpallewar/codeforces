#include<bits/stdc++.h>
using namespace std;
bool solve(int l, string str, int r){

    if(l > r) return true;

    if(str[l] == str[r]){
        return solve(l+1, str, r-1) == true;
    }else{
        return false;
    }

}

int main(){


    string str = "ABA";

    bool is_palindrome = solve(0, str, str.size()-1);

    cout << (is_palindrome == true ? "Palindrome" : "Not palindrome") << endl;

    return 0;
}