//#include<iostream>
//#include<string>
//#include<set>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	string s;
//	cin >> s;
//	set<string> se;
//	string temp;
//
//	for (int i = 1; i <= s.size(); i++)
//	{
//		for (int j = 0; j + i <= s.size(); j++)
//		{
//			 temp = s.substr(j, i);
//			//���տ� ���°�� -> �߰�����
//			if (se.find(temp) == se.end())
//			{
//				se.insert(temp);
//			}
//		}
//	}
//	cout << se.size();
//
//}