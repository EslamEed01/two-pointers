// //-------------------------------------------------------------------
// //======================= Eslam_Eed01 =================================
//find subarray having sum as large as possible
// sliding window
#include <bits/stdc++.h>  
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
int main()
{
eslam_fast();
int ans=0;
int arr[100];
int n,x;cin>>n>>x;
int p1=0;
int p2=0;
int sum=0;
forn(i,n)cin>>arr[i];

while(p2<n)
{
    if(sum+arr[p2]<=x)// 4 3 4 1 6 5 2
    {
    sum+=arr[p2];
    ans=max(ans,sum);
    p2++;
    }
    else
    {
    sum-=arr[p1];
    p1++;
    }
}
cout<<ans<<endl;



}


