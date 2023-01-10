//#include<iostream>
//#include<map>
//#include<vector>
//#include<algorithm>
//#define MAX 500001
//using namespace std;
//
//int N;
//int arr[MAX * 2];
//vector<int> v;
//
//int query(int a, int b)
//{
//    a += N; b += N;
//    int l = a; int r = b;
//    int sum = 0;
//    while (l <= r)
//    { if(l % 2 == 1)
//      { 
//        sum += arr[l];
//        l++; 
//      } 
//    if (r % 2 == 0)
//    {   sum += arr[r];
//        r--; 
//    } 
//    l /= 2; r /= 2; 
//    } 
//    return sum; 
//}
//
////a번째 원소 b로 바꾸기
//void update(int a, int b) {
//    
//   a += N;
//   arr[a] = b;
//
//
//   while (a != 1)
//   {
//    a /= 2;
//    arr[a] = arr[2 * a] + arr[2 * a + 1];
//   }
//}
//
//int main() {
//    map<int, int> m;
//    cin >> N;
//    for (int idx = 0; idx < N; idx++)
//    {
//        int input; cin >> input; v.push_back(input); 
//    } 
//    vector<int> temp(v);
//    sort(v.begin(), v.end());
//    for (int i = 0; i < v.size(); i++)
//    {
//        m[v[i]] = i + 1;
//    }
//    for (int i = 0; i < N; i++)
//    {      
//        update(m[temp[i]], 1);
//        cout << query(m[temp[i]], N) << "\n";
//    }
//
//}