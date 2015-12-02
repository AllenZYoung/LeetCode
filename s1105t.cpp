#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include<deque>
#include<list>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<vector>
//STL learning code 4
using namespace std;
//Set is default and initially sorted, every element get once
//so just regard the elements as "Key Value"s

//multiset allow many same key value.
set<int> s1;
set< int,less<int> > s2;//less sorted is the default condition
set< int,greater<int> >s3;

void print(set<int> s)
{
    for(set<int>::iterator it = s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    for(int i =1;i<=100;i+=13)
        s1.insert(i%17);
    print(s1);

    if(s1.insert(1%17).second)
        cout<<"Insert finished!";
    else
        cout<<"Insert failed!";
    cout<<endl;//there had been a "1%17" in the set, so insert will failed

    for(int i =1;i<=100;i+=15)
        s2.insert(i%7);
    for(int i =1;i<=100;i+=15)
        s3.insert(i%7);

    print(s2);//the "less" set prints
    for(set<int>::iterator it = s3.begin();it!=s3.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;//the "greater" set prints, take a look at the difference

    //multiset here
    multiset<int> s4;
    for(int i =1;i<=10;i++)
        s4.insert(i%2);
    for(multiset<int>::iterator it = s4.begin();it!=s4.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;//print the multiset

}
