#include<bits/stdc++.h>

using namespace std;

int S,T;
vector<int>pf[1001];
int bfs( ){
    int arr[1001],temp[1001];
    memset(temp, -1, sizeof(temp));
    temp[S] = 0;
    queue < int > q;
    q.push(S);
    int x, y;
    while( !q.empty() ){
        x = q.front();
        q.pop();
        for( int i = 0; i < (int) pf[x].size(); i++ ){
            y = x + pf[x][i];
            if( y <= T && temp[y] == -1 ) {
                q.push(y);
                temp[y] = temp[x] + 1;
                if( y  == T) return temp[T];
            }
        }
    }
    return arr[T];
}
int main()
{
    int arr[1001],temp[1001];
    int cnt=0,X,t,x,z,Count=0,sum=1;
    cin>>X;

    while(X--){
    cin>>S>>T;

    int j=0;

    while(S%2==0)
    {
        arr[j]=2;
        cnt++;
        S=S/2;
        j++;
    }
    j=j;
    for(int i=3; i<S; i=i+2)
    {
        while(S%i==0)
        {
            arr[j]=i;
            cnt++;
            S=S/i;
            j++;
        }
    }
    if(S>2)
    {
        arr[j]=S;
        cnt++;
    }
    for(int i=0; i<cnt; i++){
        temp[i]=arr[i];
    }
   printf("Case %d: %d\n", sum++, bfs());

     }

    return 0;
}
