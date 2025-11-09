#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
  cin >> n;
  set <int> s;
  for(int i = 0; i < n; i++){
    int k;
    cin>>k;
    s.insert(k);
  }
  cout<<s.size();
}
