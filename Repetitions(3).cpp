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
    string m;
    cin>>m;
    int num = 1;
    int mx = 1;
    for(ll i=1; i<m.size(); i++)
    {
        if(m[i-1]!=m[i])
        {
            num=1;
        }
        else
        {
            num++;
            mx = max(num,mx);
        }
    }
    cout<<mx<<endl;
    return 0;
}
