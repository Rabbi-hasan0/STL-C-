#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    mp.insert({1,10});
    mp.insert({2,20});
    mp.insert({3,30});
    mp.insert({4,40});

    /*

    */
// Print using pointer or iterator.....
    /*map<int,int>::iterator it;
     for(it=mp.begin(); it!=mp.end(); it++)
     cout<<it->first<<' '<<it->second<<endl;
    */

    for(auto it: mp)
        cout<<it.first<<' '<<it.second<<endl;
    return 0;
}
