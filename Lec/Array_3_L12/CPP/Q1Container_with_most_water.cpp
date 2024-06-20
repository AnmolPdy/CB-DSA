#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

//optimal approach
int optimal(int arr[],int n){
    int i=0;
    int j=n-1;
    int maxsofar=INT_MIN;
    
    while(i<j){
        int area=(j-i)*(min(arr[i],arr[j]));
        maxsofar=max(maxsofar,area);

        if(arr[i]<<arr[j]){
            i++;
        }else{
            j--;
        }
    }

    return maxsofar;
} 



//bruteforce approach
int bruteforce(int arr[],int n){
    int maxsofar=INT_MIN;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int area=(j-i)*(min(arr[i],arr[j]));
            maxsofar=max(maxsofar,area);
        }
    }
    
    return maxsofar;
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<bruteforce(arr,n);

    cout<<optimal(arr,n);
    return 0;
}