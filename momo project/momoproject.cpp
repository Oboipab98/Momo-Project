#include <iostream>

/* money project */
using namespace std;

int main(int argc, char** argv) {
	
	int opt,pin, n_pin, cn_pin;
	string momo_num, confirm, ref;
	double amount;
	
	cout<<"================================="<<endl;
	cout<<"       Authentication"<<endl;
	cout<<"================================="<<endl;
	
	string name;
	cout<<"Enter your name"<<endl;
	cin>>name;
	
	int attempt=0;
		do{
			cout<<"Enter your pin"<<endl;
			cin>>pin;
			system("cls");
			if(pin==0000){
				cout<<"          Welcome "<<name<<endl;
			}
			else{
				attempt++;
				cout<<"Invalid pin. Try again."<<endl;
				
			}
		}
		while(attempt<=3 && pin!=0000);
		
		if(attempt>=3){
			cout<<"Check your pin and try again."<<endl;
			return 0;
			
		}
	// main menu
	cout<<"================================="<<endl;
	cout<<"Welcome to Oboi Pab mobile money"<<endl;
	cout<<"================================="<<endl;
	cout<<""<<endl;
	cout<<"1.Send Money"<<endl;
	cout<<""<<endl;
	cout<<"2.Check Balance"<<endl;
	cout<<""<<endl;
	cout<<"3.Change & Reset Pin"<<endl;
	cout<<""<<endl;
	cin>>opt;
	system("cls");
	
	// condition
	
	//send money
	if(opt==1){
		cout<<"=========================="<<endl;
		cout<<"Send Money"<<endl;
		cout<<"=========================="<<endl;
		
		do{
			cout<<"Enter momo number"<<endl;
			cin>>momo_num;
			cout<<""<<endl;
			
			cout<<"Confirm momo number"<<endl;
			cin>>confirm;
			cout<<""<<endl;
			
			if(momo_num!=confirm){
				cout<<"Wrong confirmation momo number"<<endl;
			}
		}
		while(momo_num!=confirm);
		system("cls");
		
		cout<<"Enter your referrence."<<endl;
		cin>>ref;
		system("cls");
		
		do{
		 cout<<"Enter amount"<<endl;
		 cin>>amount;
		 if((amount<1) || (amount>1000)){
		 	cout<<"invalid amount"<<endl;
		 }
		}
		while((amount<1) || (amount>1000));
		system("cls");
		
		int attempt=0;
		do{
			cout<<"Enter your pin"<<endl;
			cin>>pin;
			if(pin==0000){
				cout<<"Correct pin "<<endl;
			}
			else{
				attempt++;
				cout<<"Invalid pin. Try again."<<endl;
				
			}
		}
		while(attempt<=3 && pin!=0000);
		
		if(attempt>=3){
			cout<<"Check your pin and try again."<<endl;
		}
		system("cls");
		
		double c_balance;
		c_balance=1000-amount;
		cout<<"You have send GHC"<<amount<<" to "<<confirm<<"."<<endl;
		cout<<"Your referrence is "<<ref <<" your balance is "<<c_balance<<endl;
		
	}
	//check balance
	else if(opt==2){
		cout<<"=========================="<<endl;
		cout<<"Check Your Balance "<<endl;
		cout<<"=========================="<<endl;
	
    	int attempt=0;
		do{
			cout<<"Enter your pin"<<endl;
			cin>>pin;
			if(pin==0000){
				cout<<"Correct pin "<<endl;
			}
			else{
				attempt++;
				cout<<"Invalid pin. Try again."<<endl;
				
			}
		}
		while(attempt<=3 && pin!=0000);
		
		if(attempt>=3){
			cout<<"Check your pin and try again."<<endl;
			
		}
		system("cls");
		
		cout<<"Your current balance is GHC1000,"<<endl;
		cout<<"Your available balance is GHC1000.Thank you!"<<endl;
		}
	//change & reset pin
	else if(opt==3){
		cout<<"=========================="<<endl;
		cout<<"Change And Reset Pin "<<endl;
		cout<<"=========================="<<endl;
		
		cout<<""<<endl;
		
		int attempt=0;
		do{
			cout<<"confirm your pin"<<endl;
			cin>>pin;
			if(pin==0000){
				cout<<"correct pin "<<endl;
			}
			else{
				attempt++;
				cout<<"Invalid pin. Try again."<<endl;
				
			}
		}
		while(attempt<=3 && pin!=0000);
		
		if(attempt>=3){
			cout<<"Check your pin and try again."<<endl;
			
		}
		system("cls");
		
		do{
			cout<<"enter your new pin."<<endl;
	    	cin>>n_pin;

	    	cout<<"confirm yuor nen pin."<<endl;
	    	cin>>cn_pin;
	    	
			if(n_pin==cn_pin){
				cout<<"pin successful change "<<endl;
			}
			else{
				attempt++;
				cout<<"Invalid pin. Try again."<<endl;
				
			}
		}
		while(attempt<=3 && pin!=cn_pin);
		
		if(attempt>=3){
			cout<<"Check your pin and try again."<<endl;
			
		}
		system("cls");
	}
	else{
		cout<<"wrong entry"<<endl;
	}
	
	
	 
	return 0;
}
