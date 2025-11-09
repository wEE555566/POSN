/*Lang : C++*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N=99;
    cin>>N;
    int start=1,end=(N+1)/2;
    int sum=0;
    int chk=1;
    while (start<end)
    {
        for (int i = start; i <= end; i++)
        {
            sum+=1;
            if(sum==N){
                for (int j = start; j <=i; i++)
                {
                    chk=0;
                    cout<<j;
                }
                cout<<"\n";
            }
            if(sum>N){
                break;
            }
        }
        start++;
        sum=0;
    }
    if(chk){
        cout<<"No";
    }

    return 0;
}
