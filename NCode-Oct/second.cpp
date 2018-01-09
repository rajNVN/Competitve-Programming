
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
#define MODDY 1e18
using namespace std ;

map<unsigned long long int, unsigned long long int> value;
vector<unsigned long long int> a;
map<unsigned long long int,unsigned long long int> present;

void printTwoSetBitNums()
{
        unsigned long long int temp = 0 ;
        
   for(int x = 1;  x <= 31; x++) {
           int y = 0;
           while(y < x) {
                temp = (1 << x) + (1 << y);
                if(temp <= MODDY) 
                        a.push_back(temp);
                y +=1;
           }
   }
}
map<unsigned long long int,unsigned long long int> sum;
int main()
{       
        printTwoSetBitNums();
        sort(a.begin(), a.end());
        sum[a[0]] = a[0];
        present[a[0]] = 1;
        for(int i = 1 ; i < a.size(); i++) {
                present[a[i]] = 1 ;
                sum[a[i]] = ( (sum[a[i-1]] % 1000000007)  + (a[i]% 1000000007) ) % 1000000007;
        }
        
        unsigned long long int t; 
        cin >> t;
        unsigned long long int n;
        for(int i = 0 ;i < t; i++) {
                cin >> n;
                if(present[n] == 1) {
                        unsigned long long int answer = sum[n] % 1000000007;
                        cout << answer << endl;
                        continue;
                }

                auto it = lower_bound(a.begin(), a.end(), n); 
                if(it == a.begin()) {
                        cout << 0 << endl;
                        continue;
                } else {
                        --it;
                        cout << sum[*it] << endl;
                        continue;
                }
                
        }
        
    return 0;
}
