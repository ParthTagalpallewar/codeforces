#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n;
    cin >> n;

    ll arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    ll sum = arr[0];
    ll cnt = 0;

    if(n == 1){
        cout << 1 << endl;
        return;
    }

    for(int i=0; i<n; i++){

        sum &= arr[i];

        if(sum == 0){
            cnt += 1;
            //if i is not last index of array
            sum = (i != n-1) ? arr[i+1] : 0;
        }

    }

    if(cnt == 0){
        cout << 1 << endl;
        return;
    }

    cout << cnt << endl;
    
}

int main(){

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        
        solve(); 
        
    }
   return 0;
}