#include<bits/stdc++.h>
using namespace std;

int binToDec(int n){
	int ans=0;
	int x=1;
	while(n>0){
		int y=n%10;
		ans+=x*y;
		x*=2;
		n/=10;
	}
	return ans;
}

string decToBin(int n){
	string str;
	while(n){
		if(n & 1){
			str+='1';
		}
		else str+='0';

		n>>1;
	}
	return str;
}

int main(){
	int bin;
	cin>>bin;
	cout<<decToBin(bin);
	return 0;
}