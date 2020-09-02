// author -: Sheikh Farhan //
//Kruskal’s MST find//
// greedy thought O(vloge) //
// for cycle detection union rank used see find and union fuction//
// input taken in tuple (weight,u,v) by pair stl//
// efficient in sparse graph // 

# include <bits/stdc++.h>
using namespace std;
vector < pair < int,pair<int,int> > > edges; 


int find(int parent[], int i){ 
    if (parent[i] == -1) 
        return i; 
    return find(parent, parent[i]); 
} 

void Union(int parent[], int x, int y){ 
    int xset = find(parent, x); 
    int yset = find(parent, y); 
    parent[xset] = yset; 
} 

int mst(int n,int m){
	sort(edges.begin(),edges.end());
	int set[n];
	for(int i=0;i<n;i++){set[i]=-1;}
	int sum=0;
	int a=0;
	for(auto x:edges){
		int u = x.second.first;
		int v = x.second.second;
		int set_u = find(set,u);
		int set_v = find(set,v);
		if(a > (n-1)){break;}
		if(set_u != set_v){
			sum += x.first;
			a++;
			Union(set,set_u , set_v);
		}
	}
	return sum;
}

int main(){
	int i,n,m; cin>>n>>m;
		for(i=0;i<m;i++){
			int u,v,w; cin>>u>>v>>w;
			edges.push_back({w,{u,v}});
		}

		cout<<mst(n,m)<<endl;
}