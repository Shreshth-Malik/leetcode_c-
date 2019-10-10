#include<bits/stdc++.h> 
#include <vector>

using namespace std;

void duplicates(vector<int> arrNew)
{
	for(int i=0;i<arrNew.size();i++)
	{
		if(arrNew[i]>1)
		cout<<i<<" ";	//Printing Duplicates
	}
}
int main()
{
	int x;
	cin>>x;
	vector<int> arr(x,0);
	int no;
	for(int i=0;i<x;i++)
	{
		cin>>no;
		arr[no]++;	//Creating hash table
	}
	duplicates(arr);
	return 0;
}
