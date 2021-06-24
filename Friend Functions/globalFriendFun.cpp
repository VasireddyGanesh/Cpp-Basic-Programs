//global function as friend func

#include<iostream>
using namespace std;

class FriendDemo{
    private:
        int i;
    public:
        FriendDemo(int i) :i(i){

        }
    friend void print(FriendDemo const& t );
};

void print(FriendDemo const& t)
{
    cout<<"i is "<<t.i<<endl;
}

int main()
{
    FriendDemo f(10);
    print(f);
    return 0;
}