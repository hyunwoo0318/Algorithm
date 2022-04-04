//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//int N;
//vector<int> v;
//vector<int> temp;
//
//int bsh(int a, int low, int high)
//{
//	int mid = (low + high) / 2;
//	if (a < v[mid])
//		return bsh(a, low, mid - 1);
//	else if (a == v[mid])
//		return mid;
//	else
//		return bsh(a, mid + 1, high);
//}
//
//int main()
//{	
//	cin >> N;
//	v.resize(N);
//	temp.resize(N);
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	
//	for (int i = 0; i < N; i++)
//	{
//		int a;
//		cin >> a;
//		v[i] = a;
//		temp[i] = a;
//	}
//
//	sort(v.begin(), v.end());
//	v.erase(unique(v.begin(), v.end()), v.end());
//
//	for (int i = 0; i < N; i++)
//	{
//		cout << bsh(temp[i], 0, v.size() - 1)  << " ";
//	}
//}