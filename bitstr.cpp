/*Lang : C++*/
#include<bits/stdc++.h>
using namespace std;

const int N=25;
char a[N],s[N];
int ans=0,n;

void solve(int i){
	if(i==n){
		if(strstr(a,s)) ++ans;
		return;
	}
	a[i]='i';
	solve(i+1);
	a[i]='0';
	solve(i+1);
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>n>>s;
	solve(0);
	cout<<ans;
	return 0;
}
