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

vector<int> agnes, tom;

int L[2500][2500];

int lcs() {

	int len1 = agnes.size();
	int len2 = tom.size();

	for(int i = 0; i <= len1; i++) {
		for(int j = 0; j <= len2; j++) {
			if( i == 0 || j == 0) 
				L[i][j] = 0;
			else if(agnes[i-1] == tom[j-1]) {
				L[i][j]  = L[i-1][j-1] + 1;
			}
			else 
				L[i][j] = max(L[i-1][j], L[i][j-1]);
		}
	}
	return L[len1][len2];
}

signed main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int t; 
	cin >> t;
	while(t--) {
		int num;

		while(1) {
			cin >> num ;
			if(num == 0) break;
			agnes.pb(num);
		}

		int maxi = -1;

		for( ; ;  ) {
			cin >> num ;
			if(num == 0) break;
			tom.pb(num);

			for(; ;  ) {
				cin >> num ;
				if(num == 0) break;
				tom.pb(num);
			}
			maxi = max(lcs(), maxi);
			tom.clear();
		}

		cout << maxi << endl;
		agnes.clear();
		tom.clear();

	}
}
