#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <utility>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <fstream>
#include <list>
#include <iterator>
# define ull unsigned long long
# define ll long long
ll mod = 1e9 + 7;
using namespace std;

template<typename T>
void merge_sort(T &a)
{
	if (a.size() <= 2)
	{
		if (a.size() == 2 && *a.begin() > *a.rbegin()) swap(*a.begin(), *a.rbegin());
		return ;
	}
	//
	T half;
	//
	for (size_t i = 0; i < a.size() / 2; i++)
	{
		half.push_back(a.back());
		a.pop_back();
	}
	//
	merge_sort(a);
	merge_sort(half);
	//
	T res;
	merge(a.begin(), a.end(), half.begin(), half.end(), std::back_inserter(res));
	//
	a = res;
	return ;
}

int main(int ac, char **av)
{
	srand(time(NULL));
	//
	list<int> a;
	deque<int> b;
	//
	int n = 8;
	for (int i = 0; i < n; i++)
	{
		int t = rand() % 100;
		a.push_back(t);
		b.push_back(t);
	}
	//
	cerr << "Init: ";
	for (list<int>::iterator it = a.begin(); it != a.end(); it++)
	{
		cerr << *it << " ";
	}
	cerr << endl;
	//
	merge_sort(a);
	merge_sort(b);
	//
	cerr << "Result List: ";
	for (list<int>::iterator it = a.begin(); it != a.end(); it++)
	{
		cerr << *it << " ";
	}
	cerr << endl;
	//
	cerr << "Result Deque: ";
	for (deque<int>::iterator it = b.begin(); it != b.end(); it++)
	{
		cerr << *it << " ";
	}
	cerr << endl;
	//

	list<int>::iterator i;
	i = lower_bound(a.begin(), a.end(), 10);
	if (i != a.end()) cerr << *i << endl;
	else cerr << "Not Found\n";
	
	deque<int>::iterator j;
	j = lower_bound(b.begin(), b.end(), 10);
	if (j != b.end()) cerr << *j << endl;
	else cerr << "Not Found\n";

	if (i != a.begin()) i--;
	if (j != b.begin()) j--;

	cerr << *i << "\n";
	cerr << *j << "\n";
	//
	return (0);
}
