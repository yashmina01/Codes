#include <iostream>
using namespace std;

class shape
{
    public:
    virtual float area()= 0;
    virtual float perimetre()= 0;
};

class rectangle:public shape
{
    private:
    int lenght;
    int breadth;

    public:
    rectangle(int l, int b)
    {
        lenght=l;
        breadth=b;
    }

    float area()
    {
        return lenght*breadth;
    }
    float perimetre()
    {
        return 2*(lenght + breadth);
    }
    
};

class circle:public shape
{
    private:
    int radius;

    public:
    circle(int r)
    {
        radius=r;
    }

    float area()
    {
        return 2*3.14*radius*radius;
    }
    float perimetre()
    {
        return 2*3.14*radius;
    }
};

int main()
{
    shape *s = new rectangle(10,5);
    cout<<"Area Of Rectangle is "<<s->area()<<endl;
    cout<<"Perimetre Of Rectangle is "<<s->perimetre()<<endl;

    s = new circle(2);
    cout<<"Area Of Circle is "<<s->area()<<endl;
    cout<<"Perimetre of Circle is "<<s->perimetre()<<endl;
}