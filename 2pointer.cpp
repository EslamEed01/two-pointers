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
#include <algorithm>
#include <vector>

vector<int> twoSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = nums.size() - 1;
    while(left < right) {
        if (nums[left] + nums[right] == target)
            return vector<int>({nums[left], nums[right]});
        else if (nums[left] + nums[right] < target)
            left++;
        else
            right--;
    }
    return vector<int>();
}

int main() {
    vector<int> nums = {1, 3, 4, 8, 9};
    int target = 11;
    vector<int> result = twoSum(nums, target);
    cout << result[0]  << '\n';
    cout << result[1]  << '\n';
    return 0;
}
