    #include <bits\stdc++.h>
    #include<vector> 
     
    #define pb push_back
    #define int long long
    #define s string
    #define v vector<int>
    #define fi first
    #define se second
    #define en endl
    #define s string
    #define MOD 1000000007
    #define sl str.length()
    #define SIZE 1e6+2
     
    using namespace std;
    int n=0,sum=0;
     
    bool isPrime(int num)
    {
        for (int i = 2; i <= num / 2; ++i) {
          if (num % i == 0) {
            return true;
          }
        }
        return false;
    }
     
    void solve()
    {
     
    }
     
     
     
    signed main()
    {
        int tc;
        cin>>tc;
        if (tc % 2 == 0 && tc > 2){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }
#For every even weight great than 2, you can always divide the melon in to 2 and x-2 and both of them must be even
