//#include<iostream>
//#include<vector>
//#include<cstdlib>
//
//#define maxNum 2000000050
//
//using namespace std;
//
//int main()
//{
//	int n, temp;
//	vector<int> v;
//	cin >> n;
//
//	int plus=-1;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		v.push_back(temp);
//		//����� ���ϴ� ������ Ȯ���ϱ�
//		if (temp > 0 && plus == -1)
//			plus = i;
//	}
//
//	//�� �����ΰ��
//	if (plus == -1)
//	{
//		cout << v[n - 2] << " " << v[n - 1];
//		return 0;
//	}
//	
//	//�� ����ΰ��
//	if (v[0] >= 0)
//	{
//		cout << v[0] << " " << v[1];
//		return 0;
//	}
//
//
//	//���� ����� ������ ������ ���
//	//������ idx
//	int ansNum = maxNum;
//	pair<int, int> ansPair;
//
//	for (int i = 0; i < plus; i++)
//	{
//		int val = v[i];
//		int lo = plus;
//		int hi = n - 1;
//		int mid;
//
//		//���� ���� 0�� ��츦 ã���� ������.
//		if (v[lo] + val == 0)
//		{
//			cout << val << " " << v[lo];
//			return 0;
//		}
//			
//		if (v[hi] + val == 0)
//		{
//			cout << val << " " << v[hi];
//			return 0;
//		}
//			
//		//���� �������� val�� ���񰪺��� ũ�ų� ������ �̺�Ž���� ���� �ʿ����.
//		if (v[lo] + val >= 0)
//		{
//			if (ansNum > abs(val + v[lo]))
//			{
//				ansNum = abs(val + v[lo]);
//				ansPair = { v[i], v[lo] };
//			}
//			continue;
//		}
//
//		while (lo < hi - 1)
//		{
//			mid = (lo + hi) / 2;
//			if (val + v[mid] > 0)
//				hi = mid;
//			else
//				lo = mid;
//		}
//
//		if (abs(val + v[lo]) < abs(val + v[hi]))
//		{
//			if (ansNum > abs(val + v[lo]))
//			{
//				ansNum = abs(val + v[lo]);
//				ansPair = { v[i], v[lo] };
//			}
//		}
//		else
//		{
//			if (ansNum > abs(val + v[hi]))
//			{
//				ansNum = abs(val + v[hi]);
//				ansPair = { v[i], v[hi] };
//			}
//		}
//
//	}		
//
//	//����� �������� ���ؼ� �� ������츦 ã�� �ڵ�
//	if (plus >= 2)
//	{
//		if (ansNum > abs(v[plus - 1] + v[plus - 2]))
//		{
//			ansNum = abs(v[plus - 1] + v[plus - 2]);
//			ansPair = { v[plus - 2], v[plus - 1] };
//
//		}
//	}
//
//	if (plus + 1 <= n - 1)
//	{
//		if (ansNum > abs(v[plus + 1] + v[plus]))
//		{
//			ansNum = abs(v[plus] + v[plus + 1]);
//			ansPair = { v[plus], v[plus + 1] };
//		}
//	}
//
//	cout << ansPair.first << " " << ansPair.second;
//
//}
