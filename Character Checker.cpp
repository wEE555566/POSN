#include <bits/stdc++.h>
using namespace std;

int main(){
ios::sync_with_stdio(0);cin.tie(0);
  string s;
  cin>>s;
  int n=s.size();
  int small=0;
  int capital=0;
  for(int i=0;i<n;i++){
    if(s[i]>='a'&&s[i]<='z'){
      small++;
    }
    else if(s[i]>='A'&&s[i]<='Z') {
      capital++;
    }                 
  }
  if(small>0 && capital>0){
    cout<<"Mix";
  }
  else if(small>0 && capital==0){
    cout<<"All Small Letter";
  }
  else{
    cout<<"All Capital Letter";
  }
}
/*https://vjudge.net/contest/197330#problem/W
*/


