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

string a;
struct node {

	int nO = 0 ;
	int nC = 0 ;

} st[30000];

node mergeNodes(node n1, node n2) {

	node n3;
	int ch = min(n1.nO, n2. nC);
	n3.nO = n1.nO + n2.nO - ch;
	n3.nC = n1.nO + n2.nC - ch;
	return n3;

}

void build(int low, int high, int r) {
	
	if(low == high) {
		if(a[low] == '(') st[r].nO++;
		else	st[r].nC++;
		return ;
	}
	cout << low << "is low " << high << " is high " << endl;
	int mid = (low + high) / 2 ;
	cout << mid << " is mid " << endl;
	build(low, mid, (r * 2) + 1);
	build(mid + 1, high, (r * 2) + 2);
	st[r] = mergeNodes(st[(r * 2) + 1], st[(r * 2) + 2]);
	return ;
}


node query(int low, int high, int qlow, int qhigh, int r) {

	if(qlow <= low && qhigh >= high) return st[r];
	if(qlow > high || qhigh < low) return (node){0, 0};

	int mid = (low + high) / 2;

	node p1 = query(low, mid, qlow, qhigh, r * 2 + 1);
	node p2 = query(mid+1, high, qlow, qhigh, r * 2 + 2);

	return mergeNodes(p1, p2);


}

void update(int low, int high, int index, int pos) {

	if(low == high) {
		if(a[low] == '(') st[pos].nO = 1, st[pos].nC = 0; else st[pos].nO = 0, st[pos].nC = 1;
		cout << "updated index " << index << endl;
		return ;
	}

	int mid = (low + high) / 2;

	if(index <= mid) update(low, mid, index, pos * 2 + 1);
	else update(mid+1, high, index, pos * 2 + 2);
	
	st[pos] = mergeNodes(st[pos * 2  + 1], st[pos * 2 + 2]);
	
}

signed main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t = 1;
	while(t--) {

		int n;

		cin >> n;
		cout << n << " is n " << endl;	
		cin >> a;
		cout << a << endl;
		int temp = n - 1;
		build(0, temp, 0);

		int q, c;
		cin >> q;
		cout << q <<  " is " << q << endl;

		node res;

		for(int i = 0; i < q; i++) {
			cin >> c;
			if(c == 0) {

				res = query(0, n-1, 0, n-1, 0);	


				if(res.nO == 0 && res.nC == 0) {
					cout << "YES\n";
				} else {
					cout << "NO\n";
				}
			} else {
				update(0, n-1, c - 1, 0);
			}
		}
	}


}
