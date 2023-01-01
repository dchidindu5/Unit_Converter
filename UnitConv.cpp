#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>
//#include <format>
//#include <chrono>


using namespace std;

float multiply(float a, float b){
	float r;
	r = a * b;
	return r;
	
}

void closing_remarks(){
	cout<<"Thank you for using Unit Converter";
}

char cont(){

	int main();
	char rep;
	
	cout<<"Do you want to continue? y/n "; 
	cin>>rep;
			cout<<"------------------------------------------------------------------------------"<<endl;
	
	
	if(rep == 'y'){
		system("cls");
				main();
			}
			else 
			closing_remarks();
			return rep;
}

int menu(){
	int option;
	cout<<"\t\t\t" <<"Unit Converter"<<endl;
    cout<<"              "<<endl;
    cout<<"1) Miles To Km"; // multiply 1.6090
    cout<<"\t\t 2) League To Km";
    cout<<"\t\t 3) Tons to Ounce"<<endl;
    cout<<"4) Feet to metres"; // multiply by 0.3048
    cout<<"\t 5) Inches to Centimetres"; // multiply by 2.5400
    cout<<"\t 6) Acres to Hectares"<<endl; // multiply by 0.4047
    cout<<"7) Pounds to kilograms"; // multiply 0.4536
    cout<<"\t 8) Tons to kilograms"; // multiply 1016.0000
    cout<<"\t\t 9) Grams to pounds"<< '\n' <<endl; // multiply 0.0022
    cout<<"\t\t\t E)xit"<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    
    cout<<"Select an option: "; 
	cin>>option;
	return option;
}

int main()
{
	
    int option;
    float number,result;
    char repeat;
   // bool done = false;
    
top:
	system("color 0C");
    
	
	/*if (option > 9 || option < 1 ){
		cout<<"You Entered the Wrong Selection!!" << '\n' <<endl;	
goto top;
		
	}*/
	
	//std::chrono::time_point<std::chrono::utc_clock> epoch;
	
		ofstream db("data.txt", ios_base::out | ios_base::app);
            
        if(db.is_open()){
            
            
	
    switch(menu())
    {
    	
            
        case 1:
        	
            cout<<"Enter value in miles: "; 
			cin>>number;
			
            
            
            cout<< std::setw(10)<< number <<" miles in km is "<<setprecision(10) << multiply(number, 1.6090) <<'\n' << endl;
            db << number <<" miles in km is " << multiply(number, 1.6090)  /*<<db<< std::format ("{0:%A%b}T {0:%0H}.", epoch)*/ <<'\n';
            
            cont();
            
            
        break;
        
        case 2:
            cout<<"Enter value in leagues: "; 
			cin>>number;

            cout<<number<<" leagues in km is " << multiply (number, 4.83) << '\n' << endl;
            db << number <<" leagues in km is  " << multiply(number, 4.83) << '\n';
            
           cont();
			
        break;
        
    
        case 3:
            cout<<"Enter value in tons: "; cin>>number;
            
            cout<<number<<" tons in ounces is: "<<setprecision(20) <<multiply (number, 35273.96) << '\n' << endl;
            db << number <<" tons in ounces is  " << multiply(number, 35273.96) << '\n';
            cont();
        break;
        
        case 4:
        	cout<< "Enter value in feet: "; 
			cin>> number;
			
			
        	cout<<number <<" feet in metres is: " << multiply (number, 0.3048) << '\n' << endl;
        	db << number <<" feet in metres is: " << multiply(number, 0.3048) << '\n';
        	cont();
        break;
        
        case 5:
        	cout<< "Enter value in inches: ";
        		cin>> number;
        		
        	cout<< number <<" The value of inches in centimeteres is: " << multiply (number, 2.5400 ) << '\n' << endl;
        	db << number <<" inches in centimeteres is: " << multiply(number, 2.5400) << '\n';
        	cont();
			
        break;
        
        case 6:
        	cout<< "Enter value in acres: ";
        		cin>> number;
        		
        	cout<< number <<"The value of Acres to Hectares is: " << multiply (number, 0.4047) << '\n' << endl;
        	db << number <<" Acres to Hectares is: " << multiply(number, 0.4047) << '\n';
        	cont();
        break;
        
        case 7:
        	cout<< "Enter value in pounds: ";
        		cin>> number;
        		
        	cout<< number <<" The value of pounds in kilograms is: " << multiply (number, 0.4536)<< '\n' << endl;
        	db << number <<" Pounds in Kilograms is: " << multiply(number, 0.4536) << '\n';
        	cont();
        	
        	break;
        
    case 8:
        	cout<< "Enter value in tons: ";
        		cin>> number;
        		
        	cout<< number <<" The value of Ton in kilograms is: " << setprecision(10) << multiply (number, 1016.0000)<<"kg" << '\n' << endl;
        	db << number <<" Pounds in Kilograms is " << multiply(number, 1016.0000) << '\n';
        	cont();
        break;
        
    case 9:
        	cout<< "Enter value in grams: ";
        		cin>> number;
        		
        	cout<< number <<" The value of grams in pounds is: " << multiply (number, 0.0022) << '\n' << endl;
        	db << number <<" Grams in pounds is: " << multiply (number, 0.0022) << '\n' << endl;
        	cont();
        break;
    	
    
        case 'E':
        case 'e':
        	cout<<"Bye!";
            
            break;
            
        db.close();
    }
    
}
    else
    	cout<< "Unable to open file";
        
    
    return 0;
}

