#include<bits/stdc++.h>
using namespace std;

int len(char input[]){
	int size=0;
	for(int i=0;input[i]!='\0';i++){
		size++;
	}
	return size;
}



void revWordWise(char* input){
	int n=len(input);
	reverse(input,input+n);
	int i=0;
	while(i<n){
		int s=i;
		while(input[i]!=' '){
			i++;
		}
		int e=i-1;
		while(s<e){
			swap(input[s],input[e]);
			s++;
			e--;
		}
		i++;
	}
}

int main(){
	int n;
	cin>>n;
	char input[n];
	for(int i=0;i<n;i++){
		cin>>input[i];
	}
	revWordWise(input);
	for(char x:input){
		cout<<x;
	}

	return 0;
}