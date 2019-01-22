#include<bits/stdc++.h>
using namespace std;

int compare(char str[],char ptr[])
{
    for(int i=0; str[i]==ptr[i]; i++)
    {
        if(str[i]=='\0')
            return 0;
    }
    return str[i]-ptr[i];
}

int main()
{
    char str[100],ptr[100];
    for(int i=0; str[i]!='\0'; i++){
        cin>>str[i];
    }

    for(int i=0; ptr[i]!='\0'; i++){
        cin>>ptr[i];
    }

    int x=compare(str,ptr);
    cout<<x<<endl;

    return 0;
}
