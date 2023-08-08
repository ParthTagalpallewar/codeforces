#include<bits/stdc++.h>
using namespace std;

//functional type recursion 
//where function retuns value
int solve(int i, int n){

    //best case
    if(i == n)
        return i; 

    return i + solve(i+1, n);

}

//parameter vise recursion
void solve1(int i, int n, int &sum){

    if(i == n){
        sum += i;
        return;
    }

    sum += i;

    solve1(i+1, n, sum);

}

int main(){

    int sum = solve(1, 5);

    cout << " sum  is " << sum << endl;


    int sum1 = 0;
    solve1(1, 5, sum1);
    cout << " sum  is " << sum1 << endl;

    return 0;
}