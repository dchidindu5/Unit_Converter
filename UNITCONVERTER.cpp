#include <iostream>
#include <iomanip>
#include <windows.h>


using namespace std;
int main()
{
	
    int option;
    float number,result;
    char repeat;
    
top:
	system("color 0A");
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
    cout<<"\t\t\t 10) Exit"<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    
    cout<<"Select an option: "; 
	cin>>option;
	
	
	
	if (option > 10 || option < 1 ){
		cout<<"You Entered the Wrong Selection!!" << '\n' <<endl;	
goto top;
	}
	
    switch(option)
    {
        case 1:
        	system("color DE");
            cout<<"Enter value in miles: "; cin>>number;
            result = number * 1.6090;
            cout<< std::setw(10)<<number<<" miles in km is "<<setprecision(20) <<result <<"km" <<'\n' << endl;
            
            cout<<"Do you want to continue? y/n: " ; cin>>repeat;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}
			else 
			cout<<"Thank you using Unit Converter";
            
        break;
        
        case 2:
            cout<<"Enter value in leagues: "; cin>>number;
            result = number * 4.83;
            cout<<number<<" leagues in km is "<<result<< '\n' << endl;
            
            cout<<"Do you want to continue? y/n: " ; cin>>repeat;
			cout<<"-----------------------------------------------------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}
			else 
			cout<<"Thank you using Unit Converter";
        break;
        
    
        case 3:
            cout<<"Enter value in tons: "; cin>>number;
            result = number * 35273.96;
            cout<<number<<" tons in ounces is "<<result << '\n' << endl;
            
            cout<<"Do you want to continue? y/n: " ; cin>>repeat;
			cout<<"--------------------------------------------------------------------------------"<<endl;
			if(repeat == 'y'){
				main();
			}
			else 
			cout<<"Thank you using Unit Converter";
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
			cout<<"Thank you using Unit Converter";
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
			cout<<"Thank you using Unit Converter";
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
			cout<<"Thank you using Unit Converter";
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
			cout<<"Thank you using Unit Converter";
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
			cout<<"Thank you using Unit Converter";
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
			cout<<"Thank you for using Unit Converter";
        break;
    
        case 10:
            cout<<"Bye!";
            break;
    }
    return 0;
}

