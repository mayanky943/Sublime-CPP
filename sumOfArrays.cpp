#include<bits/stdc++.h>
using namespace std;

void sumOfTwoArrays(int *arr1, int size1, int *arr2, int size2, int *out)
{
    //Write your code here
    int i=size1-1;
    int j=size2-1;
    
    int carry=0;
    // int great=max(i,j);
    while(i>=0 && j>=0){
        int sum=arr1[i]+arr2[j]+carry;
        out[max(i,j)+1]=sum%10;
        carry=sum/10;
        i--;
        j--;
    }
    if(i==-1 && j==-1){
        out[i+1]=carry;
    }
    if(i==-1 && j!=-1){
        while(j>=0){
            int sum=arr2[j]+carry;
            out[j+1]=sum%10;
            carry=sum/10;
            j--;
        }
        out[j+1]=carry;
    }
    else if(j==-1 && i!=-1){
        while(i>=0){
            int sum=arr1[i]+carry;
            out[i+1]=sum%10;
            carry=sum/10;
            i--;
        }
        out[i+1]=carry;
    }
    
    
}