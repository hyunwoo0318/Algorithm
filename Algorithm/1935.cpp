//#include<iostream>
//#include<deque>
//#include<stack>
//
//using namespace std;
//
//int main()
//{
//	int countNum;
//	cin >> countNum;
//
//	string s;
//	cin >> s;
//
//	deque<int> dq;
//
//	for (int i = 0; i < countNum; i++)
//	{
//		int temp;
//		cin >> temp;
//		dq.push_back(temp);
//	}
//
//	stack<double> st;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] == '*')
//		{
//			double num2 = st.top();
//			st.pop();
//			double num1 = st.top();
//			st.pop();
//			st.push(num1 * num2);
//		}
//		else if (s[i] == '+')
//		{
//			double num2 = st.top();
//			st.pop();
//			double num1 = st.top();
//			st.pop();
//			st.push(num1 + num2);
//		}
//		else if (s[i] == '-')
//		{
//			double num2 = st.top();
//			st.pop();
//			double num1 = st.top();
//			st.pop();
//			st.push(num1 - num2);
//		}
//		else if (s[i] == '/')
//		{
//			double num2 = st.top();
//			st.pop();
//			double num1 = st.top();
//			st.pop();
//			st.push(num1 / num2);
//		}
//		else
//		{
//			int num = s[i] - 'A';
//			st.push(dq[num]);
//		}
//		
//	}
//	cout << fixed;
//	cout.precision(2);
//	cout << st.top() << endl;
//	
//}