#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,greater<int>, rb_tree_tag,tree_order_statistics_node_update>

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define ull unsigned long long int

int main()
{
    optimize();
    ll t;
    cin>>t;
    ll sum = 0;
    for(ll i=0; i<t-1; i++)
    {
        ll k;
        cin>>k;
        sum += k;
    }
    ll ssum = (t * (t+1))/2;
    cout<<ssum-sum<<endl;
    return 0;
}
