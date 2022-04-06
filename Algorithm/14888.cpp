//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int N;
//vector<int> iv;
//int operNum[4];
//vector<int> ans;
//vector<char>oper;
//vector<char> v;
//bool visited[11];
//
//int calc(int a, int b, char c)
//{
//	if (c == '+')
//		return a + b;
//	else if (c == '-')
//		return a - b;
//	else if (c == '*')
//		return a * b;
//	else if (c == '/')
//		return a / b;
//}
//
//void backTracking(int cnt)
//{
//	if (cnt == N - 1)
//	{		
//		int temp = iv[0];
//		for (int i = 1; i < N; i++)
//		{			
//			temp = calc(temp,iv[i], v[i-1]);
//		}
//		ans.push_back(temp);
//	}
//	for (int i = 0; i < N - 1; i++)
//	{
//		if (visited[i] == false)
//		{
//			visited[i] = true;
//			v[cnt] = oper[i];
//			backTracking(cnt + 1);
//			visited[i] = false;
//		}	
//		
//	}
//}
//
//
//int main()
//{
//	cin >> N;
//	v.resize(N-1);
//	for (int i = 0; i < N; i++)
//	{
//		int a;
//		cin >> a;
//		iv.push_back(a);
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> operNum[i];
//	}
//
//	while (operNum[0] != 0)
//	{
//		oper.push_back('+');
//		operNum[0]--;
//	}
//	while (operNum[1] != 0)
//	{
//		oper.push_back('-');
//		operNum[1]--;
//	}
//	while (operNum[2] != 0)
//	{
//		oper.push_back('*');
//		operNum[2]--;
//	}
//	while (operNum[3] != 0)
//	{
//		oper.push_back('/');
//		operNum[3]--;
//	}
//
//	backTracking(0);
//
//	sort(ans.begin(), ans.end());
//
//	cout << ans.back() << endl;
//	cout << ans.front();
//
//}