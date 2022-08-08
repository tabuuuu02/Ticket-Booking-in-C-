#include<iostream>
using namespace std;

int main()
{
	cout<<"-----------NIAZI EXPRESS TRAVEL AND TOURS----------"<<endl;
	cout<<" ---------- Ticket Reservation System ----------"<<endl<<endl;
	cout<<"Lahore to Multan"<<endl<<endl;
	cout<<"BusA : 2:00 PM Departure"<<endl;
	cout<<"BusB : 4:00 PM Departure"<<endl;
	cout<<endl;
	
	cout<<"-----Prices-----"<<endl;
	cout<<"Baby  (age 1-3)  : Free "<<endl;
	cout<<"Child (age 3-7)  : 300 RS"<<endl;
	cout<<"Adult (age 7+)   : 600 RS"<<endl<<endl<<endl;

	cout<<"To Choose BusA enter 1"<<endl;
	cout<<"To Choose BusB enter 2"<<endl<<endl;

	int bus;
	cout<<"Enter Bus Number : ";
	cin>>bus;
	cout<<endl;
	
	if(bus>=1 && bus<=2)
	{
		
		
		
		if(bus==1)
		{
			char name[100];
			char PhNo[15];
			int age=0,SeatNo=0;
			int count=1;

			cout<<"Total Seats : 12"<<endl;
			
			cout<<"Available seats : 4"<<endl;
			cout<<"Available Seat Numbers (9,10,11,12)"<<endl<<endl;
			
			cout<<"BusA Departure time : 2:00 PM"<<endl;
			cout<<"Enter Your Name : ";
			cin>>name;
			cout<<"Enter Your Phone Number : ";
			cin>>PhNo;
			cout<<"Enter Your Age : ";
			cin>>age;
			cout<<"Select Your Seat Number : ";
			cin>>SeatNo;
			cout<<endl<<endl<<endl<<endl;
			if(SeatNo==9 || SeatNo==10 || SeatNo==11 || SeatNo==12)
			{
				if(age>=1 && age<=3)
				{
					cout<<"------Reciept------"<<endl;
					cout<<"Name  : "<<name<<endl;
					cout<<"Ph No : "<<PhNo<<endl;
					cout<<"Age   : "<<age<<endl;
					cout<<"Seat No : "<<SeatNo<<endl;
					
					cout<<"Departure Time : 2:00 PM"<<endl;
					cout<<"Ticket Price : Free "<<endl;
					cout<<"***THANK YOU***"<<endl;
				}
				else if(age>=4 && age<=7)
				{
					cout<<"------Reciept------"<<endl;
					cout<<"Name  : "<<name<<endl;
					cout<<"Ph No : "<<PhNo<<endl;
					cout<<"Age   : "<<age<<endl;
					cout<<"Seat No : "<<SeatNo<<endl;
					
					cout<<"Departure Time : 2:00 PM"<<endl;
					cout<<"Ticket Price : 300 "<<endl;
					cout<<"***THANK YOU***"<<endl;
				}
				else
				{
					cout<<"------Reciept------"<<endl;
					cout<<"Name  : "<<name<<endl;
					cout<<"Ph No : "<<PhNo<<endl;
					cout<<"Age   : "<<age<<endl;
					cout<<"Seat No : "<<SeatNo<<endl;
					
					cout<<"Departure Time : 2:00 PM"<<endl;
					cout<<"Ticket Price : 600 "<<endl;
					cout<<"***THANK YOU***"<<endl;
				}
			}
			else
			{
				if(SeatNo==1)
				{
					cout<<"This Seat Is Booked By Mr Tayyab. Please choose seat number 9,10,11,12 THANKS !!!"<<endl;
				}
				else if(SeatNo==2)
				{
					cout<<"This Seat Is Booked By Mr Ahmed, Please choose seat number 9,10,11,12 THANKS !!!"<<endl;
				}
				else if(SeatNo==3)
				{
					cout<<"This Seat Is Booked By Mr Ali, Please choose seat number 9,10,11,12 THANKS !!!"<<endl;
				}
				else if(SeatNo==4)
				{
					cout<<"This Seat Is Booked By Miss Amna, Please choose seat number 9,10,11,12 THANKS !!!"<<endl;
				}
				else if(SeatNo==5)
				{
					cout<<"This Seat Is Booked By Miss Farzana, Please choose seat number 9,10,11,12 THANKS !!!"<<endl;
				}
				else if(SeatNo==6)
				{
					cout<<"This Seat Is Booked By Mr Shakeel, Please choose seat number 9,10,11,12 THANKS !!!"<<endl;
				}
				else if(SeatNo==7)
				{
					cout<<"This Seat Is Booked By Miss ALina, Please choose seat number 9,10,11,12 THANKS !!!"<<endl;
				}
				else
				{
					cout<<"This Seat Is Booked By Mr Usman, Please choose seat number 9,10,11,12 THANKS !!!"<<endl;
				}
			}
			
		}	
		
		
		
		if(bus==2)
		{
			char name[100];
			char PhNo[15];
			int age=0,SeatNo=0;
			int count=1;

			cout<<"Total Seats : 14"<<endl;
			
			cout<<"Available seats : 4"<<endl;
			cout<<"Available Seat Numbers (7,10,5,12)"<<endl<<endl;
			
			cout<<"BusA Departure time : 4:00 PM"<<endl;
			cout<<"Enter Your Name : ";
			cin>>name;
			cout<<"Enter Your Phone Number : ";
			cin>>PhNo;
			cout<<"Enter Your Age : ";
			cin>>age;
			cout<<"Select Your Seat Number : ";
			cin>>SeatNo;
			cout<<endl<<endl<<endl<<endl;
			if(SeatNo==7 || SeatNo==10 || SeatNo==5 || SeatNo==12)
			{
				if(age>=1 && age<=3)
				{
					cout<<"------Reciept------"<<endl;
					cout<<"Name  : "<<name<<endl;
					cout<<"Ph No : "<<PhNo<<endl;
					cout<<"Age   : "<<age<<endl;
					cout<<"Seat No : "<<SeatNo<<endl;
					
					cout<<"Departure Time : 4:00 PM"<<endl;
					cout<<"Ticket Price : Free "<<endl;
					cout<<"***THANK YOU***"<<endl;
				}
				else if(age>=4 && age<=7)
				{
					cout<<"------Reciept------"<<endl;
					cout<<"Name  : "<<name<<endl;
					cout<<"Ph No : "<<PhNo<<endl;
					cout<<"Age   : "<<age<<endl;
					cout<<"Seat No : "<<SeatNo<<endl;
					
					cout<<"Departure Time : 4:00 PM"<<endl;
					cout<<"Ticket Price : 300 "<<endl;
					cout<<"***THANK YOU***"<<endl;
				}
				else
				{
					cout<<"------Reciept------"<<endl;
					cout<<"Name  : "<<name<<endl;
					cout<<"Ph No : "<<PhNo<<endl;
					cout<<"Age   : "<<age<<endl;
					cout<<"Seat No : "<<SeatNo<<endl;
					
					cout<<"Departure Time : 4:00 PM"<<endl;
					cout<<"Ticket Price : 600 "<<endl;
					cout<<"***THANK YOU***"<<endl;
				}
			}
			else
			{
				if(SeatNo==1)
				{
					cout<<"This Seat Is Booked By Mr Ali. Please choose seat number 7,10,5,12 THANKS !!!"<<endl;
				}
				else if(SeatNo==2)
				{
					cout<<"This Seat Is Booked By Mr Ramzan, Please choose seat number 7,10,5,12 THANKS !!!"<<endl;
				}
				else if(SeatNo==3)
				{
					cout<<"This Seat Is Booked By Mr Faiz, Please choose seat number 7,10,5,12 THANKS !!!"<<endl;
				}
				else if(SeatNo==4)
				{
					cout<<"This Seat Is Booked By Miss Amna, Please choose seat number 7,10,5,12 THANKS !!!"<<endl;
				}
				else if(SeatNo==5)
				{
					cout<<"This Seat Is Booked By Miss Abdullah, Please choose seat number 7,10,5,12 THANKS !!!"<<endl;
				}
				else if(SeatNo==6)
				{
					cout<<"This Seat Is Booked By Mr Shakeel, Please choose seat number 7,10,5,12 THANKS !!!"<<endl;
				}
				else if(SeatNo==9)
				{
					cout<<"This Seat Is Booked By Miss ALina, Please choose seat number 7,10,5,12 THANKS !!!"<<endl;
				}
				else
				{
					cout<<"This Seat Is Booked By Mr Usman, Please choose seat number 7,10,5,12 THANKS !!!"<<endl;
				}
			}
			
		}	
	
	}
	
	
	
	else
	{
		cout<<"Please Enter Correct Bus Number"<<endl;
	}

	return 0;
}
