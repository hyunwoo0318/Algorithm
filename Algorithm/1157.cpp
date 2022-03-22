//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	string s;
//	cin >> s;
//
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] >= 'a' && s[i] <= 'z')
//			s[i] -= ('a' - 'A');
//	}
//
//	int arr[26] = {};
//	int cnt = 0;
//	int max;
//	
//	for (int i = 0; i < s.size(); i++)
//	{
//		arr[s[i] - 'A'] += 1;
//	}
//
//	for (int i = s.size(); i > 0; i--)
//	{
//		for (int j = 0; j < 26; j++)
//		{
//			if (arr[j] == i)
//			{
//				max = j;
//				cnt++;
//			}
//				
//		}
//		if (cnt > 1)
//			break;
//	}
//
//	if (cnt > 1)
//		cout << '?' << endl;
//	else
//	{
//		int a = v.front();
//		cout << (char)(a + 'A') << endl;
//	}
//}