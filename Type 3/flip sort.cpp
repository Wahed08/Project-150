#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,arr[1000];

    while(scanf("%d",&x)==1)
    {
        for(int i=0; i<x; ++i)
            cin>>arr[i];

        int ans = 0;

        for(int i = 1; i<x; ++i)
            for(int j = 0; j<i; ++j)
                if(arr[j]>arr[i])
                    ++ans;

        cout<<"Minimum exchange operations : "<<ans<<endl;
    }

    return 0;
}
