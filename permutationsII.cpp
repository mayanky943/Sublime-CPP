#include<bits/stdc++.h>
using namespace std;

void recurPermute(vector<int> nums,vector<int> ds,set<vector<int>>& ans,bool flag[]){
	if(ds.size()==nums.size()){
		ans.insert(vector<int>(ds));
		return;
	}

	for(int i=0;i<nums.size();i++){
		if(!flag[i]){
			flag[i]=true;
			ds.push_back(nums[i]);
			recurPermute(nums,ds,ans,flag);
			ds.pop_back();
			flag[i]=false;
		}
	}
}

void print_vector(vector<vector<int>> ans)
{ 
    for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
    
}

vector<vector<int>> permute(vector<int> nums){
	set<vector<int>> ans;
	vector<int> ds;
	bool flag[nums.size()]={false};
	recurPermute(nums,ds,ans,flag);
	vector<vector<int>> finalans(ans.begin(), ans.end());
	return finalans;
	}

int main(){
	vector<int>arr{1,1,2};
	vector<vector<int>> ans=permute(arr);
	print_vector(ans);
	
	return 0;
}