// author -: Sheikh Farhan //
//Dijkstra this is O(n*n) can be reduced to O(n*log(n) using heap// 
//greedy algorithm  here weight of every edge is 1//

# include <bits/stdc++.h>
using namespace std;

int find(int visit[],int dis[],int n){
	int min = INT_MAX;
	int i,res=-1;
	//cout<<"yes \n";
		for(i=1;i<=n;i++){
			if((dis[i] <= min) && (visit[i] == 0)){
				min = dis[i];
				res= i;
			}
		}
		return res;

}
int main(){
	int t; cin>>t;
	while(t--){
		int i,j,n,m=0; cin>>n;
		vector <int> path[n+1];
				for(i=1;i<n;i++){
					int temp; cin>>temp;
					if(i+1<=n){
						path[i].push_back(i+1);
					}
					if(3*i<=n){
						path[i].push_back(3*i);
					}
				}
				
		int dis[n+1]; for(i=1;i<=n;i++){dis[i]=INT_MAX;}
		int visit[n+1]; for(i=1;i<=n;i++){visit[i]=0;}
		int temp=1; visit[temp]=1; dis[temp]=0;
			for(i=1;i<n;i++){
				for(auto x: path[temp]){
					if((dis[x] > (dis[temp]+1)) && (visit[x] == 0)){
						dis[x]= dis[temp]+1;
					}
				}
				temp = find(visit,dis,n+1);
				visit[temp]=1;
			}
		for(i=1;i<=n;i++){
			cout<<dis[i]<<" ";
		}cout<<endl;
	}
}
