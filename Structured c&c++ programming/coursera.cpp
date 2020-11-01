
#include<iostream>
//using namespace std;
#include <vector>

using namespace std;

const int y = 40;

template <typename b>
int sum(b val)
{
	int s = 0;
	for(int i = 0; i < val.size(); ++i)
		s += val[i];
	return s;
}

int main()
{
	vector<int> vec;

	for(int i = 0; i < y; ++i)
		vec.push_back(i);

	cout<<" sum is "<< sum(vec) << '\n';
	return 0;
}
