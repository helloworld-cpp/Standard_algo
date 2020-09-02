// author - Sheikh Farhan //
//Partition a set into two subsets such that the difference of subset sums is minimum// 
//O(n*sum)//

# include <bits/stdc++.h>
using namespace std;
int dp[1003][1003];
int solve(int a[],int n,int current,int sum){
	if(n==0){return abs((sum-current)-current);}
	if(dp[n][current] != -1){return dp[n][current];}
	dp[n][current] = min(solve(a,n-1,current+a[n-1],sum),solve(a,n-1,current,sum));
	return dp[n][current];
}
int main(){
	int n; cin>>n;
	int a[n],i,sum=0; for(i=0;i<n;i++){cin>>a[i];sum+=a[i];}
	memset(dp,-1,sizeof(dp));
	cout<<solve(a,n,0,sum)<<endl;
}