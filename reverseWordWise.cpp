#include<bits/stdc++.h>
using namespace std;

string revWord(string str){
	int n=str.size();
	int end=n-1,start;

	string res="",word="";

	for(int i=end;i>=0;i--){

		if(str[i]==' '){
			
			start=i+1;
			word="";

			for(int j=start;j<=end;j++){
				word+=str[j];
			}
			end=i-1;
			res=res+word+" ";
		}
	}

		word="";
		for(int j=0;j<=end;j++){
			word+=str[j];
		}
		res+=word;
	return res;
}

int main(){
	string str;
	getline(cin,str);
	string res=revWord(str);
	cout<<res;
	return 0;
}