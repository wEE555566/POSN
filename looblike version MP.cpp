#include <bits/stdc++.h>
using namespace std;

int mp[10005];

int main() {
  int n;
  cin >> n;
  int mx = -100000;
  for (int i = 1; i <= n; i++) {
    int a;
    cin >> a;
    mp[a]++;
    if (mp[a] > mx) {
      mx = mp[a];
    }
  }
  for (int i = 1; i <= 10000; i++) {
    if (mx == mp[i]) {
      cout << i << " ";
    }
  }
}

/*
https://programming.in.th/tasks/0033
https://cses.fi/problemset/task/1640
https://vjudge.net/problem/UVA-10311
3 2 4  5  1 1   5  3
  3 5 9 14 15 16 21 24

2 3 5 7 11 13 17 19

-9
https://cses.fi/problemset/task/1646
https://vjudge.net/contest/197330#problem/M
*/
