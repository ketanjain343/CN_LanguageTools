#include<bits/stdc++.h>
using namespace std;


class stud
{
	public:
	string name;
	int freq=1;
};




int main()
{
	string s;
	getline(cin,s);
	vector<long long int> pos;
	pos.push_back(-1);
	int i;
	for(i=0;i<s.size();i++)
	{
		if(s[i]==' ')
		{
			pos.push_back(i);
		}
	}
	pos.push_back(i);

	vector<string> v1;
	for(long long int i=0;i<pos.size()-1;i++)
	{
	    string t = s.substr(pos[i]+1,pos[i+1]-pos[i]-1);
	    v1.push_back(t);
	}

	
	vector<stud> vstud;
	
	for(int i=0;i<v1.size();i++)
	{
		int j;
		for(j=0;j<vstud.size();j++)
		{
			if(vstud[j].name == v1[i])
			{
				vstud[j].freq++;
				break;
			}
		}
		if(j==vstud.size())
		{
			stud temp;
			temp.name = v1[i];
			vstud.push_back(temp);
		}
	}
	
	int flag=0;
	for(int i=0;i<vstud.size();i++)
	{
		if(vstud[i].freq!=1)
		{
		cout<<vstud[i].name<<" "<<vstud[i].freq<<endl;
		flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"-1";
	}
	
	
	return 0;
}