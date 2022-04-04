//#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//#include<queue>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N;
//	cin >> N;
//	queue<int> q;
//	
//	while (N--)
//	{
//		string s;
//		cin >> s;
//		if (s == "front")
//		{
//			if (q.empty())
//				cout << -1 << '\n';
//			else
//				cout << q.front() << '\n';
//		}
//		else if (s == "back")
//		{
//			if (q.empty())
//				cout << -1 << '\n';
//			else
//				cout << q.back() << '\n';
//		}
//		else if (s == "size")
//		{
//			cout << q.size() << '\n';
//		}
//		else if (s == "pop")
//		{
//			if (q.empty())
//				cout << -1 << '\n';
//			else
//			{
//				cout << q.front() << '\n';
//				q.pop();
//			}				
//		}
//		else if (s == "empty")
//		{
//			if (q.empty())
//				cout << 1 << '\n';
//			else
//				cout << 0 << '\n';
//		}
//		else if (s == "push")
//		{
//			int a;
//			cin >> a;
//			q.push(a);
//		}
//	}
//}