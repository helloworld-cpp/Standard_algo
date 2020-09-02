// author - Sheikh Farhan //
//Edit Distance// 
//O(m+n)//

# include <bits/stdc++.h>
using namespace std;
int dp[1003][1003];
int solve(string s,string r,int n,int m){
	if(n==0) {return m;}
	if(m==0) {return n;}
	if(dp[n][m] != -1){return dp[n][m];}
	if(s[n-1] == r[m-1]) {dp[n][m] = solve(s,r,n-1,m-1);}
	else{dp[n][m] = 1+min(solve(s,r,n-1,m),min(solve(s,r,n,m-1),solve(s,r,n-1,m-1)));}
	return dp[n][m];
}
int main(){
	string s,r; cin>>s>>r;
	memset(dp,-1,sizeof(dp));
	int n=s.length(),m=r.length();
	cout<<solve(s,r,n,m)<<endl;
}