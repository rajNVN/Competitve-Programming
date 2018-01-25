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

vector<int> x, y;


int solve() {
	int l1 = y.size();
	int l2 = x.size();
	sort(x.begin(), x.end(), greater<int>());	
	sort(y.begin(), y.end(), greater<int>());

	int h = 1, v = 1;
	int i = 0, j = 0;
	int res = 0;

	while(i < l1 && j < l2) {

		if(y[i] > x[j]) {
			res += y[i] * v;
			i++;
			h++;
		} else {
			res += x[j] * h;
			v++;
			j++;
		}
	}
	for(int k = i; k < l1; k++) {
		res += y[k] * v;
	}

	for(int k = j; k < l2; k++) res += x[k] * h;

	return res;

}

signed main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int m, n;
		cin >> m >> n;
		int temp;
		for(int i = 0 ; i < m - 1 ; i++) cin >> temp, x.pb(temp);
		for(int j = 0; j < n - 1 ; j++) cin >> temp, y.pb(temp);
		cout << solve() << endl;
		x.clear(), y.clear();
	}
}
