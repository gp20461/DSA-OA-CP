#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,d,m;
    
    cin >> n >> d >> m;
    
    vector<int>vec(n);
    
    for(int i=0 ; i<n ; i++)
    {
      cin >> vec[i];
    }
    
    unordered_map<int,int>prefix_cnt;
    
    prefix_cnt[0] = 1;
    
    int freq = 0, totalCount = 0;
    
    for(int i:vec)
    {
      if(i == d)
      {
        freq++;
      }
    totalCount += prefix_cnt[freq - m];
    prefix_cnt[freq]++;
    
    }
    
    cout << totalCount;
    return 0;
}