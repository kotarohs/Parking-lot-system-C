#include<iostream>
using namespace std;

class A
{
	int bike=0, car=0, heavy_vechile=0,limit,i,h,total=0;
	public:
		void parkinglot()
		{
			cout<<"Choose type of vechile\n";
			for(limit=1;limit<=9999999;limit++)
			{
				cout<<"1. Two Wheeler\n2. Car\n3. Heavy Vechicle\n4. Gross Total\n5. Stop\n============================================================================\n";
				cin>>i;
				if(i==1)
				{
					cout<<"Enter number of parking hours\n";
					cin>>h;
					cout<<"Parking charges =\t"<<(h*10)<<"\n\n";
					bike=h*10;
					cout<<"============================================================================\n Please choose for new vechicle type\n";
				}
				if(i==2)
				{
					cout<<"Enter number of parking hours\n";
					cin>>h;
					cout<<"Parking charges =\t"<<(h*30)<<"\n\n";
					car=h*30;
					cout<<"============================================================================\n Please choose for new vechicle type\n";
				}
				if(i==3)
				{
					cout<<"Enter number of parking hours\n";
					cin>>h;
					cout<<"Parking charges =\t"<<(h*60)<<"\n\n";
					heavy_vechile=h*60;
				}
				if(i==4)
				{
						total=bike+car+heavy_vechile;
						cout<<"============================================================================\nGross income ="<<total<<"\n============================================================================\n";
				}
				if(i==5)
				{
					break;
				}
				if(i>5)
				{
					cout<<"PLEASE CHOOSE A VALID OPTION\n\n\n"<<"============================================================================\n";
				}
			}
		}
};

int main()
{
	int total;
	A a;
	a.parkinglot();
}
