//#include<iostream>
//#include<algorithm>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
//    long long answer = 0;
//    int sum = 0;    
//    vector<int> ds;
//    vector<int> dp;
//    for (int i=0;i<n;i++)
//    {
//        sum += deliveries[i];
//        ds[i] = sum;
//    }
//   
//    sum = 0;
//    for (int i=0;i<n;i++)
//    {
//        sum += pickups[i];
//        dp[i] = sum;
//    }  
//
//    int prevDeliverPos = 0;
//    int prevPickupPos = 0;
//    int deliverPos = 0;
//    int pickupPos = 0;    
//
//    while (1)
//    {
//        if (prevDeliverPos == n-1 && prevPickupPos==n-1)
//            break;
//
//        int temp = cap;        
//        for (int i = prevDeliverPos; i < n; i++)
//        {
//            if (temp >= deliveries[i])
//            {
//                temp -= deliveries[i];
//                deliveries[n] -= deliveries[i];
//                deliveries[i] = 0;                 
//            }
//            else
//            {
//                deliveries[n] -= temp;
//                deliveries[i] -= temp;
//                temp = 0;
//            }
//
//            if (temp == 0)
//            {
//                deliverPos = i;
//                break;
//            }
//
//            if (i == n - 1)
//                deliverPos = i;
//        }
//
//        temp = cap;
//        for (int i = prevPickupPos; i <= deliverPos; i++)
//        {
//            if (temp > pickups[i])
//            {
//                temp -= pickups[i];
//                pickups[n] -= pickups[i];
//                pickups[i] = 0;                
//            }
//            else
//            {
//                pickups[i] -= temp;
//                pickups[n] -= temp;
//            }
//
//            if (temp == 0)
//            {
//                pickupPos = 0;
//                break;
//            }
//
//            if (i == deliverPos)
//                pickupPos = i;
//        }
//
//        prevDeliverPos = deliverPos;
//        prevPickupPos = pickupPos;
//
//        answer += ((deliverPos+1) * 2);
//    }
//    return answer;
//}
//
//int main()
//{
//    vector<int> d = { 1};
//    vector<int> p = { 2};
//
//    long long ans = solution(1,1, d, p);
//    cout << ans;
//}