#include <iostream>
#include<tuple>
using namespace std;

int main()
{
   tuple<int,char,string>data1(10,'A',"uddand");
   tuple<int,char,string>data2(20,'B',"shaik");
   cout<<"tuple data1:is "<<endl;
   cout<<get<0>(data1)<<" "<<get<1>(data1)<<" "<<get<2>(data1)<<endl;
   cout<<"tuple data2 :is"<<endl;
   cout<<get<0>(data2)<<" "<<get<1>(data2)<<" "<<get<2>(data2)<<endl;
   cout<<"swap the tuple data:using swap() :is "<<endl;
   data1.swap(data2);
   cout<<"after swap tuple data1: is "<<endl;
    cout<<get<0>(data1)<<" "<<get<1>(data1)<<" "<<get<2>(data1)<<endl;
    cout<<"after swap tuple data2: is "<<endl;
    cout<<get<0>(data2)<<" "<<get<1>(data2)<<" "<<get<2>(data2)<<endl;
    cout<<"size of tuple data1 is:"<<endl;
    cout<<tuple_size<decltype(data1)>::value<<endl;
    cout<<"size of tuple data2 is:"<<endl;
    cout<<tuple_size<decltype(data2)>::value<<endl;
    
    return 0;
}
// output:-
// tuple data1:is 
// 10 A uddand
// tuple data2 :is
// 20 B shaik
// swap the tuple data:using swap() :is 
// after swap tuple data1: is 
// 20 B shaik
// after swap tuple data2: is 
// 10 A uddand
// size of tuple data1 is:
// 3
// size of tuple data2 is:
// 3
