#include <iostream>
#include <iomanip>
#include <windows.h>


using namespace std;

float multiply(float a, float b){
	float r;
	r = a * b;
	return r;
	
}

void closing_remarks(){
	cout<<"Thank you for using Unit Converter";
}

int main()
{
	
    int option;
    float number,result;
    char repeat;
    bool done = false;
    
top:
	system("color 0C");
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
	
	
	
	if (option > 9 || option < 1 ){
		cout<<"You Entered the Wrong Selection!!" << '\n' <<endl;	
goto top;
		
	}
	
    switch(option)
    {
        case 1:
        	system("color DE");
            cout<<"Enter value in miles: "; 
			cin>>number;
            
            cout<< std::setw(10)<< number <<" miles in km is "<<setprecision(20) << multiply(number, 1.6090) <<'\n' << endl;
            
            cout<<"Do you want to continue? y/n: " ; cin>>repeat;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}
			else 
			closing_remarks();
            
        break;
        
        case 2:
            cout<<"Enter value in leagues: "; 
			cin>>number;

            cout<<number<<" leagues in km is "<< multiply (number, 4.83) << '\n' << endl;
            
            cout<<"Do you want to continue? y/n: " ; cin>>repeat;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}
			else 
			closing_remarks();
			
        break;
        
    
        case 3:
            cout<<"Enter value in tons: "; cin>>number;
            result = number * 35273.96;
            cout<<number<<" tons in ounces is "<<setprecision(20) <<result << '\n' << endl;
            
            cout<<"Do you want to continue? y/n: " ; cin>>repeat;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}
			else 
			closing_remarks();
        break;
        
        case 4:
        	cout<< "Enter value in feet: "; 
			cin>> number;
			
			result = number * 0.3048;
			
        	cout<<number <<" feet in metres is: " << result << '\n' << endl;
        	
        	cout<<"Do you want to continue? y/n: " ; cin>>repeat;
			cout<<"---------------------------------------------------------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}
			else 
			closing_remarks();
        break;
        
        case 5:
        	cout<< "Enter value in inches: ";
        		cin>> number;
        		result = number * 2.5400;
        	cout<< number <<" The value of inches in centimeteres is " <<result << '\n' << endl;
        	
        	cout<<"Do you want to continue? y/n: " ; cin>>repeat;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}
			else 
			closing_remarks();
			
        break;
        
        case 6:
        	cout<< "Enter value in acres: ";
        		cin>> number;
        		result = number * 0.4047;
        	cout<< number <<"The value of Acres to Hectares is: " <<result << '\n' << endl;
        	
        	cout<<"Do you want to continue? y/n "; cin>>repeat;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}
			else 
			closing_remarks();
        break;
        
        case 7:
        	cout<< "Enter value in pounds: ";
        		cin>> number;
        		result = number * 0.4536;
        	cout<< number <<" The value of pounds in kilograms is: " <<result<< '\n' << endl;
        	
        	cout<<"Do you want to continue? y/n: "; 
			cin>>repeat;
			cout<<"-------------------------------------------------------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}
			else 
			closing_remarks();
        break;
        
    case 8:
        	cout<< "Enter value in tons: ";
        		cin>> number;
        		result = number * 1016.0000;
        	cout<< number <<" The value of Ton in kilograms is: " << setprecision(20) <<result<<"kg" << '\n' << endl;
        	
        	cout<<"Do you want to continue? y/n: "; cin>>repeat;
			cout<<"-------------------------------------------------------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}
			else 
			closing_remarks();
        break;
        
    case 9:
        	cout<< "Enter value in grams: ";
        		cin>> number;
        		result = number * 0.0022;
        	cout<< number <<" The value of grams in pounds is: " <<result << '\n' << endl;
        	
        	cout<<"Do you want to continue? y/n "; cin>>repeat;
			cout<<"------------------------------------------------------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}
			else 
			closing_remarks();
        break;
    
        case 'E':
        case 'e':
        	done = true;
            cout<<"Bye!";
            
            break;
    }
    return 0;
}

