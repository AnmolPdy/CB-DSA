#include <iostream>
using namespace std;


















// Brute-Force Approach
int brute_force(int arr[], int n){
    int total=0;

    for(int i=0;i<n;i++){
        
        int leftblock=arr[i];
        for(int j=i-1;j>=0;j--){
            leftblock=max(leftblock,arr[j]);
        }

        int rightblock=arr[i];
        for(int j=i+1;j<n;j++){
            rightblock=max(rightblock,arr[j]);
        }

        int water_trapped=min(leftblock,rightblock)-arr[i];
        total+=water_trapped;
    }
    return total;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<brute_force(arr,n);

    return 0;
}