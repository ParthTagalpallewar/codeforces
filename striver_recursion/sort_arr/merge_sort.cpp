#include<bits/stdc++.h>
using namespace std;

void sort123(int l, int r, int mid, int arr[], int high)
{
    
    vector<int> temp;

    int left = l;
    int right = mid+1;

    while(left <= mid && right <= high){
        
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left += 1;
        }else{
            temp.push_back(arr[right]);
            right += 1;
        }

    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left += 1;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right += 1;
    }
    
    for(int i=l; i<=high; i++){
        arr[i] = temp[i - l];
    }

}

void merge_sort1(int l, int r, int arr[], int size){

    if(l >= r) return;
    
    int mid = (l + r)/2;

    merge_sort1(l, mid, arr, size);
    merge_sort1(mid+1, r, arr, size);
    sort123(l, r, mid, arr, size);

}


int main(){

    int arr[] = {8, 7, 6, 5, 4, 3, 2, 1};

    int size = sizeof(arr)/sizeof(arr[0]);

    int l = 0;
    int r = (sizeof(arr)/sizeof(arr[0]))-1;

    merge_sort1(l, r, arr, size);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

