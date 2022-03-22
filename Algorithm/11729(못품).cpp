#include<iostream>

using namespace std;

int hanoicnt(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 3;
	else
		return 2 * hanoicnt(n - 1) + 1;
}

string hanoilog(int n, int a, int b)
{
	if (n == 1)
		return "1 3\n";
	if (n == 2 && a == 1 && b == 2)
	{
		return "1 3\n1 2\n3 2\n";
	}
	else if (n == 2 && a == 2 && b == 3)
	{
		return "2 1\n2 3\n1 3\n";
	}
	else if (n == 2 && a == 1 && b == 3)
	{
		return "1 2\n1 3\n2 3\n";
	}
	else
		return hanoilog(n - 1, 1, 2) + "1 3\n" + hanoilog(n - 1, 2, 3);
}

int main()
{
	int N;
	cin >> N;

	cout << hanoicnt(N) << endl;
	cout << hanoilog(N,1,3) << endl;
}