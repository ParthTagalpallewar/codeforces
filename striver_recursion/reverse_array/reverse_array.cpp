#include<bits/stdc++.h>
using namespace std;
void solve(int left, int right, int arr[]){

    if(left >= right)
        return;

    int temp = arr[right];
    arr[right] = arr[left];
    arr[left] = temp;

    solve(left+1, right-1, arr);

}

int main(){

    int arr[] = {1, 2, 3, 4, 5};

    solve(0, 4, arr);

    for(int i: arr){cout << i << endl;}
   
    return 0;
}