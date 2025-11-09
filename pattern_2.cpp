#include<bits/stdc++.h>
using namespace std;


int main(){
  //ios::sync_with_stdio(0);cin.tie(0);
   
  int n;
  cin>>n;
  char a[n+1][n+3];
  
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
    	a[i][j]='*';
    	cout<<a[i][j];
	}
	cout<<"\n";
  }
}
