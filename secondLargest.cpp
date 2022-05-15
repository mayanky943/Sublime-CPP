#include<bits/stdc++.h>
using namespace std;

void secL(int* arr,int n){
	int max=INT_MIN;
	int sec_max=INT_MIN;

	for(int i=0;i<n;i++){
		if(arr[i]>max){
			sec_max=max;
			max=arr[i];
		}
		else if(arr[i]!=max && arr[i]>sec_max){
			sec_max=arr[i];
		}
	}

	cout<<sec_max<<endl;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	secL(arr,n);
	return 0;
}