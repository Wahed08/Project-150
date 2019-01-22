#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z, w;
    long long arr[20][20][20];
    memset(arr, 0, sizeof(arr));
    arr[1][1][1] = 1;
    for(y = 2; y <= 13; y++)
        for(z = 1; z <= y; z++)
            for(w = 1; w <= y; w++)
                arr[y][z][w] = arr[y-1][z][w]*(y-2) + arr[y-1][z-1][w] + arr[y-1][z][w-1];
    scanf("%d", &x);
    while(x--)
    {
        cin>>y>>z>>w;
        printf("%lld\n", arr[y][z][w]);
    }
    return 0;
}
