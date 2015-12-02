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

using namespace std;

// STL restart!
//about vector
vector<int> iv(10);

void print()
{
    for(vector<int>::iterator i = iv.begin() ; i!=iv.end() ; i++){//begin() and end() are iterators.
        cout<<*i<<" ";//use iterator loop to print vector member
    }
}

int  main()
{
    cout<<"The capacity of vector is "<<iv.capacity()<<endl;

    vector<int>::iterator first = iv.begin();
    *first = 15213;

    for(int i = 1;i<20;i++)
    {
//        iv[i] = i;
        iv.push_back(i);//attention to the differences between "=" and "push_back"
    }

    //iterator is a kind of "smart" pointer
    sort(iv.begin(),iv.end());
    swap(iv[0],iv[1]);

    cout<<iv.front()<<endl;//return the first member
    cout<<iv.back()<<endl;//return the last member

    cout<<iv.data()<<endl;//return the pointer to the first member

    cout<<"All members in vector:"<<endl;
    print();
    cout<<endl;

    if(!iv.empty())//check if it's empty
        cout<<"Not empty!"<<endl;

    cout<<iv.size()<<endl;//number of elements can hold
//    cout<<iv.max_size()<<endl;//max number of elements could be held

    swap(iv[11],iv[18]);

    iv.pop_back();//delete last one
    iv.push_back(10007);//push in new one in the tail
    print();

    iv.assign(2,1006);
    print();

    iv.~vector();//destructor, make memory clear
}
