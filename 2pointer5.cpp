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
//merge sorted array using two pointer
int main()
{
eslam_fast();
vector<int>v;
int n;cin>>n;
int p1=0,p2=0;
int arr1[100];
int arr2[100];
forn(i,n)cin>>arr1[i];
forn(i,n)cin>>arr2[i];
while(p1<n||p2<n)
{
    if(arr1[p1]<=arr2[p2]&&p1<n)
    {
    v.push_back(arr1[p1]);
    p1++;
    }
   else if(arr1[p1]>=arr2[p2]&&p2<n)
   {
    v.push_back(arr2[p2]);
    p2++;
   }
   else if (p1<n)
   {
    v.push_back(arr1[p1]);
    p1++;
   }
   else if (p2<n)
   {
    v.push_back(arr2[p2]);
    p2++;
   }
}
for (auto i:v)cout<<i<<" ";



}