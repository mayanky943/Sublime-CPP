#include<bits/stdc++.h>
using namespace std;

void linearSearch(int arr[],int key,int n){
	int index=-1;
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			index=i;
		}
	}
	if(index==-1){
		cout<<"Element not found";
	}
	else cout<<"Element fond at "<<(index+1)<<" position";
}
// binary search always works in sorted array
int binarySearch(int arr[],int key,int n){
	int low=0;
	int high=n-1;

	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]==key){
			return mid+1;
		}
		else if(arr[mid]<key)
			low=mid+1;
		else if(arr[mid]>key)
			high=mid-1;
	}
	return -1;
}

int main(){
	int n,key;
	cin>>n>>key;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	//linearSearch(arr,key,n);
	cout<<binarySearch(arr,key,n);

	return 0;
}