// author -: Sheikh Farhan //
// Convex Hull //
// O(nlogn) // 
# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

struct point{
	int x; 
	int y;
};
point p0;

void swap(point &p1, point &p2){
	point temp = p1;
	p1 = p2;
	p2 = temp;
}

point nexttop(stack<point>s){
	point temp  = s.top();
	s.pop();
	point oper = s.top();
	s.push(temp);
	return oper;
}

int dist(point u,point v){
		return (u.x-v.x)*(u.x-v.x)+(u.y-v.y)*(u.y-v.y);
}

int orientation(point P,point Q,point R){
	int val = (Q.y - P.y) * (R.x - Q.x) - (Q.x - P.x) * (R.y - Q.y); 
	if(val > 0) return 1;
	else if(val < 0) return 2;
	return 0;
}

int compair(const void *v1, const void *v2){
	point *p1 = (point *)v1;
	point *p2 = (point *)v2;

	int o = orientation(p0,*p1,*p2);
	if(o == 0){
		if(dist(p0,*p1) >= dist(p0,*p2)){
			return 1;
		}
		else{
			return -1;
		}
	}
	else if(o==2){return -1;}
	else{return 1;}
}

void convex(point a[],int n){
	int y_min = a[0].y;
	int i,min = 0;
		for(i=1;i<n;i++){
			if((a[i].y < y_min) || (a[i].y ==y_min && a[i].x < a[min].x)){ y_min = a[i].y;min = i;}
		}
	swap(a[0],a[min]);
	p0 = a[0];
	qsort(&a[1],n-1,sizeof(point),compair);
	int m=1;
		for(i=1;i<n;i++){
			while(i<n-1 && orientation(p0,a[i],a[i+1])==0){
				i++;
			}
			a[m++]=a[i];
		}
	if(m<3)return;
	stack<point>s;
	s.push(a[0]); s.push(a[1]); s.push(a[2]);
		for(i=3;i<n;i++){
			while(orientation(nexttop(s),s.top(),a[i]) != 2){
				s.pop();
			}
			s.push(a[i]);
		}
		while(!s.empty()){
			point p = s.top();
			cout<<p.x<<" "<<p.y<<endl;
			s.pop();
		}
}

int main(){
	int i,n; cin>>n;
	point a[n];
		for(i=0;i<n;i++){cin>>a[i].x>>a[i].y;}
	convex(a,n);
}