//#include<iostream>
//
//using namespace std;
//
//string star(int n)
//{
//	if (n == 3)
//	{
//		return "**** ****";
//	}
//	else
//	{
//		string s;
//		s += star(n / 3);
//		s += star(n / 3);
//		s += star(n / 3);
//		s += star(n / 3);
//		s += "\n";
//		s += star(n / 3); s += star(n / 3); s += star(n / 3);
//		return s;
//	}
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	cout << star(N) << endl;
//}