//#include<iostream>
//#include<string>
//#include<vector>
//
//using namespace std;
//
//int main()
//{	
//	vector<int> v;
//	for (int i = 1; i <= 1000000; i++)
//	{
//		int sum = i;
//		string s = to_string(i);
//		for (int j = 0; j < s.size(); j++)
//		{
//			sum += s[j]- '0';
//		}
//		v.push_back(sum);
//	}
//	
//	int num;
//	cin >> num;
//
//	for (int i = 0; i < 1000000; i++)
//	{
//		if (v[i] == num)
//		{
//			cout << i + 1 << endl;
//			return 0;
//		}
//	}
//	cout << 0 << endl;
//	
//}