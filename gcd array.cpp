//LANG : c++
#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,m=0;
	cin >> n;
	for(int i=1;i<=n;i++){
		int j;
		cin >> j;
		m=__gcd(m,j);
	}
	cout << m;
}



