#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
#define ll long long int 
using namespace std ;


int main() {
	ios::sync_with_stdio(false);
        int n ;
        scanf("%d", &n); 
        if(n == 0) {
                cout << 1 << endl;
        }
        string s;
        int count12 = 0, count14 =0, count34 = 0;
        int n1, n2;
        char c;
        for(int i = 0; i < n; i++) {
                cin >> n1 >> c >> n2;
                if(n1 == 3) count34++;
                else if(n2 == 2) count12++;
                else if(n2 == 4) count14++;
        }
        int total = count34;
        count14 = count14 - count34;
        total = total + ((count12 - (count12 % 2) )/ 2);
        if(count12 % 2) {
                total++;
                count14 -= 2;
        }
        if(count14 > 0) {
                total = total + (count14 - ((count14 -( count14 % 4))/2));
                if(count14 % 4) total++;
        }
        cout << total << endl;
}
