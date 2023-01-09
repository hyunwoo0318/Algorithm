//#include<iostream>
//#include<stack>
//#include<string>
//#include<math.h>
//#include<vector>
//
//#define MAX 1000000000
//#define ERR 2000000000
//using namespace std;
//
//int N;
//vector<string> v;
//vector<int> num;
//
//int func(int x)
//{
//	int idxN = 0;
//	stack<int> st;
//	st.push(x);
//	
//	for (int i = 0; i < v.size(); i++)
//	{
//		string s = v[i];
//		if (s == "DUP")
//		{
//			if (st.size() == 0)
//				return ERR;
//			st.push(st.top());
//		}
//		else if (s == "MUL")
//		{
//			if (st.size() < 2)
//				return ERR;
//			int a1 = st.top();
//			st.pop();
//			int a2 = st.top();
//			st.pop();
//			if (a2 != 0)
//			{
//				if (abs(a1) > abs(MAX / a2))
//					return ERR;
//			}			
//			st.push(a1 * a2);
//			
//		}
//		else if (s == "NUM")
//		{
//			st.push(num[idxN]);
//			idxN++;
//		}
//		else if (s == "POP")
//		{
//			if (st.size() < 1)
//				return ERR;
//			st.pop();
//		}
//		else if (s == "INV")
//		{
//			if (st.size() < 1)
//				return ERR;
//			int temp = st.top();
//			st.pop();
//			st.push(-temp);
//		}
//		else if (s == "SWP")
//		{
//			if (st.size() < 2)
//				return ERR;
//			int a1 = st.top();
//			st.pop();
//			int a2 = st.top();
//			st.pop();
//			st.push(a1);
//			st.push(a2);
//		}
//		else if (s == "ADD")
//		{
//			if (st.size() < 2)
//				return ERR;
//			int a1 = st.top();
//			st.pop();
//			int a2 = st.top();
//			st.pop();
//			if (abs(a1 + a2) > MAX )
//				return ERR;
//			st.push(a1 + a2);
//		}
//		else if (s == "SUB")
//		{
//			if (st.size() < 2)
//				return ERR;
//			int a1 = st.top();
//			st.pop();
//			int a2 = st.top();
//			st.pop();
//			if (abs(a2 - a1) > MAX)
//				return ERR;
//			st.push(a2 - a1);
//		}
//		else if (s == "DIV")
//		{
//			if (st.size() < 2)
//				return ERR;
//			int a1 = st.top();
//			st.pop();
//			int a2 = st.top();
//			st.pop();
//			if (a1 == 0)
//				return ERR;
//			st.push(a2 / a1);
//		}
//		else if (s == "MOD")
//		{
//			if (st.size() < 2)
//				return ERR;
//			int a1 = st.top();
//			st.pop();
//			int a2 = st.top();
//			st.pop();
//			if (a1 == 0)
//				return ERR;
//			st.push(a2 % a1);
//		}
//	}
//	if (st.size() == 1)
//		return st.top();
//	else
//		return ERR;
//}
//
//int main()
//{
//	while (1)
//	{
//		v.clear();
//		num.clear();
//		string s;
//
//		while (s != "END")
//		{
//			cin >> s;
//			if (s == "QUIT")
//			{
//				return 0;
//			}
//			if (s == "NUM")
//			{
//				int a;
//				cin >> a;
//
//				num.push_back(a);
//			}
//			v.push_back(s);
//		}
//		cin >> N;
//		for (int i = 0; i < N; i++)
//		{
//			int a;
//			cin >> a;
//			int ret = func(a);
//			if (ret == ERR)
//				cout << "ERROR" << "\n";
//			else
//				cout << ret << "\n";
//		}
//		cout << "\n";
//		
//	}
//}