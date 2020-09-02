// author - Sheikh Farhan //
//Count number of ways to cover a distance// 
//O(n)//

# include <bits/stdc++.h>
using namespace std;
int dp[1003];

int solve(int n){
	if(n==0){return 1;}
	if(n<0){return 0;}
	if(dp[n] != -1){return dp[n];}
		dp[n] = solve(n-1)+solve(n-2)+solve(n-3);
		return dp[n];
}
int main(){
	int n; cin>>n;
	memset(dp,-1,sizeof(dp));
	cout<<solve(n)<<endl;
}
