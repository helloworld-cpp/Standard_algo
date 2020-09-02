// author -: sheikh farhan //
// Next sparse binary number //
// log(n) // 
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(){
	int n; cin>>n;
	bitset<32>a(n);
	int i,flag=0;
			for(i=1;i<32;i++){
				while(a[i] == 1 && a[i-1] ==1){
					a[i-1]=0;
					i++;
					flag=1;
				}
				if(flag==1){
					flag=0;
					a[i]=1;
					int temp  =i-1;
					while(temp>=0){
						a[temp--]=0;
					}
				}
			}
		cout<<a.to_ullong()<<endl;
	
}
