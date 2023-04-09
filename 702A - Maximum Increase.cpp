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
  int temp=0;
  int temp2=0;
  int tempcount=0;
  int ans=0;
  cin>>temp;
  for (int i=0;i<n-1;i++){
      cin>>temp2;
      if (temp2>temp){
          tempcount+=1;
      }else{
          tempcount=0;
      }
      temp=temp2;
      ans=std::max(ans,tempcount);
  }
  cout<<(ans+1)<<endl;
  
  

 
}
 
 
 
signed main()
{

      solve();         
}
