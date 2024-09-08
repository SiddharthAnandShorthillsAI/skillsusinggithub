#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//made some changes

void print(int *arr,int n){
    
    for(int i=0;i<5;i++){
        arr[i]=arr[i]*arr[i];
    }
    sort(arr,arr+5);
}
int main()
{
    int arr[]={-2,-1,3,5,7};
    print(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
