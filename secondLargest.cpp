#include <iostream>
#include <vector>
using namespace std;

int getSecondLargest(int arr[],int n) {
        // Code Here

        int large = -1, secondLarge = -1;
        
        for(int i = 0;i<n;i++){
            large = max(arr[i],large);
        }
        for(int i = 0;i<n;i++){
            if(arr[i]>secondLarge && arr[i]!=large){
            secondLarge=arr[i];
            }
        }
        
       return (secondLarge == -1) ? -1 : secondLarge;
}

int main() {
    int n;
    cout<<"Enter Size of array"<<endl;
    cin >> n;
    int arr[n];
    cout<< "Enter values for array: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Second Largest Element in an array is : "<<getSecondLargest(arr,n);
    return 0;
}
