// author -: Sheikh Farhan //
//Floyd Warshall Thought DP, O(n^3) //
//Shortest Path from every vertex to every other vertex //
// postive and negative edges both chill h//
//negative cycle me nhi chalta hai//
// matrix ke form me data diya liya hua hai//

# include <bits/stdc++.h>
# define INF 10000000
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
			int n; cin>>n;
			int a[n][n],i,j,k; 
				for(i=0;i<n;i++){
					for(j=0;j<n;j++){
						string s; cin>>s;
						if(s[0] == 'I'){a[i][j] = 10000000;}
						else{a[i][j]=stoi(s);}
					}
				}

				for(i=0;i<n;i++){
					for(j=0;j<n;j++){
						for(k=0;k<n;k++){
							if(j==k){continue;}
							if(j==i){continue;}
							if(k==i){continue;}
							a[j][k] = min(a[j][k], a[j][i]+a[i][k]);
						}
					}
				}
				for(i=0;i<n;i++){
					for(j=0;j<n;j++){
						if((a[i][j] == INF) || (a[i][j] == -INF)){cout<<"INF ";continue;}
						cout<<a[i][j]<<" ";
					}
					cout<<endl;
				}
	}

}