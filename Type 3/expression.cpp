#include<bits/stdc++.h>
#define mx 15000
#define fill(ar, val) memset(ar, val, sizeof(ar))
#define repr(i,n) for (int i = (n) - 1; i >= 0; i--)
using namespace std;

int n, m, cases, arr[mx];
char s[mx];
string str[mx];

int funct(int i, int x) {
	if (i < 0) return -1;
	m = max(m, x);
	if (arr[x] != cases) {
		arr[x] = cases;
		str[x] = "";
	}
	str[x] += s[i];
	if ('a' <= s[i] && s[i] <= 'z')
		return i - 1;
	i = funct(i - 1, x + 1);
	i = funct(i, x + 1);
	return i;
}

int main() {

	fill(arr, 0);
	for (scanf(" %d ", &cases); cases--; ) {
		gets(s);
		n = strlen(s); m = 0;
		funct(n - 1, 0);
		repr(i, m + 1) cout << str[i];
		putchar('\n');
	}
	return 0;
}
