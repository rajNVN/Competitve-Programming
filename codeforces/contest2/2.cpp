
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
char d[5] ;
string dir;
vector<string> s;
int result = 0;
int cnti = 0;

int check(pii starti, pii endi, int xlimit, int ylimit) { 
	cnti++;
	int startx = starti.first;
	int starty = starti.second;

	int endx = endi.first;
	int endy = endi.second;
	int len = dir.size();
	REP(i,len) {
		if(d[dir[i] - 48] == 'U') {
			startx--;
			if(startx < 0 || startx > xlimit) return 0;
			if(s[startx][starty] == '#') return 0;
		} else if(d[dir[i] - 48] == 'D') {
			startx++;
			if(startx < 0 || startx > xlimit) return 0;
			
			if(s[startx][starty] == '#') return 0;
		} else if(d[dir[i] - 48] ==  'R') {
			starty++;
			if(starty < 0 || starty > ylimit) return 0;
			
			if(s[startx][starty] == '#') return 0;
		} else if(d[dir[i] - 48] == 'L') {
			starty--;
			if(starty < 0 || starty > ylimit) return 0;
			if(s[startx][starty] == '#') return 0;
		}
		if(startx == endx && starty == endy) {
			result++;
			return 1;
		}	
	}
	return 0;
}


signed main() {
	int n, m;
	cin >> n >> m;
	pair<int, int> starti, endi;
	for(int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		s.push_back(temp);
		for(int j = 0; j < temp.size(); j++) {
			if(s[i][j] == 'S') {
				starti = mp(i, j);
			} else if(s[i][j] == 'E') {
				endi = mp(i, j);
			}
		}
	}
	cin >> dir; 
	string ass = "DLUR";
	sort(ass.begin(), ass.end());
	do {
		d[0] = ass[0];
		d[1] = ass[1];
		d[2] = ass[2];
		d[3] = ass[3];
		check(starti, endi, n-1, m-1);
	}
	while(next_permutation(ass.begin(), ass.end())); 
	cout << result << endl;
}
