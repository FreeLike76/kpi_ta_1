#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>::iterator endofs(vector<int> &input, vector<int>::iterator startofsection)
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

void addsort(vector<int>::iterator fstart, vector<int>::iterator fend, vector<int>::iterator sstart, vector<int>::iterator send, vector<int> result)
{
	auto start_of_new_section = result.end() - 1;
	copy(fstart, fend, back_inserter(result));
	copy(sstart, send, back_inserter(result));
	sort(start_of_new_section, result.end());
}

void dividevector(vector<int> &input, vector<int> &a, vector<int> &b,vector<int> &output)
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
	auto first = endofs(input, input.begin());
	cout << *first << endl;
	auto second = endofs(input, first);
	cout << *second << endl;
	auto third = endofs(input, second);
	auto forth = input.end();
	int last;
	find_if(input.begin(), input.end(), [&](const int &a)
		{

		});
}
