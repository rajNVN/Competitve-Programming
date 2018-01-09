#include<bits/stdc++.h>
using namespace std;
using std::string;

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


map<string, int> m;
vector< pii > g[100005];
vi dist(100005, INF);

void solve1(int to, int fro) {
	dist[to] = 0;
	priority_queue< pii, vector< pii >, greater< pii > > pq;
	pq.push(mp(0, to));
	int cnt = 0;
	while( !pq.empty()) {
		cnt++;
		pii p = pq.top();
		int u = p.second;
		pq.pop();
		for(pii xp: g[u]) {
			int we = xp.first;
			int v = xp.second;
			if(dist[v] >= (dist[u] + we) ) {
				dist[v] = dist[u] + we;
				pq.push(mp(dist[v], v));
			}
		}
	}
	printf("%d\n", dist[fro]);
}

void solve() {
	int n, nc;
	int city, cost;
	scanf("%d", &n);
	printf("%d", n);
	char s[20];
	REP(i,n) {
		scanf("%s%d", s, &nc);
		printf("%s %d", s, nc);
		m[s] = i + 1;
		REP(j,nc) {
			cin >> city >> cost;
			g[m[s]].pb(mp(cost, city));
		}
	}

	int q;
	scanf("%d", &q);
	char src[20], des[20];
	int to, fro;
	REP(i,q) {
		scanf("%s%s", src, des);
		to = m[src];
		fro = m[des];
		solve1(to, fro);
	}

}

void clr() {
	int n = 100005;
	REP(i,n) {
		g[i].clear();
		dist[i] = INF;
	}
	m.clear();
}

signed  main() {
	int t;
	scanf("%d", &t);
	printf("%d", t);
	while(t--) {
		solve();	
		clr();
	}
}
