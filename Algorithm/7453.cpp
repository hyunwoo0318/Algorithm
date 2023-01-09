//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//#define MAX 4001
//using namespace std;
//
//int a[MAX];
//int b[MAX];
//int c[MAX];
//int d[MAX];
//
//vector<int> arr1;
//vector<int> arr2;
//int N;
//long long ans = 0;
//
//int main()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		int a1, b1, c1, d1;
//		cin >> a1 >> b1 >> c1 >> d1;
//		a[i] = a1;
//		b[i] = b1;
//		c[i] = c1;
//		d[i] = d1;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			arr1.push_back(a[i] + b[j]);
//			arr2.push_back(c[i] + d[j]);
//		}
//	}
//	sort(arr1.begin(), arr1.end());
//	sort(arr2.begin(), arr2.end());
//
//	
//	int left = 0;
//	int right = arr2.size()-1;
//	int sum = arr1[left] + arr2[right];
//	while (1)
//	{
//	if (right < 0 || left >= arr1.size()) break;
//
//	sum = arr1[left] + arr2[right];
//
//	if (sum > 0)
//	{	
//		right--;			
//	}
//	else if (sum < 0)
//	{			
//		left++;
//	}
//	else if (sum == 0)
//	{
//		long long num1 =  upper_bound(arr1.begin(), arr1.end(), arr1[left]) - lower_bound(arr1.begin(), arr1.end(), arr1[left]);
//		long long num2 = upper_bound(arr2.begin(), arr2.end(), arr2[right]) - lower_bound(arr2.begin(), arr2.end(), arr2[right]);
//		left += (int)num1;
//		right -= (int)num2;
//		ans = ans + (num1 * num2);
//	}
//	}
//	cout << ans;
//
//}