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
              string word;
              cin>>word;
              int length=word.size();
              if (length>10){
                  cout<<word[0]<<(length-2)<<word[length-1]<<endl;
              }else{
                  cout<<word<<endl;
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
