#include<bits/stdc++.h>
#include<iostream>
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

vi a(100005, 0);



signed main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	while(T--) {
		int N, M;
		cin >> N >> M;
		for(int i = 0; i < N; i++) cin >> a[i];
		int maxsum = 0, cur_sum = 0, start = 0, end = 0, count = 0;
		int begin = 0;
		for(int i = 0; i < N; i++) {
			cur_sum += a[i];
			if(cur_sum > M) {
				cur_sum -= a[begin];
				begin++;
			}
			if(cur_sum <= M) {
				if((i - begin + 1) == count) {
					maxsum = min(maxsum, cur_sum);
				}
				
				if((i - begin + 1) > count  ) {
					maxsum = cur_sum;
					count = i - begin + 1; 
				}
				
			}
		}
		cout << maxsum << " " << count  << endl; 
	}
}
