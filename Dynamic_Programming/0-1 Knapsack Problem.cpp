// author - Sheikh Farhan //
//0-1 Knapsack Problem//
// O(n*W) //
# include <bits/stdc++.h>
using namespace std;
int dp[1002][1002];

int solve(int val[],int wt[],int W,int n){
	if((W==0)||(n==0)){dp[n][W] = 0;}
	if(dp[n][W] != -1){return dp[n][W];}
	if(wt[n-1]>W){dp[n][W] = solve(val,wt,W,n-1);}
	else{ dp[n][W] = max(val[n-1]+solve(val,wt,W-wt[n-1],n-1),solve(val,wt,W,n-1));}
	return dp[n][W];
}
int main(){
	int i,n; cin>>n;
	int val[n],wt[n];
	memset(dp,-1,sizeof(dp));
		for(i=0;i<n;i++){cin>>val[i];}
		for(i=0;i<n;i++){cin>>wt[i];}
	int W; cin>>W;
	cout<<solve(val,wt,W,n)<<endl;
}
