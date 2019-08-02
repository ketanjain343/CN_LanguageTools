#include<bits/stdc++.h>
using namespace std;
int main()
{
 	long long int length;
  cin>>length;
  string s;
  cin>>s;
  long long int counta=0 , counts=0,countp=0;
  for(long long int i=0;i<length;i++)
  {
    if(s[i]=='a')
    {
      counta++;
    }
    else if(s[i]=='s')
    {
      counts++;
    }
    else if(s[i]=='p')
    {
      countp++;
    }
    
  }
  cout<<counta<<" "<<counts<<" "<<countp;
	return 0;
}
