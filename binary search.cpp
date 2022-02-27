#include <iostream>
using namespace std;

int main()
{
    int A[9]={1,4,7,9,11,12,14,17,19};
    int l=0,h=8,mid,key;

    cout<<"Enter Key "<<endl;
    cin>>key;

    while(l<=h)
    {
        mid=(l+h)/2;
        {
            if(key==A[mid])
          { cout<<"Found At "<<mid<<endl;
           return 0;}
           
            else if (key>A[mid])
            h=mid-1;

            else l=mid+1;
         }
        }
        cout<<"Not Found "<<endl;
        return 0;

    }
