#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a%4 == 0 && a%100 !=0 || a%400 == 0){
        cout << "a leap year";
    }
    else cout << "a normal year";
}
