#include <bits/stdc++.h>
using namespace std;
long long int mp[200005];
long long int z[1000005];
int main() {
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    cin >> z[i];
  }
  int A;
  cin >> A;
  long long int k = 0;
  for (int i = 1; i <= N; i++) {
    if (mp[A - z[i]] > 0) {
      k += mp[A - z[i]];
    }
    mp[z[i]]++;
  }
  cout << k;
}
