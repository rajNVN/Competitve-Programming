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

int parent[1500], visited[1500], dp[1500][20], depth[1500];

vector<int> g[1500];

const int LEVEL = 19;

void dfs(int src, int prev) {
	parent[src] = prev;
	visited[src] = 1; 
	dp[src][0] = prev;

	depth[src] = depth[prev] + 1;

	for(auto a: g[src]) {
		if(!visited[a]) {
			dfs(a, src);
		}
	}
}


void setting() {
	memset(parent, -1, sizeof(parent));
	memset(visited, 0, sizeof(visited));
	memset(dp, -1, sizeof(dp));
	memset(depth, -1, sizeof(depth));

}


void computeRMQ(int n) {
  for (int i = 1; i < LEVEL; i++) {
    for (int j = 1; j <= n; j++) {
      if (dp[j][i - 1] != -1) {
        dp[j][i] = dp[dp[j][i - 1]][i - 1];
      }
    }
  }
}


int lca(int u, int v) {

  if (depth[v] < depth[u]) {
    int  temp = u;
    u = v;
    v = temp;
  }

  int diff = depth[v] - depth[u];

  for (int i = 0; i < LEVEL; i++) {
    if ((diff >> i) & 1) {
      v = dp[v][i];
    }
  }

  if (u == v) {
    return u;
  }

  for (int i = LEVEL - 1; i >= 0; i--) {
    if (dp[u][i] != dp[v][i]) {
      u = dp[u][i];
      v = dp[v][i];
    }
  }
  return dp[u][0];
}



signed main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin >> t;
	int cases = 1;
	while(t--) {

		setting();

		int N;
		cin >> N;
		int m, node;
		for(int i = 1; i <= N; i++) {
			cin >> m;
			for(int j = 0; j < m; j++) {
				cin >> node;
				g[i].pb(node);
				g[node].pb(i);
			}
		}

		dfs(1, 1);
		computeRMQ(N);

		int q;
		cin >> q;
		int u, v;
		cout << "Case " << cases++ << ":" << endl;
		for(int i = 0; i < q; i++) {
			cin >> u >> v;
			cout << lca(u, v) << endl;
		}
		for(int i = 1; i <=N; i++) g[i].clear();
	}
}
