#include <iostream>
#include <vector>
#include <fstream>
#define FILESIZE 250000000

using namespace std;

vector<int> read(string path)
{
	ifstream A;
	A.open(path + ".txt");
	vector<int> flow;
	flow.reserve(FILESIZE);
	int a;
	if(!A.is_open())
	{
		cout << "ERORR!";
	}
	while (!A.eof())
	{
		A >> a;
		flow.push_back(a);
	}
	A.close();
	return flow;
}

void write_to(string path, vector<int>& flow)
{
	ofstream a1, a2;
	a1.open(path + "temp1.txt", fstream::app);
	a2.open(path + "temp2.txt", fstream::app);
	bool firstfile = true;
	int last = *flow.begin();
	for (auto& curnum : flow)
	{
		if (curnum < last)
		{
			if (firstfile)
				a1 << '\n';
			else
				a2 << '\n';
			firstfile = !firstfile;
		}
		if (firstfile)
		{
			a1 << curnum << ' ';
		}
		else
		{
			a2 << curnum << ' ';
		}
		last = curnum;
	}
	flow.clear();
	a1.close();
	a2.close();
}



int main()
{
	string path = "input_file";
	auto flow = read(path);
	write_to(path, flow);
	
}
