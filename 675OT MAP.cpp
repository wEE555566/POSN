#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;  
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int N;
  cin>>N;
  int k=0;
  for(int i=1;i<=N;i++){
    int x;cin>>x;
    if(mp.find(x)==mp.end()){
      k++;
      mp[x]=1;
    }
  } 
   cout<<k;
}
/*
***********chabap ngaey******************
***********  easy from ******************

#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;  
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int N;
  cin>>N;
  int k=0;
  for(int i=1;i<=N;i++){
    int x;cin>>x;
    if(mp[x]==0){
      k++;
      mp[x]=1;
    }
  } 
   cout<<k;
*/
  
