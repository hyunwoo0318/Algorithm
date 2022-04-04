//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	stack<int> st;
//	for (int i = 0; i < n; i++)
//	{
//		int a;
//		cin >> a;
//
//		if (a != 0)
//			st.push(a);
//		else
//			st.pop();
//	}
//	int sum = 0;
//	while (!st.empty())
//	{
//		sum += st.top();
//		st.pop();
//	}
//	cout << sum << endl;
//}