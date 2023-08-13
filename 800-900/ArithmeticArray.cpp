#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n;
    cin >> n;

    int sum = 0;
    int curr;
    for(int i=0; i<n; i++){
        cin >> curr;
        sum += curr;
    }

    if(sum == n){
        cout << 0 << endl;
    }else if(sum > n){

        cout << sum - n << endl;

    }else{

        cout << 1 << endl;

    }

}

int main(){

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
       solve();
    }

   return 0;
}

