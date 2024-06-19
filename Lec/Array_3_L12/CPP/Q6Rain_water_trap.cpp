#include <iostream>
using namespace std;

//most optimal approach
int optimal(int arr[], int n){
    int total=0;
    int i=0;
    int j=n-1;
    int left=0;
    int right=0;

    while(i<=j){
        left=max(left,arr[i]);
        right=max(right,arr[j]);

        if(left<right){
            int watertrapped=left-arr[i];
            total+=watertrapped;
            i++;
        }else{
            int watertrapped=right-arr[j];
            total+=watertrapped;
            j--;
        }
    }
    return total;

}





//optimized method
int optimized(int arr[], int n){
    int total=0;

    int right[n];
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }

    int left=0;
    for(int i=0;i<n;i++){
        left=max(left,arr[i]);
        int watertrapped=min(left,right[i])-arr[i];
        total+=watertrapped;
    }

    return total;
    
}





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

    cout<<optimized(arr,n);

    cout<<optimal(arr,n);

    return 0;
}