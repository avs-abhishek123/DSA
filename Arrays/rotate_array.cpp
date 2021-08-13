
// IInd program to show that array
// and pointers are different
#include <iostream>
using namespace std;
 
int main()
{   
    cout << "Enter n" << endl;
    int n = 0;
    cin >> n;
    int arr[n];
    cout<< "Enter the elements of array"<<endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];}

    for(int i = n-1; i>=0;i--){
        cout<< arr[i];
   }
}