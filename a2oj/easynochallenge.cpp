#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

bool prime[1000001] = {1}; 
int primearray[100000] ;
int k = 0 ;
void sieve() {
        for(int i = 0 ; i <= 1000001; i++) {
                prime[i] = 1; 
        }
        prime[1] = 0;
        prime[0] = 0;
        for(int i = 2 ; i * i <= 1000005; i++) {
                if(prime[i]) {
                        for(int j = i*2; j <= 1000005; j += i) {
                                prime[j] = false;
                        }
                        primearray[k++] = i; 
                }
        }
}
map<int, int> counti;
map<int, int> table;
long findfactors(long number) {
        if(number == 1) return 1;
        if(table[number] != 0) return table[number];
        long t = number; 
        for(int i = 0 ; i < k; i++ ) {
                if(number > 1){
                                while(number % primearray[i] == 0) {
                                        number = number / primearray[i] ;
                                        counti[primearray[i]] += 1;
                                } 
                } else {
                        break ;
                }
        }
        long sum = 1;
        for(auto n: counti) {
                sum *= (n.second + 1) ;
        }
        table[t] = sum ;
        counti.clear();
        return sum;
}

int main() {
	ios::sync_with_stdio(false);
        cin.tie(NULL) ;
        int a, b, c;
        cin >> a >> b >> c;
        sieve();
        long long sum = 0 ;
              for(int i = 1; i <=a; i++) {
                      for(int j = 1; j <=b; j++) {
                              for(int k = 1 ; k <=c; k++) {
                                      sum += findfactors(i*j*k);
                                      sum = sum % (1 << 30) ;
                              }
                      }
              }
              cout << sum  << endl ;
}
