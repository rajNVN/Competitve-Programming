//Hackerearth DSU implementation
#include<bits/stdc++.h>
#define ll long long int
#define MOD 1e9 + 7
#define INF 1 << 30

using namespace std;

long long int root(long long int Arr[ ], long long int i) {
    while(Arr[i] != i) {
     i = Arr[i];
    }
    return i;
}

bool find(long long int Arr[], long long int A, long long int B) {
    if(root(Arr,A) ==  root(Arr,B))  
            return true;
    else
            return false;
}

void weighted_union(long long int Arr[ ], long long int size[ ], long long int A, long long int B) {
    long long int root_A = root(Arr,A);
    long long int root_B = root(Arr,B);
    if(size[root_A] < size[root_B ]) {
            Arr[ root_A ] = Arr[root_B];
            size[root_B] += size[root_A];
    }
    else {
            Arr[ root_B ] = Arr[root_A];
            size[root_A] += size[root_B];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(null);
    long long int p, n , a, b;
    cin >> n >> p;
    long long int size[n], arr[n];
    long long int totalpairs =( n * (n-1) ) / 2;

    map<long long int, bool> visited;

    for(long long int i = 0; i < n; i++) {
            arr[i] = i;
            size[i] = 1;
    }

    for(long long int i = 0; i < p; i++){
        cin >> a >> b;
        if(!find(arr, a, b))
        weighted_union(arr, size, a, b);
    }
    
    for(long long int i = 0; i < n ; i++){

        if(visited[root(arr,i)] == false){
            visited[root(arr,i)] = true;
            long long int temp = size[root(arr,i)];
            totalpairs -= ( temp * (temp - 1)) / 2;
        }

    }
    cout << result << endl;
}
