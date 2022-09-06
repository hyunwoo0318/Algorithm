//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int arr[100001];
//vector<int> v;
//
//int findMaxIdx(int n)
//{
//	for (int i = 0; i < v.size()-1; i++)
//	{
//		if (v[i] <= n && v[i + 1] > n)
//			return i;
//	}
//}
//
//int main()
//{
//	//316±îÁö
//
//	int n;
//	cin >> n;
//	
//	for(int i = 1; i <= 317; i++)
//	{
//		v.push_back(i * i);
//	}	
//
//	for (int i = 1; i <= n; i++)
//	{		
//		int idx = findMaxIdx(i);
//		int minValue = 100000000;
//		for (int j = 0; j <= idx; j++)
//		{
//			int temp = arr[i - v[j]] + 1;
//			if (minValue > temp)
//				minValue = temp;
//		}
//		arr[i] = minValue;
//	}
//	cout << arr[n];
//}