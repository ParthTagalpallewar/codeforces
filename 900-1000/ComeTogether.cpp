#include<bits/stdc++.h>
using namespace std;

void solve(){
    int ax, ay;
    int bx, by;
    int cx, cy;

    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;

    //if on same line
    if(bx == cx || by == cy){

        //if same line and opposite
        if(
            ax > bx && ax > cx || 
            ax < bx && ax < bx || 
            ay > by && ay > cy || 
            ay < by && ay < by
        ){

            cout << 1 << endl;
        }else{

            if(bx == cx){
                cout << min(by, cy) << endl;
            }else{
                cout << min(bx, cx) << endl;
            }
            return;
        }

    }else{

        

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