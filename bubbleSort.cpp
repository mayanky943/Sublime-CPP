#include<bits/stdc++.h>
using namespace std;

void bubblesort(int* input,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(input[j+1]<input[j]){
				swap(input[j+1],input[j]);
			}
		}
	}
}

int main(){
	//bubble sort is basically the opposite of selection sort
	//max element is sent at the last of an array
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	bubblesort(arr,n);

	for(auto x:arr){
		cout<<x<<" ";
	}

	return 0;
}