#include <iostream>
using namespace std;

int main()
{
	int money,note,hund,fifty,twen,ten;
	cout<<"Enter The Amount "<<endl;
	cin>>money;

	cout<<"Enter Value of Notes "<<endl;
	cin>>note;

	switch (note)
	{
		case 100: hund=(money/100);		
				 cout<<"Number OF  Rs.100 Notes In Given Amount is "<<hund;
				cout<<endl;
				money = money%100;
				//break;

		case 50: fifty=(money/50);
				cout<<"Number OF  Rs.50 Notes In Given Amount is "<<fifty;
				cout<<endl;
				money = money%50;
				//break;

		case 20: twen=(money/20);
				cout<<"Number OF  Rs.20 Notes In Given Amount is "<<twen;
				cout<<endl;
				money= money%20;
				//break;

		case 1: ten=(money/1);
				cout<<"Number OF  Rs.1 Notes In Given Amount is "<<ten;
				cout<<endl;
				money = money%10;
				//break;
	}

	return 0;
} 