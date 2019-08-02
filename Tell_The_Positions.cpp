#include<bits/stdc++.h>
using namespace std;



class student
{
public:
  int roll;
  string name;
  int marks;
};

bool comparebymarks(student a,student b)
{
	if(a.marks==b.marks)
	{
		return a.roll>b.roll;
	}
	return a.marks<b.marks;
}


int main()
{
    long long int n;
    cin>>n;
    student stud[n];
  	string s;
    int m1,m2,m3;
	
  for(int i=0;i<n;i++)
  {
    cin>>s;
    cin>>m1;
    cin>>m2;
    cin>>m3;
	stud[i].roll=i+1;
    stud[i].name =s;
    stud[i].marks = m1+m2+m3;
  }
  
  sort(stud,stud+n,comparebymarks);
  
  for(int i=n-1;i>=0;i--)
  {
  	cout<<n-i<<" "<<stud[i].name<<endl;
  }
  
	return 0;
}
