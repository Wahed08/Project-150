#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ll;
const ll mx = 50000;

ll gcd(ll a , ll b)
{
	return b ? gcd(b, a % b) : a;
}

int main()
{
	ll p, q, g, i, pp;
	double j;
	while (scanf("%u%u", &p, &q), q)
	{
		if (p == 0)
		{
			puts("0 2");
			continue;
		}
		g = gcd(p, q);
		p /= g, q /= g;
		for (i = 2; i <= mx; ++i)
			if (i * (i - 1) % q == 0)
			{
				pp = i * (i - 1) / q * p;
				j = sqrt(0.25 + pp) + 0.5;
				if (round(j) == j)
				{
					printf("%u %u\n", (ll)j, i - (ll)j);
					break;
				}
			}
		if (i > mx) puts("impossible");
	}
	return 0;
}
