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
        string s;
        cin>>s;
        int ans=0;
        // brb, bbr, rbb, rbr, rbb, brr
        if(n==1 && s!="W")ans=-1;
        else if(n==2){
            if(s=="RB" || s=="BR" || s=="WW"){
                ans=1;
            }
            else{
                ans=-1;
            }
        }
        else
        {
            int r=0, b=0;
            for(int i=0; i<s.size(); i++){
                if(s[i]=='R') r++;
                if(s[i]=='B') b++;

                if(s[i]=='W'){
                    if(r==0 && b>0){
                        ans=-1;
                        break;
                    }
                    else if(r>0 && b==0){
                        ans=-1;
                        break;
                    }
                    else{
                        r=0;
                        b=0;
                    }

                }
            }
            if((r>0 && b==0) || (r==0 && b>0))ans=-1;
            
            
        }
        
        if(ans==-1){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }

        
    }
    return 0;
}