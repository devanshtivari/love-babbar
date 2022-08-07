/* An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers. 
   Order is not important.
   -12 11 -13 -5 6 -7 5 -3 -6
   -12 -13 -5 -7 -3 -6 5 6 11
   We arranged the negative elements to one side of the array.
*/
/*  If i is -ve, then we update the pointer by one and swap both the positions.
*/



#include<iostream>
using namespace std;

int main()
{
    int s;cin>>s;
    int arr[s];
    cout<<"Enter the elements of array-\n";
    for(int i=0 ; i<s ; i++){
        cin>>arr[i];
    }
    int p1=0;
    for(int i=0 ; i<s ; i++){
        if(arr[i] < 0){
            int temp = arr[i];
            arr[i] = arr[p1];
            arr[p1] = temp;
            p1++;
        }
    }
    cout<<"sorted elements of array-\n";
    for(int i=0 ; i<s ; i++){
        cout<<arr[i]<<" ";
    }
}
