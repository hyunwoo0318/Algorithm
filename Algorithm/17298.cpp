//#include<iostream>
//#include<stack>
//#include<queue>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	stack<int> s;
//	stack<int> tp;
//	vector<int> v;
//
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//		v.push_back(a);
//	}
//
//	for (int i = v.size()-1; i >=0; i--)
//	{
//		s.push(v[i]);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		int ans = -1;
//		int top = s.top();
//		s.pop();
//		while (!s.empty())
//		{
//			int temp = s.top();
//			if (temp > top)
//			{
//				ans = temp;
//				break;
//			}
//			else
//			{
//				s.pop();
//				tp.push(temp);
//			}
//		}
//		cout << ans << " ";
//		while (!tp.empty())
//		{
//			s.push(tp.top());
//			tp.pop();
//		}
//	}
//
//
//}