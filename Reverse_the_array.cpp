#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int arr[] = {1,3,4,2,5,10,45};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;
    int j = n - 1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;    j--;
    } 
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
return 0;
}