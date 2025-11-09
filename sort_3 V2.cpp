#include <bits/stdc++.h>
using namespace std;
vector<string>s;
int main(){
ios::sync_with_stdio(0);cin.tie(0);
  int n;cin>>n;
  for(int i=0;i<n;i++){
    string a;
    cin>>a;
    s.push_back(a);  
  }
  sort(s.begin(),s.end());
  for(auto i:s){
    cout<<i<<"\n";
  }
  
}





/*https://vjudge.net/contest/197330#problem/W
*/

