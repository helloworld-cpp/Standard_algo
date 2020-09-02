// author - Sheikh Farhan //
//Find the longest path in a matrix with given constraints// 
//O(n*n)//

# include <bits/stdc++.h>
# define n 3
using namespace std;
int find(int a[n][n],int dp[n][n],int i,int j){
	if(i<0 || i>=n || j<0 || j>=n) return 0;
	if(dp[i][j] != -1){return dp[i][j];}

	int x=INT_MIN,y=INT_MIN,w=INT_MIN,v=INT_MIN;

	if((j<n-1) && (a[i][j]+1 == a[i][j+1])){x = 1 + find(a,dp,i,j+1);}
	if((j>0) && (a[i][j]+1 == a[i][j-1])){w = 1+ find(a,dp,i,j-1);}
	if((i>0) && a[i][j]+1 == (a[i-1][j])){y = 1+ find(a,dp,i-1,j);}
	if((i<n-1) && (a[i][j]+1 == a[i+1][j])){v = 1+ find(a,dp,i+1,j);}

	return dp[i][j] = max(1,max(max(x,w),max(y,v)));
}
int solve(int a[n][n]){
	int i,j,dp[n][n]; memset(dp,-1,sizeof(dp));
	int result = 1;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(dp[i][j] == -1){find(a,dp,i,j);}
				result = max(result,dp[i][j]);
			}
		}
	return result;
}
int main(){
	int i,j,a[n][n];
		for(i=0;i<n;i++){for(j=0;j<n;j++){cin>>a[i][j];}}
	cout<<solve(a)<<endl;
}
