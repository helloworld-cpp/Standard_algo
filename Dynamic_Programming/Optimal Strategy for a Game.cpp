// author - Sheikh Farhan //
//Optimal Strategy for a Game//
// O(n*n) //
# include <bits/stdc++.h>
using namespace std;
int dp[1002][1002];

int solve(int a[],int s,int e){
	if(s==e){dp[s][e]=  a[s];}
	if(e == s+1){dp[s][e] =  max(a[s],a[e]);}
	if(dp[s][e] != -1){return dp[s][e];}
	else{dp[s][e] = max(a[s]+min(solve(a,s+2,e),solve(a,s+1,e-1)),a[e]+min(solve(a,s+1,e-1),solve(a,s,e-2)));}
	return dp[s][e];
}

int main(){
	int n; cin>>n;
	memset(dp,-1,sizeof(dp));
	int a[n],i; for(i=0;i<n;i++){cin>>a[i];}
	cout<<solve(a,0,n-1)<<endl;
}
