//此程式為單點更新求區間總和
#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
#define maxN 100005

using namespace std;
int bit[maxN], basic[maxN];
int n;
void add ( int idx, int delta ){
	while ( idx <= n ){
		bit[idx] += delta;
		idx += idx & -idx;
	}
}

int sum ( int idx ){
	int res = 0;
	while ( idx ){
		res += bit[idx];
		idx -= idx & -idx;
	}

	return res;
}

int main() {
    fastio
    int m,l,r,type;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>basic[i];
        add(i,basic[i]);
    }

    while ( m-- ){
		cin >> type >> l >> r;
		if ( type == 1 ){
			add ( l, r - basic[l] );
			basic[l] = r;
		}
		else
			cout << sum ( r ) - sum ( l-1 ) << endl;
	}
    return 0;
}
