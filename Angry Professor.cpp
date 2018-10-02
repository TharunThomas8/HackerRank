//Sreejith
//22/09/2018

#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb  push_back
#define mp  make_pair
#define ss  second
using namespace std ;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,n,k,b,c;
        c=0;
        cin>>n>>k;
        for ( i = 0 ; i < n ; i++ )
        {
            cin>>b;
            if(b<=0)
                c++;
        }
        if(c<k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }    
    return 0;
}
