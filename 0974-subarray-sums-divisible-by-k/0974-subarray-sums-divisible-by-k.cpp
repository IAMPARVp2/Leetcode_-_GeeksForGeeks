class Solution {
public:
    #define ll long long int
    int subarraysDivByK(vector<int>& v, int k) {
        map<ll,ll> mp;
        ll ans=0,csum=0;
        mp[0]=1;
        for(int i=0; i<v.size(); i++) {
            csum+=v[i]%k;
            csum+=k;
            csum%=k;
            ans+=mp[csum];
            mp[csum]++;

        }
        return ans;
    }
};