// LANG : C++
#include<bits/stdc++.h>
using namespace std;
int a[30];

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    
	int m;
	cin >> m;
	string s;
	for(int i=1;i<=m;i++){
		char c;
		cin >> c;
		int x=c-'A';
		a[x]++;
	}
	for(int i=1;i<=26;i++){
		if(a[i-1]>0) s+=i+'A'-1;
	}
    int n=s.size();
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
        	int diff=abs(i-(n))+abs(j-(n));
            if(diff<=n-1) cout << s[n-diff-1];
            else cout << ' ';
        }
        cout << "\n";
    }
//    cout << s;
//    for(int i=0;i<26;i++){
//    	cout << a[i] << "\n";
//	}
    return 0;
}
