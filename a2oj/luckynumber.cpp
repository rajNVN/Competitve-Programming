#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
    ll number ; 
    cin >> number ; 
    int flag1 = 0 , flag2 = 0 ; 
    int count = 0 ; 

    while(number) {
        int remainder = number % 10 ; 
        if(remainder == 4 || remainder == 7) {
            count++ ; 
        }
        number /= 10 ;
    }
    if( count % 10 == 4 || count % 10 == 7) {
        cout << "YES"<< endl ;
    } else {
        cout << "NO" << endl ;
    }
} 
