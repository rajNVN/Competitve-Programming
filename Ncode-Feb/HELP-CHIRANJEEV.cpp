#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define LONG long long int 
using namespace std;

LONG a[100005]  = {0} ;
map<LONG,LONG> numbers ;

long long int fac[1000001] ={ };
map<long long int, map<long long int, long long int> > dp ;


LONG ncr(LONG n, LONG k)
{
    if(k > n) {
        return 0 ;
    }
    LONG res = 1;
 
    // Since C(n, k) = C(n, n-k)
    if ( k > n - k )
        k = n - k;
 
    // Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t ; 
    cin >> t ; 
    
    while(t--) {
        LONG n ; 
        cin >> n ;
        LONG temp ;
        
        for(int i = 0 ; i < n; i++) {
            cin >> temp ;
            numbers[temp%4]++ ;
        }
        
        
        
        LONG sum = 0 ; 
        
        //cout << numbers[0] << endl ;
        sum = sum + ncr(numbers[0],3) ;
      //  cout << sum << endl ;
        
        sum = sum + (numbers[0] * numbers[1] * numbers[3]) ;
        
        sum = sum + (numbers[0] * (ncr(numbers[2], 2))) ;
        
        sum = sum + (numbers[2] * (ncr(numbers[1], 2))) ; 
        sum = sum + (numbers[2] * (ncr(numbers[3],2))) ;
        
        cout << sum << endl ; 
        numbers.clear() ;
        
    }
    return 00;
}


