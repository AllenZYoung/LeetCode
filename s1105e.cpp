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
//STL learning code 3
using namespace std;
//List is not available for random accessed read

list<int> l1,l2;
void print(list<int> l)
{
    for(list<int>::iterator it = l.begin();it!=l.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}
int main()
{
    //STL core parts: Container, Algorithms, Iterator
    for(int i = 1;i<=5;i++)
        l1.push_back(rand()%99);
    for(int i = 1;i<=5;i++)
        l2.push_front(i);

    print(l1);
    print(l2);

    l1.merge(l2);//merge is "combine"
    print(l1);

    l2.push_back(1007);
    l2.push_front(1006);
    print(l2);

    l1.sort();
    l2.sort();//seems sort is universally used...

    print(l1);
    print(l2);

//    l2.splice(l2.begin()++,l1);//leave this weird function away...
    print(l2);

}
