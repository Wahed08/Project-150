#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int arr[30];
    int n,x,max,y;

    string s;

    while(getline(cin,s)){
        n=0;

        istringstream is(s);

        cout<<s<<endl;

        while(is>>x) arr[n++]=x;

        for(int i=n-1;i>=0;i--){

            max=-1;

            for(int j=0;j<=i;j++)
                if(max<=arr[j]){
                    max=arr[j];
                    y=j;
                }

            if(y != i){
                if(y != 0){
                    cout<<n-y<<" ";

                    for(int j=0;j<=y/2;j++) swap(arr[j],arr[y-j]);
                }

                cout<<n-i<<" ";

                for(int j=0;j<=i/2;j++) swap(arr[j],arr[i-j]);
            }
        }

        cout<<0<<endl;
    }

    return 0;
}
