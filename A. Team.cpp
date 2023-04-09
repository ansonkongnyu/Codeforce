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
      int n;
      cin>>n;
      int count=0;
      int tempcount=0;
      int temp;
      for(int i=0;i<n;i++)
      {
         for(int i=0;i<3;i++){
             cin>>temp;
             tempcount+=temp;
             
         }
        if (tempcount>=2){count+=1;}
        tempcount=0;
      }
      cout<<count;
     
     
     
    }
     
     
     
    signed main()
    {
     
          solve();         
    }
