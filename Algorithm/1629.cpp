//#include<iostream>
//
//using namespace std;
//
//unsigned long long a, b, c;
//
//unsigned long long powCheck(unsigned long long x, unsigned long long n)
//{
//	if (n == 1)
//		return x % c;
//	else if(n % 2 == 0)
//		return powCheck(x, n / 2) % c * powCheck(x, n / 2) % c;
//	else
//		return x % c * powCheck(x, n / 2) %c * powCheck(x, n / 2) % c;
//}
//
//int main()
//{	
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> a >> b >> c;
//	printf("%llu", powCheck(a, b));
//}