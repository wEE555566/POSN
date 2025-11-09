/*Lang : C++*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int ,int> likeCounter;
	int maxRecord=0;
	int bestNumber=-1;
	int N,number;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>number;
		likeCounter[number]=1;
		if(likeCounter[number]>=maxRecord){
		bestNumber = number;
		maxRecord = likeCounter[number];
	}
	cout<<bestNumber<<endl;
	}
}
