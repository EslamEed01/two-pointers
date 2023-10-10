// //-------------------------------------------------------------------
// //======================= Eslam_Eed01 =================================
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
int target=18;
int arr[100];
int n;cin>>n;
int r=n-1;
int l=0;
forn(i,n)cin>>arr[i];

while(l<r)
{
    if(arr[l]+arr[r]==target)
    {
    cout<<l+1<<" "<<r+1<<endl;
    break;
    }
    else if(arr[l]+arr[r]<target)l++;
    else if(arr[l]+arr[r]>target)r--;
    

}



}