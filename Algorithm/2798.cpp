//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	int a,n, m;
//	cin >> n >> m;
//
//	vector<int> temp;
//	vector<int> mask(n);
//	vector<int> v(n);
//
//	for (int i = 0; i < 3; i++)
//	{
//		mask[i] = 1;
//	}
//	int ks = n;
//	while (ks--)
//	{
//		cin >> a;
//		temp.push_back(a);
//	}
//
//	do {	
//		int sum = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (mask[j] == 1)
//			{
//				sum += temp[j];
//			}
//		}
//		if (sum <= m)
//			v.push_back(sum);
//	} while (prev_permutation(mask.begin(), mask.end()));
//
//	sort(v.begin(), v.end());
//	cout << v.back() << endl;
//
//}