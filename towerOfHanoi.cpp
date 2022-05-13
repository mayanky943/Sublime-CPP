#include<bits/stdc++.h>
using namespace std;

// void TOH(int n,char src,char dest,char help){
// 	if(n==1){
// 		cout<<"move 1st disk to "<<dest<<" from "<<src<<endl;
// 		return;
// 	}
// 	TOH(n-1,src,help,dest);
// 	cout<<"move "<<n<<"th disk to "<<dest<<" from "<<src<<endl;
// 	TOH(n-1,help,dest,src);

// }

// int main(){
// 	int n;
// 	cin>>n;

// 	char src='a';
// 	char help='b';
// 	char dest='c';
// 	TOH(n,src,dest,help);
// 	return 0;
// }

void towerOfHanoi(int n,char src,char dest,char help){
	if(n==1){
		cout<<"move 1st disk to "<<dest<<" from "<<src<<endl;
		return;
	}
	towerOfHanoi(n-1,src,help,dest);
	cout<<"move "<<n<<"th disk to "<<dest<<" from "<<src<<endl;
	towerOfHanoi(n-1,help,dest,src);
}

int main(){
	int n; //no of disks
	cin>>n;
	char src='a';
	char dest='c';
	char help='b';
	towerOfHanoi(n,src,dest,help);
	return 0;
}