// author - Sheikh Farhan //
//Longest Common Subsequence// 
//O(m*n) //

# include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int solve(string s,string r,int n,int m){
	if (m==0 || n==0) return 0;
	if(dp[n][m] != -1){dp[n][m];}
	if(s[n-1] == r[m-1]){return 1+solve(s,r,n-1,m-1);}
	else{return max(solve(s,r,n-1,m),solve(s,r,n,m-1));}
	return dp[n][m];
}
int main(){
	string s,r;
	memset(dp,-1,sizeof(dp));
	cin>>s>>r;
	int n=s.length(),m=r.length();
	cout<<solve(s,r,n,m)<<endl;
}