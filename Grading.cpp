#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int total = a + b + c;
    if(total>=80 && total<=100)
        cout << "A";
    else if(total>=75 && total<80)
        cout << "B+";
    else if(total>=70 && total<75)
        cout << "B";
    else if(total>=65 && total<70)
        cout << "C+";
    else if(total>=60 && total<65)
        cout << "C";
    else if(total>=55 && total<60)
        cout << "D+";
    else if(total>=50 && total<55)
        cout << "D";
    else if(total>=0 && total<50)
        cout << "F";
}

//https://programming.in.th/tasks/0001