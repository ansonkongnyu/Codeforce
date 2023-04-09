         
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
          cin>>n;
          int one=0;
          int two=0;
          int temp;
          for (int i = 0; i < n; i++){
              cin>>temp;
              if (temp==1){
                  one+=1;
              }else{
                  two+=1;
              }
     
          }
          two=two%2;
              if (two==0){
                  if(one%2==0){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
              }else{
                  one-=2;
                  if (one%2==0 && one>=0){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
              }
         
         
        }
         
         
         
        signed main()
        {
            int tc;
            cin>>tc;
            while(tc--)
            {
              solve();         
            } 
        }
         
