#include <iostream>
using namespace std;

class rectangle
{
    private:
    int lenght;
    int breadth;

    public:

    rectangle()
    {
        lenght = 1;
        breadth = 1;
    }
    rectangle(int l , int b)
    {
        lenght = l;
        breadth = b;
    }
        rectangle(rectangle &r)
    {
        lenght = r.lenght;
        breadth = r.breadth;
    }

    void setLength(int l)
    {
        lenght= l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }

    int getLenght(){return  lenght;}
    int getBreadth(){return breadth;}

    int area(){return lenght * breadth;}
    int perimetre()
    {
        return 2 *(lenght + breadth);
    }
    bool isSquare()
    {
        if(lenght == breadth)
        cout<<"Yes, It's a Sqaure"<<endl;
        else cout<<"Not A Sqaure"<<endl;
    }
};


int main()
{
    rectangle r1;

    r1.setLength(10);
    r1.setBreadth(5);

    cout<<"Area Of Rectangle iS "<<r1.area()<<endl;
    cout<<"Perimetre Of Rectangle is "<<r1.perimetre()<<endl;
}
