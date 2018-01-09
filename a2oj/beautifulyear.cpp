#include <bits/stdc++.h>
#define LONG long long int 

using namespace std ; 

int main() {
    int n ; 
    cin >> n;  
    
    for(int i = n + 1 ; i <= 100000; i++) {
       stringstream ss ; 
       ss << i ; 
       string s = ss.str() ;
       int flag = 0 ; 

       for(int j = 0 ; j < s.length(); j++) {
           if (flag) break ; 
           for(int k = 0 ; k < s.length(); k++) {
               if(s[j] == s[k] && j != k) {
                   flag = 1 ;
                   break ; 
               }     
           }
        }
        if(flag) continue ;
        if(flag == 0) {
            cout << i << endl ;
            break ; 
        }
    }
}
