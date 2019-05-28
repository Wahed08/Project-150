#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, test = 0, n, x;
    scanf("%d", &t);
    while(t--) {
        cin>>n;
        printf("Case %d:", ++test);
        int i, sqr = sqrt(n);
        for(i = sqr-1; i >= 1; i--) {
            x = n-i*i;
            if(x%i == 0)
                cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
