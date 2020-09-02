// author -: Sheikh Farhan //
//Reverse a string without affecting special characters//
//O(n)//
# include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin>>s;
	int i,n=s.length();
	string r,t; for(i=0;i<n;i++){r.push_back('1');}
	for(i=0;i<n;i++){
		if(((s[i]>='a')&&(s[i]<='z'))||((s[i]>='A')&&(s[i]<='Z'))){t.push_back(s[i]);}
		else{r[i]=s[i];}
	}
	int k=t.length(); k--;
	for(i=0;i<n;i++){if(r[i] == '1'){r[i] = t[k];k--;}}
	cout<<r<<endl;
}