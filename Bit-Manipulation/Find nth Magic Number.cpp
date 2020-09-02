// author -: sheikh farhan //
// Find nth Magic Number //
// O(logn) // 
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int find(int n){
	int sum=0;
		for(int j=31;j>=0;j--){
			int temp  =(n>>j)&1;
			if(temp == 1){sum += pow(5,j+1);}
		}
	return sum;
} 

int main(){
	int n; cin>>n;
	cout<<find(n)<<endl;
}
