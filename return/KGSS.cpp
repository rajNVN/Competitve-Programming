#include <iostream>
#include <bits/stdc++.h>
#define ll long long int 
#define MOD 1e9 + 7 
#define INF 1<<30
using namespace std ;

struct node {
        int firstMax, secondMax;
        int value;
}segmentTree[2*100005];

int a[100005];


node combine(node a, node b) {
        node res;
        res.firstMax = max(a.firstMax, b.secondMax);
        res.secondMax = min(max(a.firstMax, b.secondMax), max(b.firstMax, a.secondMax));
        return res;
}


void buildTree(int low, int high, int pos) {
        if(high == low) {
                segmentTree[pos].firstMax = a[low];
                segmentTree[pos].secondMax = INT_MIN;
                return;
        }
        int mid = (low + high) / 2;
        buildTree(low, mid, (pos << 1) );
        buildTree(mid+1, high, (pos << 1) + 1);
        segmentTree[pos] = combine(segmentTree[(pos << 1)], segmentTree[(pos << 1) + 1]);
}


node rangeQuery(int low, int high, int qlow, int qhigh, int pos) {
        if(low == qlow && high == qhigh) return segmentTree[pos];
        int mid = (low + high)  / 2 ;
        if(qhigh <= mid) {
               return  rangeQuery(low, mid, qlow, qhigh, (pos << 1) );
        } 
        if(qlow > mid) {
                return rangeQuery(mid + 1, high, qlow, qhigh, (pos << 1) + 1);
        }

        return combine(rangeQuery(low, mid, qlow, mid, (pos << 1) ), rangeQuery(mid+1, high, mid + 1, qhigh, (pos << 1) + 1));

}

void updatevalue(int low, int high, int idx, int diff, int pos) {
        if(low == high) {
                a[low] = diff;
                segmentTree[pos].firstMax = a[low];
                segmentTree[pos].secondMax = INT_MIN;
        } else {
                int mid = (low + high) / 2;
                if(idx <= mid) {
                        updatevalue(low, mid, idx, diff, (pos << 1) );
                } else {
                        updatevalue(mid + 1, high, idx, diff, (pos << 1) + 1) ;
                }
                segmentTree[pos] = combine(segmentTree[(pos << 1) ], segmentTree[(pos << 1) + 1]);
        }
}


int main() {
       int n;
       scanf("%d", &n);
       for(int i = 0; i < n; i++) scanf("%d", a+i);
       int q;
       scanf("%d", &q);
       char c;
       int aa, b;
       buildTree(0, n - 1, 0);
       cout << "bto"<< endl;
       for(int i = 0; i < q; i++) {
                cin >> c ;
                if(c == 'U') {
                        cin >> aa >> b;
                        int diff = b - a[aa - 1];
                        updatevalue(0, n-1, aa-1, b, 0);
                        cout << " value at index " << aa - 1 << a[aa - 1] << endl;
                } else {
                        cout << "begin" << endl;
                        cin >> aa >> b;
                        cout << aa << b << endl;
                        node answer =  rangeQuery(0, n-1, aa - 1, b - 1, 0);
                        printf(" %d \n", answer.firstMax + answer.secondMax);
                        
                }
       }
       cout << "end" << endl;
       for(int i = 0; i < n; i++) {
               cout << a[i] << endl;
       }
}
