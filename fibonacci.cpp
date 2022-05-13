#include<bits/stdc++.h>
using namespace std;

int fib(int n){
	if(n==0 || n==1)
		return n;
	return fib(n-1)+fib(n-2);
}

bool isFib(int n){
	int a=0,b=1;
	
	while(a<=n){
		if(a==n)
			return true;
		int c=a+b;
		a=b;
		b=c;
	}
	return false;
}

int main(){
	int n;
	cin>>n;

	/*int a=0;
	int b=1;
	for(int i=1;i<=n;i++){
		cout<<a<<" ";

		int c=a+b;
		a=b;
		b=c;
	}*/

	// for(int i=0;i<=n;i++){
	// 	cout<<fib(i)<<" ";
	// }

	if(isFib(n))
		cout<<"true";
	else cout << "false";

	return 0;
}