#include<iostream>
#include<deque>

using namespace std;
deque<int> id(3);
//STL @double handle queue
int main()
{
    if(!id.empty())
        cout<<"Not empty!"<<endl;
    id.push_front(1);
    id.push_back(10007);
    cout<<id.size()<<endl;

    for(deque<int>::iterator i = id.begin();i!=id.end();i++)
        cout<<*i<<" ";
    cout<<endl;

    id.pop_back();
    id.pop_front();
    cout<<id.size()<<endl;

    cout<<"Rbegin and Rend:"<<endl;
    cout<<*id.rbegin()<<endl;
    cout<<*id.rend()<<endl;

    cout<<id.front()<<"  "<<id.back()<<endl;//be aware of the meaning of "front" and "back" in these function names

    for(deque<int>::iterator i = id.begin();i!=id.end();i++)
        cout<<*i<<" ";
    cout<<endl;

    id.resize(1);//redefine the size, make it larger or smaller
    cout<<id.size()<<endl;

    for(deque<int>::iterator i = id.begin();i!=id.end();i++)
        cout<<*i<<" ";
    cout<<endl;

    id.insert(id.end(),10);//the first parameter is an iterator
    id.insert(id.end(),5,11);

    int a[5] = {11,12,13,14,15};
    id.insert(id.begin(),a,a+5);
    //some using methods of insert(), available to vector as well
    for(deque<int>::iterator i = id.begin();i!=id.end();i++)
        cout<<*i<<" ";
    cout<<endl;

    deque<int>::iterator it = id.end();
    cout<<*it<<endl;

}
