#include<iostream>
using namespace std;
		// creating class
class sters
{
	char ster[7][7];
	public:
			// creating ctor
		sters(){
			for(int i=0; i<7; i++){
				for(int j=0; j<7; j++)
				{
					ster[i][j] = '*';
				}// inner loop end
			}// outer loop end
		}// end of out ctor sters
		
				// creating methods 
		void display_sters(void);
		void display_cross(void);
		void display_plus(void);
};
			// creating display_sters
void sters :: display_sters(){
	for(int i=0; i<7; i++)
	{
		for(int j=0; j<7; j++)
		{
			cout<<ster[i][j];
		}// end of inner loop
		cout<<endl;
	}// end of outer loop	
} // end of method

		// display cross
void sters :: display_cross(){
	for(int i=0; i<7; i++)
	{
		for(int j=0; j<7; j++)
		{
			if((i==j) || ((i+j)==6)){
				cout<<ster[i][j];
			}
			else{
				cout<<" ";
			}
		}// end of inner loop
		cout<<endl;
	}// end of outer loop
}// end of method

void sters :: display_plus(){
	for(int i=0; i<7; i++)
	{
		for(int j=0; j<7; j++)
		{
			if((i==3) || (j==3)){
				cout<<ster[i][j];
			}
			else{
				cout<<" ";
			}
		}// end of inner loop
		cout<<endl;
	}// end of outer loop
}


int main()
{
	sters row;
				// creating a main menu
				string tab = "\t";
				int choise;
do{
	cout<<tab<<"Main Menu\n"
	<<tab<<"1. Display all Sters.\n"
	<<tab<<"2. Display Cross.\n"
	<<tab<<"3. Display Plus.\n"
	<<tab<<"4. Exit\n";
	cout<<tab<<"Enter your choise(1-4) : ";
	cin>>choise;
	switch(choise){
		case 1: row.display_sters();
					  break;
		case 2: row.display_cross();
						break;
		case 3: row.display_plus();
						break;
		case 4: return 0;
		default: cout<<"Please enter a valid choise. (1-4).";
	}
}while(choise != 4);
cout<<"Thank you for using our suvice"<<endl;
	return 0;
}

