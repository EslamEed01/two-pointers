// //-------------------------------------------------------------------
// //======================= Eslam_Eed01 =================================
#include <bits/stdc++.h>  
#include<map>
#include<set>
#include<algorithm>
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
//given array n, integer k , you have to print max number of distinct element, you can obtain by taking a subsequance of length k
// 7 3
// 1 2 2 3 5 6 6
// output 3
int main()
{
eslam_fast();
int n,k;
cin>>n>>k;
map<int,int>mp;
set<int>st;
int arr[100];
for (int i = 0; i < n; ++i)
{
    cin>>arr[i];
    if(i<k)
    {
    mp[arr[i]]++;
    st.insert(arr[i]);
    }
}
int p1=0,p2=k-1,ans=1;
while(p2<n)
{
    ans=max(ans,(int)st.size());
    mp[arr[p1]]--;
    if(mp[arr[p1]]==0)st.erase(arr[p1]);    
    st.insert(arr[p2]);
    mp[arr[p2]]++;
    p1++;
    p2++;
}
cout<<ans;

}