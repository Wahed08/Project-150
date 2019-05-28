#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d, r;
    while(scanf("%d %d %d", &n, &d, &r) == 3) {
        if(n == 0)
            break;
        int arr[101], brr[101], i;
        for(i = 0; i < n; i++)
            scanf("%d", arr+i);
        for(i = 0; i < n; i++)
            scanf("%d", brr+i);
        sort(arr, arr+n);
        sort(brr, brr+n);
        int sum = 0;
        for(i = 0; i < n; i++) {
            if(arr[i]+brr[n-i-1] > d) {
                sum += (arr[i]+brr[n-i-1]-d)*r;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
