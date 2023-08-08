#include<bits/stdc++.h>
using namespace std;
void printAllSubsequenceWithSumTarget(int index, vector<int> &ds, int arr[], int target, int size, int my_sum){

    if(index >= size ){

        if (target == my_sum){
            for (int i : ds)
            {
                cout << i << " ";
            }
            cout << endl;

        }
        return;
    }

    ds.push_back(arr[index]);
    my_sum += arr[index];

    printAllSubsequenceWithSumTarget(index+1, ds, arr, target, size, my_sum);

    ds.pop_back();
    my_sum -= arr[index];

    printAllSubsequenceWithSumTarget(index+1, ds, arr, target, size, my_sum);


}
bool printOneSubsequenceWithSumTarget(int index, vector<int> &ds, int arr[], int target, int size, int my_sum){

    if(index >= size ){

        if (target == my_sum){
            for (int i : ds)
            {
                cout << i << " ";
            }

            return true;

        }
        return false;
    }

    ds.push_back(arr[index]);
    my_sum += arr[index];

    //if this function return true no need to go further 
    if(printOneSubsequenceWithSumTarget(index+1, ds, arr, target, size, my_sum) == true){
        return true;
    }

    ds.pop_back();
    my_sum -= arr[index];

    if(printOneSubsequenceWithSumTarget(index+1, ds, arr, target, size, my_sum)){
        return true;
    }

    return false; // if non of about return true return false;


}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector<int> ds;
    int sum = 20;
    int index= 0;
    int mysum = 0;
    printOneSubsequenceWithSumTarget(index, ds, arr, sum, size-1, mysum);

    return 0;
}