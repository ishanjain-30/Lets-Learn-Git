#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int a=0;
        if(n>=1900) a=1;
        else if(n>=1600) a=2;
        else if(n>=1400) a=3;
        else a=4;
        cout<<"Division "<<a<<endl;
      
    }
    
    return 0;
}