//#include<iostream>
//#include<queue>
//#include<deque>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<sstream>
//
//using namespace std;
//
//vector<string> split(string input, char deli)
//{
//	vector<string> ans;
//	stringstream ss(input);
//	string temp;
//	while (getline(ss, temp, deli)) {
//		ans.push_back(temp);
//	}
//	return ans;
//}
//int main()
//{
//	int T;
//	cin >> T;
//
//	while (T--)
//	{
//		string s;
//		cin >> s;
//
//		int n;
//		int reverseCnt = 0;
//		cin >> n;
//
//		string s2;
//		cin >> s2;
//		deque<int> dq;
//		bool err = false;
//		//배열 입력받기
//		s2 = s2.substr(1, s2.size() - 2);
//		vector<string> res = split(s2, ',');
//
//		for (int i = 0; i < res.size(); i++)
//		{
//			int temp = stoi(res[i]);
//			dq.push_back(temp);
//		}
//
//		//함수
//		for (int i = 0; i < s.size(); i++)
//		{
//			if (s[i] == 'D')
//			{
//				if (dq.empty())
//				{
//					cout << "error\n";
//					err = true;
//					break;
//				}
//				if (reverseCnt % 2 == 0)
//				{
//					dq.pop_front();
//				}
//				else
//					dq.pop_back();
//			}
//			else
//			{
//				reverseCnt++;
//			}
//		}
//
//		//출력
//		if (err == false)
//		{
//			cout << "[";
//			if (reverseCnt % 2 == 0)
//			{
//				for (int i = 0; i < dq.size(); i++)
//				{
//					if (dq.size() - 1 == i)
//						cout << dq[i];
//					else
//						cout << dq[i] << ",";
//				}
//			}
//			else
//			{
//				for (int i = dq.size()-1; i >=0; i--)
//				{
//					if (i == 0)
//						cout << dq[i];
//					else
//						cout << dq[i] << ",";
//				}
//			}
//			
//			cout << "]\n";
//		}		
//	}
//}