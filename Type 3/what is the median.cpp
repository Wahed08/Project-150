#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long arr[10005], n, i=0, ans;
    while(scanf("%lld", &n)==1)
    {
        arr[i]=n;
        sort(arr, arr+i+1);
        if(i%2==0)
        {
            printf("%lld\n", arr[i/2]);
        }
        else
        {
            ans = arr[i/2]+arr[(i/2)+1];
            printf("%lld\n", ans/2);
        }
        i++;
    }
    return 0;
}
