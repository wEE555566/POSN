#include <bits/stdc++.h>
using namespace std;
string s[50001];

int main(){
ios::sync_with_stdio(0);cin.tie(0);
  int n;cin>>n;
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  sort(s+0,s+n);
  for(int i=0;i<n;i++){
    cout<<s[i]<<"\n";
  }
}





/*https://vjudge.net/contest/197330#problem/W
*/

