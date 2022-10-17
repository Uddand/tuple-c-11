#include <iostream>
#include <tuple>
using namespace std;

int main() {
    tuple<int,char,string>data1(10,'A',"uddand");
    tuple<int,char,string>data2(11,'a',"shaik");
    cout<<"Tuple:data1 is:"<<endl;
    cout<<get<0>(data1)<<" "<<get<1>(data1)<<" "<<get<2>(data1)<<endl;
    cout<<"Tuple:data2 is:"<<endl;
    cout<<get<0>(data2)<<" "<<get<1>(data2)<<" "<<get<2>(data2)<<endl;
    cout<<"swap the Tuple data using swap()"<<":"<<endl;
    data1.swap(data2);
    cout<<"swap After Tuple:data1 :"<<endl;
    cout<<get<0>(data1)<<" "<<get<1>(data1)<<" "<<get<2>(data1)<<endl;
    cout<<"swap After Tuple:data2 :"<<endl;
    cout<<get<0>(data2)<<" "<<get<1>(data2)<<" "<<get<2>(data2)<<endl;
    return 0;
}