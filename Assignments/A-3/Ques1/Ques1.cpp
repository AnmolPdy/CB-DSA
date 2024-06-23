#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void intersection_arr(int arr[],int brr[],int N){
	sort(arr,arr+N);
	sort(brr,brr+N);

	vector<int> crr;
	int i=0;
	int j=0;

	while (i < N && j < N) {
        if (arr[i] == brr[j]) {
            crr.push_back(arr[i]);
            i++;
            j++;
        } else if (arr[i] < brr[j]) {
            i++;
        } else {
            j++;
        }
    }


cout << "[";
    for (int i = 0; i < crr.size(); i++) {
        cout << crr[i];
        if (i < crr.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main(){
	int N;
	cin>>N;

	int arr[N];
	int brr[N];

	for(int i=0;i<N;i++){
		cin>>arr[i];
	}

	for(int i=0;i<N;i++){
		cin>>brr[i];
	}

	intersection_arr(arr,brr,N);

	return 0;
}