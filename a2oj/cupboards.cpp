
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
    int n ; 
    cin >> n ; 
    int countl = 0 , countr = 0 ; 
    int a, b ; 
    for(int i = 0 ; i <  n ; i++) {
       cin >> a >> b ;
       countl += a ;
       countr += b ; 
    }
    int number, number1; 
    if(countl > n/2) {
       number = n - countl ;  
    } else {
        number = countl ;  
    }
    if(countr > n/2 ) {
        number1 = n - countr ; 
    } else {
        number1 = countr ; 
    }
    cout << number + number1 << endl ;

}
