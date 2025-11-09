#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int small = 0, big = 0;
    for(auto e : s){
        if(e >= 'A' && e <= 'Z') {
            big++;
        } else if(e >= 'a' && e <= 'z') {
            small++;
        } 
    }
    if(small>0&&big==0) cout<<"All Small Letter";
    else if(big>0&&small==0) cout<<"All Capital Letter";
    else cout<<"Mix";

}
//https://programming.in.th/tasks/0004