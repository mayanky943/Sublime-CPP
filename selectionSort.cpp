#include<bits/stdc++.h>
using namespace std;

void selSort(int *arr,int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				swap(arr[i],arr[j]);
			}
		}
	}
}

int main(){
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	selSort(arr,n);

	for(auto x:arr){
		cout<<x<<" ";
	}
	//checking git pull hehe
	return 0;
}
