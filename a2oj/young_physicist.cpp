#include <bits/stdc++.h>
#define LONG long long int 
using namespace std ;

int main() {
    int n ; 
    cin >> n ;  
    LONG sumx = 0 , sumy = 0, sumz = 0 ; 
    LONG a, b, c ;

    for(int i = 0 ; i < n ; i++) {
        cin >> a >> b >> c ;
        sumx += a ;
        sumy += b ; 
        sumz += c ;
    }

    if((sumx || sumy || sumy )) {
        cout << "NO" << endl ;
    }
    else 
        cout << "YES" << endl ;
}


