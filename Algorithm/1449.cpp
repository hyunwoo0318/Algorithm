//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	int N, L;
//	cin >> N >> L;
//
//	vector<int> v1(4000, 0);
//
//	int cnt = 0;
//	int h;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> h;
//		v1[h-1] = 1;
//	}
//
//	for (int i = 0; i < 1000; i++)
//	{
//		if (v1[i] == 1)
//		{
//			for (int j = 0; j < L; j++)
//			{
//				v1[i + j] = 0;
//				
//			}
//			cnt++;
//		}
//	}
//	cout << cnt << endl;
//}