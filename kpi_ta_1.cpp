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

int main()
{
	vector<int> input = { 1,3,5,10,6,5 };
	auto first = endofs(input, input.begin());
	cout << *first << endl;
	auto second = endofs(input, first);
	cout << *second << endl;
	auto third = endofs(input, second);
	auto forth = input.end();
}
