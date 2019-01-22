#include <bits/stdc++.h>

typedef unsigned long long ll;
using namespace std;
const int maxn = 100;

int vis[maxn];

int main() {
	memset(vis, 0, sizeof(vis));
	for (int i = 2; i < 100; i++)
		if (!vis[i]) {
			for (int j = i*i; j < 100; j += i)
				vis[j] = 1;
		}
	set<ll> ans;
	for (ll i = 2; i < (1<<16); i++) {
		int top = ceil(64*log10(2)/log10(i));
		ll tmp = 1;
		for (int j = 1; j < top; j++) {
			tmp *= i;
			if (vis[j])
				ans.insert(tmp);
		}
	}
	printf("1\n");
	set<ll>::iterator ite = ans.begin();
	while (ite != ans.end())
		cout << *ite++ << endl;
	return 0;
}
