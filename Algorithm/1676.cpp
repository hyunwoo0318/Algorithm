//#include<iostream>
//
//using namespace std;
//
//int cnt2 = 0;
//int cnt5 = 0;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int temp = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		int temp = i;
//		while (temp % 2 == 0)
//		{
//			temp /= 2;
//			cnt2++;
//		}
//		while (temp % 5 == 0)
//		{
//			temp /= 5;
//			cnt5++;
//		}
//	}
//	cout << min(cnt2,cnt5);
//}