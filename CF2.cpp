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
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }  
        sort(arr, arr+n);
        int ans=-1;
        for(int i=0; i<n-2; i++){
            if(arr[i]==arr[i+1] && arr[i]==arr[i+2]){
                ans=arr[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}