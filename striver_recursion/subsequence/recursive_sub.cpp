#include<bits/stdc++.h>
using namespace std;
void solve(int index, vector<char> &output, char arr[]){

    if(index >= 3){
        string ans = "";
        for(char i: output){
            ans += i;
        }
        cout << ans << endl;
        return;
    }
    solve(index + 1, output, arr);//for reverse order

    output.push_back(arr[index]);
    solve(index+1, output, arr);


    output.pop_back();

    // solve(index + 1, output, arr); //for normal order
}

int main(){

    char arr[] = {'a', 'b', 'c'};

    vector<char> output;

    solve(0, output, arr);

    return 0;
}