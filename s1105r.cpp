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
//STL 5
using namespace std;
//Let's talk about "map",a sorted associated container
//map make a relationship between A and B
//reflexion and "function"
//map won't allow multi same key, which multimap allows(and it's named by it)
map<char,int> m1;//char is the type for key, int for value
map<char,int,less<char> > m2;
map<char,int,greater<char> >m3;


int main()
{
    map<char,int>::iterator itMap;
    m1['A'] = 1;
    for(itMap = m1.begin();itMap!=m1.end();itMap++)
        cout<<*itMap<<" ";//bug here...

}
