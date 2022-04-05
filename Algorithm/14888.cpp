#include<iostream>
#include<vector>

using namespace std;

int N;
vector<int> iv;
int operNum[4];
vector<int> ans;
vector<char>oper;
vector<int> v(N);

void backTracking(int cnt)
{
	if (cnt == N - 1)
	{
		int res = 0;
		for (int i = 1; i <= N; i++)
		{

		}
	}
	for (int i = 0; i < N - 1; i++)
	{
		v[cnt] = oper[i];
		backTracking(cnt + 1);
	}
}


int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a;
		iv.push_back(a);
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> operNum[i];
	}

	while (operNum[0] != 0)
	{
		oper.push_back('+');
		operNum[0]--;
	}
	while (operNum[1] != 0)
	{
		oper.push_back('-');
		operNum[1]--;
	}
	while (operNum[2] != 0)
	{
		oper.push_back('*');
		operNum[2]--;
	}
	while (operNum[3] != 0)
	{
		oper.push_back('/');
		operNum[3]--;
	}

	backTracking(0);



}