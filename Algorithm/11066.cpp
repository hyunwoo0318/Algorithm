//#include<iostream>
//#include<vector>
//
//#define maxNum 2100000000
//
//using namespace std;
//
//vector<int> v;
//int arr[501][501] = {};
//int sum[501][501] = {};
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int N;
//	cin >> N;
//
//	while (N--)
//	{		
//		int n;
//		cin >> n;
//
//		for (int i = 0; i < n; i++)
//		{
//			int a;
//			cin >> a;
//			v.push_back(a);	
//			sum[i + 1][i + 1] = a;
//		}
//		
//
//		for (int dist = 1; dist <= n - 1; dist++)
//		{
//			for (int i = 1; i <= n; i++)
//			{			
//				int j = i + dist;
//				if (j > n)
//					break;
//				int lowValue = maxNum;					
//				
//				for (int k = i; k <= j - 1; k++)
//				{			
//					sum[i][j] = sum[i][j - 1] + sum[j][j];
//					int temp = sum[i][j] + arr[i][k] + arr[k + 1][j];
//					if (lowValue > temp)
//						lowValue = temp;
//				}
//				arr[i][j] = lowValue;				
//				
//			}
//		}
//		
//
//		cout << arr[1][n] << "\n";
//
//		v.clear();
//
//	}
//
//}