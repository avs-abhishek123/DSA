#include <bits/stdc++.h>
using namespace std;
void leftRotatebyOne(int arr[], int n)
{
    int temp=arr[0],i;
    for(int i =0;i<n-1;i++){
        arr[i]=arr[i+1];}
    arr[n-1]=temp;    
    
    
}
void leftRotate(int arr[], int d, int n){
    for(int i=0;i<d;i++){
        leftRotatebyOne(arr,n);
    }
}
void printArray(int arr[], int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i]<< " ";
    }
}
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    //sizeof(arr) =28 & sizeof(arr[0])=4 each byte is of 4
    //cout<< sizeof(arr)<<endl;
    //cout<< sizeof(arr[0]);
    // Function calling
    leftRotate(arr, 2, n);
    printArray(arr, n);
 
    return 0;
}