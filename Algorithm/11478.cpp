//#include<iostream>
//#include<string>
//#include<set>
//
////set은 이진트리로 구성되어 있음
////insert할때 자동으로 정렬이 되기때문에 삽입 시간이 o(1)이 아닌 o(logn)이 걸림
////그래서 삽입할때도 시간을 고려해야함.
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
//	int cnt = 0;
//
//	for (int i = 1; i <= s.size(); i++)
//	{
//		for (int j = 0; j + i <= s.size(); j++)
//		{
//			 temp = s.substr(j, i);
//			 se.insert(temp);			
//		}
//		cnt += se.size();
//		se.clear();
//	}
//	cout << cnt;
//}