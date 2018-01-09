#include <bits/stdc++.h>
#define LONG long long int 

using namespace std ; 


int main() {
    int t , n ; 
    cin >> n >> t ; 
    string s, result ;
    cin >> s ; 
    result = s ;
    for(int i = 0 ; i < t ; i++) {
        for(int j = 0 ; j < s.length() ; j++) {
            if(s[j] == 'B' && s[j+1] == 'G') {
                result[j] = 'G' ;
                result[j+1] = 'B'; 
            }
        }
        s = result ;
    }

    cout << result << endl ;
}
