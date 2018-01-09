
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

int a[100005] ; 
map < int, int> counti ;
set<int> ele[35000] ; 
int main() {
	ios::sync_with_stdio(false);
        int n ; 
        cin >> n; 
        for(int i = 0 ; i < n; i++){
                cin >> a[i] ;
                counti[a[i]] += 1 ;
        }

        int setno = 1 ;
        int changei = 0, changeii = 0 , changej = 0 ;

        for(int i = 1; i <= 7;i++) {
                changeii = 0 ;
                changei = 0 ;
                int exists1 = 0, exists2 = 0 ; 
                if(counti[i]) {
                         exists1 = 0, exists2 = 0 ; 
                        for(int j = i * 2 ; j <= 7;j += i ) {
                                changei = 0 ;
                                changej = 0 ; 
                                if(counti[j]) {
                                        exists1 = 1 ; 
                                        for(int k = j*2; k <=7; ) {
                                                if(counti[k]) {
                                                        exists2 = 1; 
                                                        ele[setno].insert(i) ; 
                                                        ele[setno].insert(j) ;
                                                        ele[setno].insert(k) ;
                                                        setno = setno + 1 ; 
                                                        counti[i] -= 1 ;
                                                        counti[j] -= 1 ;
                                                        counti[k] -= 1 ;
                                                        if(counti[i] == 0) {
                                                                changei = 1 ;
                                                                break ; 
                                                        }
                                                        if(counti[j] == 0) {
                                                                changej = 1 ;
                                                                break ;
                                                        }
                                                        
                                                        if(!(counti[k])) k = k + j ; 
                                                } else k = k + j ; 
                                       }
                                       if(exists2==0) {
                                               cout << "-1" ; return 0 ;
                                       }
                                       if(changei) { changei = 0 ;  break ; }
                                } 
                        } 
                     if(!(exists1 && exists2)) {
                             cout << "-1" ;
                             return 0 ; 
                     }
               }
     }
        for(auto no: counti) {
                if (no.second != 0) {
                        cout << "-1" << endl ; 
                        return 0 ; 
                }
        }
        for(int i = 1; i <= n/3; i++) {
                for(auto s: ele[i]) {
                        cout << s << " " ; 
                }
                cout << endl ; 
        }

}
