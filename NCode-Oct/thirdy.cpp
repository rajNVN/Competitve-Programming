#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

long long int sizey[100005];

ll find(ll element) {
        if(parent[element] == element) {
                return element;
        }
        return find(parent, parent[i]);
}

void union(ll x, ll y) {
        ll xset = find(x);
        ll yset = find(y);
        parent[xset] = yset;
}

void weighted-union(int Arr[ ],int size[ ],int A,int B)
{
    int root_A = root(A);
    int root_B = root(B);
    if(size[root_A] < size[root_B ])
    {
Arr[ root_A ] = Arr[root_B];
size[root_B] += size[root_A];
}
    else
    {
Arr[ root_B ] = Arr[root_A];
size[root_A] += size[root_B];
}

}


int main() {
	ios::sync_with_stdio(false);
        int  n, p;
        cin >> n >> p;
        long long int a, b;
        ll parent[n], size[n]; 
        for(int i = 0 ; i < n; i++) {
                parent[i] = -1;
                size[i] = 1;
        }


        for(int i = 0; i < p; i++) {
                ll a, b;
                cin >> a >> b;
                wei(parent, size, a,b);
        }
        

}
