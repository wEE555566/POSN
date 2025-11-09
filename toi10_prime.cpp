#include <bits/stdc++.h>
using namespace std;

int p[7400000];

int main(){
	  p[1]=1;
  p[0]=1;
  int a;
  int n=0;
  cin>>a;
  for(int i=2;i<7400000;i++){
    if(p[i]==0){
      n++;
      if(n==a){
        cout<<i;
        return 0;
      }
      for(int j=2*i;j<7400000;j+=i){
        p[j]=1;      
      }
    }
  }  

    
}
