#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,i,j,l;
    string str;
    scanf("%d",&test);
    while(test--)
    {
        cin>>str;
        l = str.length();
        for(i=1;i<=l;i++)
        {
            string sum= "";
            string ptr = str.substr(0,i);
            int pl = ptr.length();

            for(int j=0; j<l/pl; j++)
                sum+=ptr;
            if(sum==str)
            {
                printf("%d\n",pl);
                break;
            }
        }
        if(test)printf("\n");
    }
    return 0;
}
