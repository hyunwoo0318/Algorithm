//#include<iostream>
//
//using namespace std;
//int n;
//int arr[5][5] = {};
//int res[5][5] = {};
//
////단순히 두 배열을 곱해서 res에 넣는함수
//int(* multMatrix(int arr1[5][5], int arr2[5][5]))[5]
//{
//	int tempArr[5][5] = {};
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			int temp = 0;
//			for (int h = 0; h < n; h++)
//			{
//				temp += arr1[i][h] * arr2[h][j];
//			}
//			tempArr[i][j] = temp;
//		}
//	}
//	return tempArr;
//}
//
//int(*powMatrix(int k))[5]
//{
//	if (k == 1)
//	{
//		return arr;
//	}
//	if (k == 2)
//	{
//		return multMatrix(arr, arr);
//	}
//	else if( k % 2 == 0)
//	{
//		return multMatrix(powMatrix(k / 2), powMatrix(k / 2));
//	}
//	else
//	{
//		return multMatrix(powMatrix(k / 2), multMatrix(powMatrix(k / 2), arr));
//	}
//}
//
//int main()
//{
//	int b;
//	cin >> n >> b;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			int a;
//			cin >> a;
//			arr[i][j] = a;
//		}
//	}
//
//	int (*ans)[5] = powMatrix(b);
//
//}