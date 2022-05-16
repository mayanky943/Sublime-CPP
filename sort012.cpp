#include<bits/stdc++.h>
using namespace std;

void sort012(int *a, int arr_size)
{
    
    int nZ = 0;
    int nT = arr_size - 1;
    int i = 0;
 
    
    while (i <= nT) {
        switch (a[i]) {
 
        
        case 0:
            swap(a[nZ++], a[i++]);
            break;
 
        case 1:
            i++;
            break;
 
        case 2:
            swap(a[i], a[nT--]);
            break;
        }
    }
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort012(a,n);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}