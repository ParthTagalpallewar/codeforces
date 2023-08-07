#include<bits/stdc++.h>
using namespace std;
void solve(){

    int n, diff;
    cin >> n >> diff;

    if(n == 0){
        cout << 0 << endl;
        return;
    }

    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int left = 0;
    int right = 1;

    int max_cnt = 0;
    int curr_cnt = 0;

    while(right < n){
        int curr_diff = arr[right]-arr[left];

        if(curr_diff <= diff){
            left += 1;
            right += 1;
            curr_cnt += 1;
        }else{
            
            max_cnt = max(max_cnt, curr_cnt+1);
            curr_cnt = 0;
            left = right;
            right += 1;
        }
    }  

    max_cnt = max(max_cnt, curr_cnt+1);


    cout << n-max_cnt << endl;

    
}

int main(){

    int n;
    cin >> n;

for(int i=0; i<n; i++){
   solve();
}
   return 0;
}