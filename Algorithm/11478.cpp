//#include<iostream>
//#include<string>
//#include<set>
//
////set�� ����Ʈ���� �����Ǿ� ����
////insert�Ҷ� �ڵ����� ������ �Ǳ⶧���� ���� �ð��� o(1)�� �ƴ� o(logn)�� �ɸ�
////�׷��� �����Ҷ��� �ð��� ����ؾ���.
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