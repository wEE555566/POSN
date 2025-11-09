#include <bits/stdc++.h>
using namespace std;
int p[9];  
int main(){
  for(int i=0;i<=8;i++){
    cin>>p[i];
  }
  int ans=0;
  for(int i=0;i<=8;i++){
    ans=p[i]+ans;
  }
  int k=ans-100;
  for(int i=0;i<=8;i++){
    for(int j=i+1;j<=8;j++){
      if(p[i]+p[j]==k){
        for(int l=0;l<=8;l++){
          if(l!=i && l!=j){
            cout<<p[l]<<"\n";
          }
        }return 0;
      } 
    }
  }
  
}
