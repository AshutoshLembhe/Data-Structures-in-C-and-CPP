#include<bits/stdc++.h>
using namespace std;

vector<int> missing_elements(vector<int> vec)
{
	vector<int> mis;
	for(int i=0;i<vec.size();i++)
	{
		int temp=abs(vec[i])-1;
		vec[temp]=vec[temp]>0?-vec[temp]:vec[temp];
	}
	for (int i=0;i<vec.size();i++)
	{
		if(vec[i]>0)
		{
			mis.push_back(i+1);
		}
		return mis;
	}
	
}
int main()
{
	vector<int> vec={3,3,3,3,5,1};
	vector<int> miss_ele=missing_elements(vec);
	for(int i=0;i<miss_ele.size();i++)
	{
		cout<<miss_ele[i]<<" ";
	}
	return 0;
}
