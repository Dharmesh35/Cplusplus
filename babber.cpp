#include <bits/stdc++.h>
using namespace std;

// bool check(int arr[],int k,int n){
//     if(n==0){
//         return false;
//     }
//     if(arr[0]==k){
//         return true;
//     }
//     else{
//         return check(arr+1,k,n-1);
//     }
// }

// int main(){
//     int arr[5]={1,2,3,5,4};
//     int key=5;
//     int size=5;
//     bool ans=check(arr,key,size);
//     cout<<ans;
//     return 0;
// }

// bool check(int arr[], int k, int s, int e)
// {
//     if (s > e)
//     {
//         return false;
//     }

//     int mid = s + (e - s) / 2;

//     if (arr[mid] == k)
//     {
//         return true;
//     }

//     if (arr[mid] > k)
//     {
//         return check(arr, k, s, mid - 1);
//     }
//     else
//     {
//         return check(arr, k, mid + 1, e);
//     }
// }
