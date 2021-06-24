#include<iostream>

using namespace std;

class Passenger{
	private:
		string name;
		string gender;
		int age;
		string mobile_Number;
	public:
	Passenger()
	{
		
	}
	Passenger(string name,string gender,int age,string mobile_Number)
	{
		this->name=name;
		this->gender=gender;
		this->age=age;
		this->mobile_Number=mobile_Number;
	}
	string getName()
	{
		return this->name;
	}
	string getGender()
	{
		return this->gender;
	}
	int getAge()
	{
		return this->age;
	}
	string getMobileNumber()
	{
		return this->mobile_Number;
	}
	void passengerDetails()
	{
		cout<<"Name : "<<this->name<<"\nGender : "<<this->gender<<"\nAge : "<<this->age<<endl;
		cout<<"Mobile Number : "<<this->mobile_Number<<endl;
	}
};

class Ticket{
	private :
		int ticket_Number;
		string source;
		string destination;
		string date;
		int no_of_passenger;//Passsenger* ptr[];
	public:
		Ticket(){
			
		}
		Ticket(int ticket_Number,string source,string destination,string date,int no_of_passenger)
		{
			this->ticket_Number=ticket_Number;
			this->source=source;
			this->destination=destination;
			this->date=date;
			this->no_of_passenger=no_of_passenger;
		}
	int getTicketNumber()
	{
		return this->ticket_Number;	
	}
	string getSource()
	{
		return this->source;	
	}
	string getDestination()
	{
		return this->destination;	
	}
	string getDate()
	{
		return this->date;	
	}	
	int getNumberOfPassengers()
	{
		return this->no_of_passenger;
	}
	void ticketDetails()
	{
		cout<<"Ticket Number : "<<this->ticket_Number<<"\nSource : "<<this->source<<endl;
		cout<<"Destination : "<<this->destination<<"\nNo of Passengers : "<<this->no_of_passenger<<endl;
		cout<<"Date : "<<this->date<<endl;
	}
};

class Train{
	private:
	string name;
	int number;
	string type;
	int no_of_Berths;
	int ticket_Cost;
	public:
	Train()
	{
		
	}
	Train(string name,int number,string type,int no_of_Berths,int ticket_Cost)
	{
		this->name=name;
		this->number=number;
		this->type=type;
		this->no_of_Berths=no_of_Berths;
		this->ticket_Cost=ticket_Cost;	
	}
	string getName()
	{
		return this->name;
	}
	int getNumber()
	{
		return this->number;
	}
	string getType()
	{
		return this->type;
	}
	int getNoOfBerths()
	{
		return this->no_of_Berths;
	}
	int getTicketCost()
	{
		return this->ticket_Cost;
	}
	void trainDetails()
	{
		cout<<"Train Name : "<<this->name<<"\nTrain Number : "<<this->number<<endl;
		cout<<"Train Type : "<<this->type<<"\nNo.of.Berths : "<<this->no_of_Berths<<endl;
		cout<<"Ticket Cost : "<<this->ticket_Cost<<endl;
	}
};


class IndianRailways
{
	private:
	Train t;
	Passenger p;
	Ticket ticket;
	public:
	IndianRailways()
	{
		
	}
	IndianRailways(const Train& T,const Passenger& P,const Ticket &ticket)
	{
		this->t=T;
		this->p=P;
		this->ticket=ticket;		
	}
	void display()
	{
		t.trainDetails();
		p.passengerDetails();
		ticket.ticketDetails();	
	}	
};


int main()
{
	Passenger P("Shyam","Male",28,"9883838322");	
	Ticket ticket(12366,"Hyderabad","Visakhapatnam","12/10/2020",1);
	Train T("Maitree Express",190121,"Express",5,250);
	IndianRailways I(T,P,ticket);
	I.display();
	return 0;
}






