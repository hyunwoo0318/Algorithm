//#include<iostream>
//#include<stack>
//#include<vector>
//#include<fstream>
//
//using namespace std;
//
//vector<int> v;
//
//int main()
//{
//	int n;
//	cin >> n;
//	
//	stack<int> st;
//	
//	for (int i = 0; i < n; i++)
//	{
//		string s;
//		cin >> s;
//		if (s == "top")
//		{
//			if (!st.empty())
//				cout << st.top() << endl;
//			else
//				cout << -1 << endl;
//		}
//		else if (s == "size")
//		{
//			cout << st.size() << endl;
//		}
//		else if (s == "empty")
//		{
//			if (st.empty())
//				cout << 1 << endl;
//			else
//				cout << 0 << endl;
//		}
//		else if (s == "pop")
//		{
//			if (!st.empty())
//			{
//				cout << st.top() << endl;
//				st.pop();
//			}
//			else
//				cout << -1 << endl;
//			
//		}
//		else if (s == "push")
//		{
//			int num;
//			cin >> num;
//			st.push(num);
//		}
//	}
//	
//	
//}