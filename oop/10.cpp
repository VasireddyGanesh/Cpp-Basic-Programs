//friend class and friend function


#include<iostream>
using namespace std;
class a
{
 private:
    int i;
    int i2;
 public:
    int i3;
    string ch1;
    a()
    {
        i=1;
        i2=2;
        i3=3;
    }
    friend class b;
    friend void print(a &ref);
};

void print(a &ref)
{
    cout<<ref.i2;
}

class b
{
  private:
    int i4;
  public:
    int i5;
    void show(a &ref1)
    {
        ref1.i=20;
        cout << ref1.i;
    }
};


int main()
{
    a s1;
    b s2;
    s2.show(s1);
    print(s1);
    return 0;
}