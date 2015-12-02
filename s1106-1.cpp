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
#include<utility>
//STL code 6
using namespace std;
//most algorithm in the library is not only focused on specific container

int a[5];
vector<int> b;

template <typename T>
void print(T t)
{
    for(int i = 0;i<t.size();i++)
        cout<<t[i]<<"\t";
    cout<<endl;
}

int main()
{
    for(int i = 0;i<5;i++)
    {
        b.push_back(rand()%106);
    }
    print(b);

    reverse(b.begin(),b.end());
    print(b);

    copy(b.begin(),b.end(),ostream_iterator<int>(cout,"\t"));//output-iterator here
    cout<<endl;
    print(b);

    int a[10] = {1,2,3,4,5,6,1,8,9,10};
    swap_ranges(a,a+3,a+6);//swap two ranges

    for(int i = 0;i<10;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;

    vector<int> v1(a,a+10);

    vector<int>::iterator it1,it2;
    it1 = find(v1.begin(),v1.end(),3);//remember the iterator here is a pointer
    cout<<*it1<<endl;
    it2 = find(v1.begin(),v1.end(),100);
    cout<<*it2<<endl;

    int num = count(v1.begin(),v1.end(),1);
    cout<<num<<" one in v1"<<endl;

    sort(v1.begin(),v1.end());
    print(v1);

}
