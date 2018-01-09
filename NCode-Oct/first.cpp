
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;
long long int a[100005];

int main() {
	ios::sync_with_stdio(false);
        long long int N;
        long long  int b[3];
        cin >> N >> b[0] >> b[1] >> b[2];
        
        long long int maxp = INT_MIN, maxn = INT_MAX;


        for(int i = 0 ; i < N ;i++ ){
                cin >> a[i] ;
                maxp = max(maxp, a[i]);
                maxn = min(maxn, (a[i]));
       }
       cout << "maxi in negative" << maxn << endl;
       cout << "maxi in positive" << maxp << endl;
        sort(a, a+N);
        sort(b, b+3);
        cout << "sorted array " << endl;
        for(int i = 0 ; i < N; i++) {
                cout << a[i] << endl;
        }
        long long int product = 1;
        if(b[0] < 0) {
                product = maxn * b[0];
        }else {
                product = a[N-1] * b[0];
        }
        if(b[1] < 0) { 
                product = product + (maxn * b[1]) ;
        } else {
                product = product + (a[N-1] * b[1]);
        }
        if(b[2] < 0) {
                product = product + (maxn * b[2]) ;
        } else {
                
                product = product + (a[N-1] * b[2]);
        }
        cout << product << endl;

}
