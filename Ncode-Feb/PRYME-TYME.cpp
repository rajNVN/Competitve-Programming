  #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define MAXN 1000001
#define LONG long long int 
using namespace std;


LONG spf[MAXN + 5] = {0};
LONG fenwickTree[MAXN + 5] = {0} ;

void sievePrimes() {
	spf[1] = 1 ;
 
	for ( LONG i = 2 ; i <= MAXN ; i++ ) {
		spf[i] = i ;
	}
	for ( LONG i = 4 ; i<= MAXN; i += 2) {
		spf[i] = 2;
	}
	for ( LONG i = 3 ; i*i < MAXN; i++ ) {
		if ( spf[i] == i ){
			for ( LONG j = i*i ; j < MAXN; j+= i ) {
				if ( spf[j] == j)
					spf[j] = i;
			}
		}
	}
}

void update(LONG index, LONG value) {
    index = index + 1 ; 
    while(index <= MAXN) {
        fenwickTree[index] += value ;
        index += index & (-index) ;
    }
}


LONG getmeval(LONG index) {
    index = index + 1 ;
    LONG sum = 0 ;
    while(index > 0) {
        sum += fenwickTree[index] ;
        index -= index & (-index) ;
    }
    return sum ;
}
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    LONG t ; 
    cin >> t; 
    sievePrimes() ;
    map<LONG, LONG> visited ;
    LONG count, temp ; 
    update(0,0) ;
    for(LONG i = 1 ; i <= MAXN; i++) {
      LONG temp = i ; 
      count = 0 ;
      visited.clear() ;
      while(temp != 1) {
          if(visited[spf[temp]] == 0) {
              visited[spf[temp]] = 1;
              count++ ;
          }
          temp = temp / spf[temp] ;
      }
        
      update(i,count) ;
        
    }
    while(t--) {
        LONG l , r ; 
        cin >> l >> r ;
        LONG   sum = getmeval(r) - getmeval(l-1) ;
        cout << sum << endl ;        
    }
    return 0;
}


