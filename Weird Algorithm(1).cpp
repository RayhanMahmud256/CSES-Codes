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
    vector<ll>vec;
    vec.push_back(t);
    while(t)
    {
        if(t==1) break;
        else if(t%2==0)
        {
            t = t/2;
            vec.push_back(t);
        }
        else
        {
            t = t*3 + 1;
            vec.push_back(t);
        }
    }
    for(ll i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
