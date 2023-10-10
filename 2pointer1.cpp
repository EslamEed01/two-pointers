// //-------------------------------------------------------------------
// //======================= Eslam_Eed01 =================================
#include <bits/stdc++.h>  
#include<vector>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> v32;
typedef vector<ll> v64;
#define ln "\n"
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define dbg(x) cout<<#x<<" = "<<x<<endl;
#define eslam_fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
vector<int> ispairs(vector<int>&v,int target)
{
    int l=0;
    int r=v.size()-1;
    while(l<r)
    {
        if(v[l]+v[r]==target)
        return vector<int>({v[l],v[r]});
        else if(v[l]+v[r]<target)
        l++;
        else
        r--;

    }
    return vector<int>();
}
int main()
{
vector<int>v={2,4,6,8,10,12,14};
int target=18;
vector<int>result=ispairs(v,target);
cout<<result[0]<<endl;
cout<<result[1];


}