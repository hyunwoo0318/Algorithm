//#include<iostream>
//#include<string>
//
//using namespace std;
//
//bool group(string s, int N)
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int i = 0; i < s.size(); i++)
//		{
//			for (int j = 0; j < s.size(); j++)
//			{
//				if (s[i] == s[j])
//				{
//					for (int k = min(i, j); k < max(i, j); k++)
//					{
//						if (s[k] != s[i])
//							return false;
//					}
//				}
//			}
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//	int cnt = 0;
//	for (int i = 0; i < N; i++)
//	{
//		string s;
//		cin >> s;
//		if (group(s, N) == true)
//			cnt++;		
//	}
//	cout << cnt << endl;
//}