// author -: sheikh farhan //
// Count number of bits to be flipped to convert A to B //
// log(max) // 
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int find(int a,int b){
	int count=0;
	for(int i=31;i>=0;i--){
		int temp = (a>>i)&1;
		int oper = (b>>i)&1;
		if(temp != oper){count++;}
	}
	return count;
}

int main(){
	int t; cin>>t;
	while(t--){
		int a,b; cin>>a>>b;
		cout<<find(a,b)<<endl;
	}
}
