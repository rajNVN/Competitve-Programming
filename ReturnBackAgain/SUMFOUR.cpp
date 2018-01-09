
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

vector<ll> ar, br, cr, dr;
vector<ll> sum1, sum2;
map<ll, ll> m;

signed main() {
	int N;
	cin >> N;
	ll a, b, c, d;

	REP(i,N) {
		cin >> a >> b >> c >> d;
		ar.pb(a);
		br.pb(b);
		cr.pb(c);
		dr.pb(d);
	}

	ll sum;	
	REP(i,N) for(int j = 0; j < N; j++) {
		sum = ar[i] + br[j];
		sum1.pb(sum);
		sum = cr[i] + dr[j];
		sum2.pb(sum);
	}

	sort(sum1.begin(), sum1.end());
	sort(sum2.begin(), sum2.end());
	
	for(auto a: sum2)  m[a]++;

	int count = 0;
	for(auto num: sum1) {  
		if(binary_search(sum2.begin(), sum2.end(), -1 * num)) 
			count += m[-1 * num];
	}
	cout << count << "\n";
}
