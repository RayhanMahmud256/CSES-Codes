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
    vector<int>odd,even;
    ll n;
    cin>>n;
    if(n<=3 && n!=1)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        for(ll i=1; i<=n; i++)
        {
            if(i%2==0) even.push_back(i);
            else odd.push_back(i);
        }
        for(int i=0; i<even.size(); i++) cout<<even[i]<<" ";
        for(int i=0; i<odd.size(); i++) cout<<odd[i]<<" ";
        cout<<endl;
    }
    return 0;
}
