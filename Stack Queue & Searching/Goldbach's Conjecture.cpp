#include<bits/stdc++.h>
using namespaces std;

int visit[100000]={0}, prime[10000], Pt = 0;
void sieve() {
	int i, j;
	for(i = 3; i < 100000; i += 2) {
		if(visit[i] == 0) {
			prime[Pt++] = i;
			for(j = 3; i*j < 100000; j += 2)
				visit[i*j] = 1;
		}
	}
}
int main() {
	int n, i;
	sieve();
	while(scanf("%d", &n) == 1 && n) {
		int x, y, flag = 0;
		for(i = 0; i < Pt; i++) {
			x = prime[i], y = n-prime[i];
			if(x > y)	break;
			if(visit[x] == 0 && visit[y] == 0) {
				printf("%d = %d + %d\n", n, x, y);
				flag = 1;
				break;
			}
		}
		if(!flag)
			puts("Goldbach's conjecture is wrong.");
	}
    return 0;
