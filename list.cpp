#include<bits/stdc++.h>
using namespace std;
int main()
{
   //list<int>li={1,2,3,4,5,6,2,2 };
   list<int>::iterator it,it1;
   //for singlae data delete....
   /*it=li.begin();
   advance(it,3);
   li.erase(it);*/

   //for multiple data delete....
   /*it=li.begin();
   advance(it,3);
   it1=li.begin();
   advance(it1,6);
   li.erase(it,it1);*/

   //for remove a data...
   //li.remove(2);

   //for merge() list....
   /*list<int>li={1,2,3,4,5,6,7,8};
   list<int>li2={2,4,6,8};
   list<int>li3={1,3,5,7};
   li2.merge(li3);
   li.merge(li2);*/

   // print //
   for(auto it: li)
   {
      cout<<it<<' ';

}
cout<<endl;
}