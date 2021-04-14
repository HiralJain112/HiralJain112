#include<iostream>
#include<algorithm>//for sort function
#include<string>

using namespace std;

int main()
{
    string s1="bhbjkbuyfihkbjhbuhgj";
    sort(s1.begin(),s1.end());//sorts in lexicographical order
    cout<<s1;
    return 0;
}