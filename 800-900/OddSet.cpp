#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int curr;
    int oc = 0;

    for(int i=0; i<2*n; i++){
        cin >> curr;

        oc += (curr & 1);
    }

    if(oc != 0 && oc >= n && oc % n == 0 && ((oc/n)&1) == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
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