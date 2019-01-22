#include<bits/stdc++.h>
using namespace std;

void search(char* pat, char* txt)
{
    int x=0;
    int M = strlen(pat);
    int N = strlen(txt);

    for (int i = 0; i <= N - M; i++) {
        int j;

        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;

        if (j == M)
            x=1;
    }
    if(x==1)
        cout<<"y"<<endl;
    else
        cout<<"n"<<endl;
}

int main()
{
    char txt[100],pat[100];

    cin>>txt>>pat;
    search(pat, txt);

    return 0;
}
