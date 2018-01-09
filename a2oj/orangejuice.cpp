#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
    double n ; 
    cin >> n ; 
    int temp, sum = 0  ; 
    for(int i = 0 ; i < n ; i++) {
        cin >> temp ; 
        sum += temp ; 
    }
    double d = sum / n ;
    printf("%.12f", d) ;
}
