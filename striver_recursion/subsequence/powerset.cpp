#include<bits/stdc++.h>
using namespace std;

void solve(int n, int arr[]){

    int limit = (1 << n);

    for(int i=0; i<limit; i++){

        string curr = "";

        for(int j=0; j<n; j++){

            if((i & (1 << j)) != 0){
                curr += arr[j];
            }

        }

        cout << curr << endl;

    }
    
}

int main(){

    int arr[] = {'a', 'b', 'c'};
    int n = sizeof(arr) / sizeof(arr[0]);

    solve(n, arr);

    return 0;
}