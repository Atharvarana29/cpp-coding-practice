#include <iostream>
#include <vector>
using namespace std;

int main()
{
vector < int > v(6);
for (int i = 0; i <v.size();i++)
{
    cin>>v[i];

}

cout<<"Enter the element x: ";
int x;
cin>>x;

int count = 0;
for(int ele : v )
{
    if (ele > x)
    {
        count++;
    }
}
    cout<<count<<endl;
}