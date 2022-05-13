#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int min_idx=INT_MAX;

	int idx[n];

	for(int i=0;i<n;i++){
		idx[i]=-1;
	}

	for(int i=0;i<n;i++)
	{
		if(idx[arr[i]]==-1)
		{
			idx[arr[i]]=i;
		}
		else{
			min_idx=min(min_idx,idx[arr[i]]);
		}
	}

	if(min_idx==INT_MAX)
		cout<<-1<<endl;
	else cout<<min_idx<<endl;
	return 0;
}