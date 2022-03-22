//#include<iostream>
//
//using namespace std;
//
//int arr[250000] = {};
//
//int main()
//{
//	for (int i = 2; i <= 246912; i++)
//		arr[i] = i;
//	
//	for (int i = 0; i < 496; i++)
//	{
//		if (arr[i] == 0) continue;
//		else
//		{
//			for (int j = 2 * i; j <= 246912; j += i)
//				arr[j] = 0;
//		}
//	}
//
//	int n,cnt;
//	
//	while (1)
//	{
//		cnt = 0;
//		cin >> n;
//		if (n == 0)
//			break;
//		
//		for (int i = n+1; i <= 2 * n; i++)
//		{
//			if (arr[i] != 0)
//				cnt++;
//		}
//		cout << cnt << endl;
//	}
//}