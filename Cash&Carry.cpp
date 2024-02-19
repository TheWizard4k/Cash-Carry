#include<iostream>
using namespace std;
int Show_invoice();
int Make_invoice();

string name[100];	
int n;
int price[100];
int qt_price[100];
int quantity[100];
int total=0;
int option;

int  Make_invoice()
{
	cout<<"\n\n============================"<<endl;
cout <<"         MAKE INVOICE      "<<endl;
cout<<"============================"<<endl;
	
	cout <<"\n\nEnte the Number of Items :";
	cin>>n;

for(int i=0; i<n; i++)
{
cout <<"\n\nENTER NAME OF ITEM : ";
cin>>name[i];
cout <<"\n ENTER CORRECT PRICE  : ";
cin>>price[i];
cout <<"\n ENTER QUANTITY ";
cin>>quantity[i];
	qt_price[i] =(price[i]*quantity[i]);
	total+=qt_price[i];
	
}
   cout << Show_invoice();

}


int Show_invoice()
{
	
	system("cls");

cout<<"\n\n\n*******INVOICE*******\n";
cout<<"\nSr\tPRODUCT\t QTY\tUNIT PRICE\tPRICE";
cout<<"\n\n";
	


for(int i=0; i<n; i++)
{
cout<<i+1<<"\t" <<name[i]<<"\t "<<quantity[i]<<"  \t"<<price[i]<<"\t\t"<<qt_price[i];
cout<<endl;

	
}
cout<<"\n***************"<<endl;
cout <<"\n--------------------------TOTAL BILL = "<<total;
cout<<"\n\n*******INVOICE*******\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"                         Items Once Sold Could'nt be Returned"<<endl;
cout<<"                  "                  <<"Thank You For Shopping" <<endl;
	
	
}


int main()
{
	cout <<"\t                         _        _                       "<<endl;
	cout <<"\t ||\\      //||        //         //                       "<<endl;
	cout <<"\t || \\    // ||       //         //                         "<<endl;
	cout <<"\t ||  \\  //  ||      ||         ||                         "<<endl;
	cout <<"\t ||   \\//   ||       \\         \\                        "<<endl;
	cout <<"\t ||         ||         \\__      \\__ (WORK FOR BEST,SERVE FOR BEST)                        "<<endl;
	cout <<endl;
cout <<"\n \tEnter the Option "<<endl;
cout <<"\n \tPRESS 1 FOR MAKING INVOICE"<<endl;
cout <<" \n \tPRESS 2 FOR CHCKING PROTOTYPE OF INVOICE"<<endl;
cin>>option;
system("cls");
switch (option)
{
case 1:
     Make_invoice();
break;
case 2:
	 Show_invoice();
break;

}
}
