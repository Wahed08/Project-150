#include<bits/stdc++.h>
using namespace std;

char  pat[1000001];
int flag;
string str,ptr;
map<string,int>mp;
map<string,int> :: iterator it;

int main()
{
    while(scanf("%d %s",&flag,pat)==2)
    {
        mp.clear();
        ptr=pat;
        int l=strlen(pat);
        for(int i=0; i<l-flag+1; i++)
        {
            str=ptr.substr(i,flag);
            mp[str]++;
        }
        int max=0;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if(it->second>max)
            {
                max=it->second;
                str=it->first;
            }
        }
        cout<<str<<"\n";
    }
    return 0;
}
