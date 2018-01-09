#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        ll a[6][6] ;
        int N[] = {1,2,3,4,5} ;
        for(int i = 1 ; i <= 5 ; i++){
                for(int j = 1 ; j <= 5 ; j++){
                        cin >> a[i][j]; 
                }
        }
        ll result[6][6] ;
        for(int i = 1; i <=5; i++){
                for(int j = 1; j <=5; j++){
                        if( i == j){
                                result[i][j] = 0 ; 
                                continue ;
                        } 
                        result[i][j] = a[i][j] + a[j][i] ;  
                }
        }
       ll maximum = INT_MIN, temp = 0  ;
       do {
               temp = result[N[0]][N[1]] + result[N[2]][N[3]] + result[N[4]][N[4]] ; 
               temp += result[N[1]][N[2]] + result[N[3]][N[4]] ; 
               temp += result[N[2]][N[3]] ;
               temp += result[N[3]][N[4]] ; 
               maximum = max(temp, maximum) ; 
               temp = 0 ; 
       } while(next_permutation(N, N + 5)) ;
       temp = result[N[0]][N[1]] + result[N[2]][N[3]] + result[N[4]][N[4]] ; 
       maximum = max(temp, maximum) ;
       cout << maximum << endl ; 
}
