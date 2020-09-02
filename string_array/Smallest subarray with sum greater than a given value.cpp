// author -: Sheikh Farhan //
//Smallest subarray with sum greater than a given value//
// O(n) //
# include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int i,j,a[n]; for(i=0;i<n;i++){cin>>a[i];}
	int x; cin>>x;
	int left=0,right=0;
	int cur_sum=0;		
	while(cur_sum <= x && right<n){cur_sum += a[right++];}
	while(cur_sum > x && left<n){cur_sum -= a[left++];}
	cout<<right-left+1<<endl;
}
