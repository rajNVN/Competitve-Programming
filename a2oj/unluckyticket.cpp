
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        string s; 
        cin >> n;
        cin >> s; 
        int a[n], b[n]; 
        for(int i = 0 ; i < 2*n; i++){
               if(i < n) a[i] = s[i] - 48;
               else b[i - n] = s[i] - 48;
        }
        sort(a, a + n);
        sort(b, b + n);
        int greater = 0, lesser = 0;
        for(int i = 0; i < n; i++) {
                if(greater){
                        if(a[i] <= b[i]) {
                                cout << "NO";
                                return 0;
                        }
                } else if(lesser) {
                        if(a[i] >= b[i]) {
                                cout <<"NO";
                                return 0;
                        }
                } else if(a[i] > b[i]) {
                        greater = 1;
                } else if(a[i] < b[i]) {
                        lesser = 1 ;
                } else {
                        cout << "NO";
                        return 0; 
                }

        }
        cout << "YES" << endl ;
        
}
