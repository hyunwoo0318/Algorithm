//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int countNum;
//	cin >> countNum;
//
//	for (int i = 0; i < countNum; i++)
//	{
//		vector<int> v;
//		vector<int> temp(44, 0);
//		int num;
//		cin >> num;
//		for (int i = 1; i < 45; i++)
//		{
//			v.push_back(i * (i + 1) / 2);
//		}
//
//		temp[0] = 1;
//		temp[1] = 1;
//		temp[2] = 1;
//
//		int res = 0;
//		bool r = false;
//
//		for (int i = 0; i < 44; i++)
//		{
//			for (int j = 0; j < 44; j++)
//			{
//				for (int h = 0; h < 44; h++)
//				{
//					if (v[i] + v[j] + v[h] == num)
//					{
//						r = true;
//						cout << 1 << endl;
//						break;
//					}
//				}
//				if (r == true)
//					break;
//			}
//			if (r == true)
//				break;
//		}
//		if( r == false)
//		cout << 0 << endl;
//			
//	}
//	
//
//
//}