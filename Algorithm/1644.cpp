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
//	//�Ҽ��� ���ϱ�
//	for (int j = 2; j < 2000; j++)
//	{
//		if (arr[j])
//			continue;
//		else
//		{
//			//�Ҽ��ΰ�� ������ ������� �� ����
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
//		//end�� ���� ������ ���
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
//		//�κ����� �ִ°��
//		else if (sum == n)
//		{
//			ans++;
//			sum -= v[start];
//			start++;
//		}
//		//�κ����� ���ϴ� ������ ū ��� -> start�� �÷��� ������ ����
//		else if (sum > n)
//		{
//			sum -= v[start];
//			start++;
//		}
//		//�κ����� ���ϴ� ������ ������� -> end�� �÷��� ������ �ø�
//		else
//		{
//			sum += v[++end];
//		}
//	}
//	cout << ans;
//}