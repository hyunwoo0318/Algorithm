//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int arr[1001] = {};
//vector<int> res(1001, 1);
//
//int main()
//{
//	
//	res[0] = 0;
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		int a;
//		cin >> a;
//		arr[i] = a;
//	}
//
//	//�����ҿ� ���ؼ� ������м����� ���̸� �� ���ؼ� ����.
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			if(arr[j] < arr[i])
//			res[i] = max(res[j] + 1, res[i]);
//		}
//		for (int j = i + 1; j <= n; j++)
//		{
//			if (arr[j] > arr[i])
//				res[i] = max(res[j] + 1, res[i]);
//		}
//	}
//
//	sort(res.begin(), res.end());
//	cout << res.back();
//}