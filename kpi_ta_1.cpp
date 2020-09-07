#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>::iterator endofchunk(vector<int> &input, vector<int>::iterator startofsection)
{
	auto last = startofsection;
	for (auto it = startofsection; it != input.end(); ++it)
	{
		if (*it >= *last)
		{
			last = it;
		}
		else
		{
			return it;
		}
	}
	return input.end();
}

void naturediv(vector<int> &input, vector<int> &a, vector<int> &b)
{
	a.clear();
	b.clear();
	vector<int>::iterator endofs;
	for(auto ptr = input.begin();ptr!=input.end();++ptr)
	{
		
	}
}

int main()
{
	vector<int> input = { 1,3,5,10,6,5 };
	
}
