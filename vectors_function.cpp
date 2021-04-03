#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vect;
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);

    for (auto i = vect.begin(); i != vect.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for (auto i = vect.cbegin(); i != vect.cend(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for (auto i = vect.rbegin(); i != vect.rend(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for (auto i = vect.crbegin(); i != vect.crend(); i++)
    {
        cout<<*i<<" ";
    }
    
    cout<<endl<<vect.size()<<endl<<vect.capacity()<<endl<<vect.max_size();
    vect.resize(3);
    cout<<endl<<vect.size()<<endl;
    for (auto i = vect.begin(); i != vect.end(); i++)
    {
        cout<<*i<<" ";
    }
    vect.insert(vect.begin(),50);
    cout<<endl;
    for (auto i = vect.begin(); i != vect.end(); i++)
    {
        cout<<*i<<" ";
    }
    vect.erase(vect.begin());
    return 0;
}
