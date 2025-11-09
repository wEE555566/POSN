#include <bits/stdc++.h>
using namespace std;

vector<string>s;

int main(){
    s.push_back("HeLlO");
    s.push_back("LsPqtSlOAjf");
    s.push_back("QwErtYd");
    s.push_back("wwFdfwsSAKSjw");
    s.push_back("MJkillASasdA");
    s.push_back("hEilo");
    s.push_back("heLpO");
    s.push_back("HeLlOw");
    s.push_back("9HeLl");
    s.push_back("9HeLlOw");
    s.push_back("8HeLl");
    int n=s.size();
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++){
      cout<<s[i]<<"\n";
    }
  
}

