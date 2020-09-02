// author -: Sheikh Farhan //
// prism minimum spaning tree // 
// greedy thought O(ElogV) heap implementation//
// visit array and pair(weight,index) ke kiya //
// dense graph me better performs//

# include <bits/stdc++.h>
using namespace std;

int mst(vector<int>path[],int v,int e,int weight[1001][1001]){
	int i,j;
	int visit[v]; for(i=0;i<v;i++){visit[i]=0;}
	priority_queue < pair<int,int> , vector <pair<int,int>>, greater<pair<int,int>> > pq;
	pq.push(make_pair(0,0));
	int sum=0;
	while(!pq.empty()){
		auto x = pq.top();
		pq.pop();
		if(visit[x.second] != 0) continue;
		cout<<x.first<<endl;
		sum += x.first;
		visit[x.second]=1;
		for(auto y: path[x.second]){
			if(visit[y]==0){
				pq.push(make_pair(weight[x.second][y],y));
			}
		}
	}
	return sum;
}

int main(){
	
	int v,e; cin>>v>>e;
	vector<int>path[v];
	int weight[1001][1001];
	int i,j; 
	
		for(i=0;i<e;i++){
			int x1,y1,z1; cin>>x1>>y1>>z1;
			path[x1].push_back(y1);
			path[y1].push_back(x1);
			weight[x1][y1]=z1;
			weight[y1][x1]=z1;
		}
		
	cout<<mst(path,v,e,weight)<<endl;
}