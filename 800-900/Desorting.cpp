#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;
    int min_diff = INT_MAX;

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    }

    for(int i=1; i<n; i++){
        
        min_diff = min(min_diff, arr[i]-arr[i-1]);
    }

    if(min_diff < 0){
        cout << 0 << endl;
        return;
    }

    cout << (min_diff/2) + 1 << endl;
    return;

}

int main(){

    int n;
    cin >> n; 

    for(int i=0; i<n; i++){
        solve();
    }

    return 0;
}