#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
#define pb push_back
#define INF 1000000000
#define MOD 1000000007
#define mp make_pair
const double PI=3.141592653589793238462643383279502884197169399375105820974944;
#define REP(i,n) for (int i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define REPD(i,n) for (int i = n-1; i >= 0; i--)
#define FORD(i,a,b) for (int i = a; i >= b; i--)
#define remax(a,b) a = max(a,b)
#define remin(a,b) a = min(a,b)
#define all(v) v.begin(),v.end()
#define pii pair<int,int>
#define F first
#define S second
#define mii map<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define itr :: iterator it
#define WL(t) while(t --)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
#define print(arr) for (auto it = arr.begin(); it != arr.end(); ++it) cout << *it << " "; cout << endl;
#define debug(x) cout << x << endl;
#define debug2(x,y) cout << x << " " << y << endl;
#define debug3(x,y,z) cout << x << " " << y << " " << z << endl;


int power(int a,int b,int m = MOD){
	if(b == 0) return 1;
	if(b == 1) return a;
	int x = power(a,b/2,m)%m;
	x = (x*x)%m;
	if(b%2) return (x*a)%m;
	return x;
}

vector<pair<int, int>> g[120];
vector<int> dist(150, INF);
int total = 1;

void dijkstra(int E, int des, int T) {
	for(int i = 1; i < 150; i++) dist[i] = INF;
	dist[E] = 0;
	priority_queue< pair<int, int>, vector<pair<int, int> >, greater<pair<int, int>> > pq;
	pq.push(make_pair(0, E));
	while(!pq.empty()) {
		pair<int, int> p = pq.top();
		int u = p.second;
		pq.pop();
		if(u == des) {
			if(dist[u] <= T) total++;
			break;
		}
		for(pair<int, int> xp: g[u]) {
			int we = xp.first;
			int v = xp.second;
			if(dist[v] >= (dist[u] + we)) {
				dist[v] = dist[u] + we;
				pq.push(mp(dist[v], v));
			}
		}
	}

}



signed main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N,E, T;
	cin >> N >> E >> T;
	int M;
	cin >> M;
	int a, b, c;

	for(int i = 1; i <= M; i++) {
		cin >> a >> b >> c;
		g[a].pb(make_pair(c,b));
	}
	for(int i = 1; i <= N; i++) {
		if(i != E) {
			dijkstra(i, E, T);
		}
	}
	cout << total << endl;
}

