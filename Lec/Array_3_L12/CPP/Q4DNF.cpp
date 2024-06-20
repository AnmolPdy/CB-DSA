#include <iostream>
using namespace std;

void dnf_sorting_algorithm(int arr[],int n){
    int low=-1;
    int mid=0;
    int high=n;

    while(mid<high){
        if(arr[mid]==0){
            low++;
            swap(arr[low],arr[mid]);
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else if(arr[mid]==2){
            high--;
            swap(arr[high],arr[mid]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    dnf_sorting_algorithm(arr,n);
}