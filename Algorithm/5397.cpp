//#include<iostream>
//#include<stack>
//#include<string>
//
//using namespace std;
//
//int main()
//{
//	int countNum;
//	cin >> countNum;
//
//	for (int i = 0; i < countNum; i++)
//	{
//		string log;
//		cin >> log;
//
//		stack<char> pw;
//		stack<char> temp;
//
//		for (int i = 0; i < log.size(); i++)
//		{
//			if (log[i] == '<')
//			{
//				if (pw.empty())
//					continue;
//				else
//				{
//					char tp = pw.top();
//					temp.push(tp);
//					pw.pop();
//				}
//			}
//			else if (log[i] == '>')
//			{
//				if (temp.empty())
//					continue;
//				else
//				{
//					char tp = temp.top();
//					pw.push(tp);
//					temp.pop();
//				}
//			}
//			else if (log[i] == '-')
//			{
//				if (pw.empty())
//					continue;
//				else				
//					pw.pop();
//			}
//			else
//				pw.push(log[i]);
//		}
//		if (!temp.empty())
//		{
//			while (!temp.empty())
//			{
//				char tp = temp.top();
//				pw.push(tp);
//				temp.pop();
//			}
//		}
//		while (!pw.empty())
//		{
//			temp.push(pw.top());
//			pw.pop();
//		}
//		while (!temp.empty())
//		{
//			cout << temp.top();
//			temp.pop();
//		}
//		cout << endl;
//
//	}
//}