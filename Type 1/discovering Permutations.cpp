#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[30],i,n,T,x=0,k;
    scanf ("%d", &T);
    while (T--)
    {
        scanf ("%d%d", &n, &k);
        for (i=0; i<n; i++)
            arr[i] = i;
        printf ("Case %d:\n", ++x);

        while (k--)
        {
            for (i=0; i<n; i++)
                printf ("%c", arr[i]+'A');
            cout<<endl;

            if(!next_permutation (arr,arr+n))
                break;
        }
    }
    return 0;
}
