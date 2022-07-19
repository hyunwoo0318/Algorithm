//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//#define maxNum 4000000
//
//using namespace std;
//
//bool arr[maxNum+1] = {false};
//vector<int> v;
//
//int main()
//{
//	int ans = 0;
//	int n;
//	cin >> n;
//	int m = 2;
//	
//		
//	//소수들 구하기
//	for (int j = 2; j < 2000; j++)
//	{
//		if (arr[j])
//			continue;
//		else
//		{
//			//소수인경우 나머지 배수들을 다 지움
//			while (j * m <= maxNum)
//			{
//				arr[j * m] = true;
//				m++;
//			}
//			m = 2;
//		}
//		
//	}
//	for (int i = 2; i < maxNum; i++)
//	{
//		if (!arr[i])
//			v.push_back(i);
//	}
//	
//	int start = 0;
//	int end = 0;
//	int sum = 2;
//
//	while (start <= end)
//	{
//		//end가 끝에 도달한 경우
//		if (end == v.size() - 1)
//		{
//			if (sum < n)
//				break;
//			else if (sum == n)
//			{
//				ans++;
//				sum -= v[start];
//				start++;
//			}
//			else
//			{
//				sum -= v[start];
//				start++;
//			}
//		}
//		//부분합이 있는경우
//		else if (sum == n)
//		{
//			ans++;
//			sum -= v[start];
//			start++;
//		}
//		//부분합이 원하는 값보다 큰 경우 -> start를 올려서 범위를 좁힘
//		else if (sum > n)
//		{
//			sum -= v[start];
//			start++;
//		}
//		//부분합이 원하는 값보다 작은경우 -> end를 올려서 범위를 늘림
//		else
//		{
//			sum += v[++end];
//		}
//	}
//	cout << ans;
//}