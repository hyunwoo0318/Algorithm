//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	vector<int> s;	
//	vector<int> result;
//	vector<int> temp = { 1,1,1,1,1,1,1,0,0 };
//	int num;
//	int res = 0;
//
//	for (int i = 0; i < 9; i++)
//	{
//		cin >> num;
//		s.push_back(num);		
//	}
//
//	//sort(s.begin(), s.end());
//	
//	do {		
//		res = 0;
//		
//		for (int i = 0; i < 9; i++)
//		{
//			if (temp[i] == 1)
//			{
//				res += s[i];
//				result.push_back(s[i]);
//			}				
//		}
//
//		if (res == 100)
//		{
//			for (auto a : result)
//				cout << a << endl;
//			break;
//		}
//		result.clear();
//	} while (prev_permutation(temp.begin(), temp.end()));
//}