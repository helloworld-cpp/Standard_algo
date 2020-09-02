// author -: Sheikh Farhan //
// union find //
// better way is implemented in Kruskal’s algo below //

# include <bits/stdc++.h>
# define INF 10000000
using namespace std;

bool cycle(vector <int> path[],int n,int m){
	int i;
	int set[n]; 
	for(i=0;i<n;i++){set[i]=-1;}
	for(i=0;i<n;i++){
		for(auto x:path[i]){
			if(set[x] == -1){
				set[x] = i; 
			}
			else{
				while(set[x] > 0){
					x = set[x];
				}
				if(set[x] == set[i]){
					return true;
				}
			}
		}
	}
	return false;
}
int main(){
	int i,n,m; cin>>n>>m;
	vector <int> path[n];
		for(i=0;i<m;i++){
			int x,y;
			cin>>x>>y;
			path[x].push_back(y);
		}

	if(cycle(path,n,m)){
		cout<<"YES \n";
	}
	else{
		cout<<"NO \n";
	}
}