//#include<iostream>
//#include<stack>
//#include<vector>
//#include<sstream>
//
//
//using namespace std;
//
//vector<string> split(string input, char deli)
//{
//	vector<string> ans;
//	stringstream ss(input);
//	string temp;
//
//	while (getline(ss, temp, deli))
//	{
//		ans.push_back(temp);
//	}
//	return ans;
//}
//
//
//int main()
//{
//	while (1)
//	{
//		stack<char> st;
//		string s;
//		
//		getline(cin, s);		
//		
//		bool success = false;
//		if (s.size() == 1 && s[0] == '.')
//			break;
//
//		for (int i = 0; i < s.size()-1; i++)
//		{
//			if (s[i] == '(' || s[i] == '[')
//			{				
//					st.push(s[i]);
//				
//			} 
//				
//			else if (s[i] == ')')
//			{
//				if (st.empty())
//				{
//					cout << "no" << endl;
//					success = true;
//					break;
//				}
//				else if (st.top() != '(')
//				{
//					cout << "no" << endl;
//					success = true;
//					break;
//				}
//				else
//				{
//					if (!st.empty())
//					st.pop();
//				}
//
//			}
//			else if (s[i] == ']')
//			{
//				if (st.empty())
//				{
//					cout << "no" << endl;
//					success = true;
//					break;
//				}
//				else if (st.top() != '[')
//				{
//					cout << "no" << endl;
//					success = true;
//					break;
//				}
//				else
//				{
//					if(!st.empty())
//					st.pop();
//				}
//			}
//		}
//		
//		if(success == false)
//		cout << "yes" << endl;
//
//
//	}
//}