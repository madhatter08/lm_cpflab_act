#include <iostream>

using namespace std;

// function process
void promptAndWait() { 
    cin.ignore(100, '\n');
    cout << "\n\tPress Enter or Return to continue...";
    cin.get();
    return;
}
double kgtolbs(int in){
	double lbs= 2.2046226218;
	cout << "\t--> " << in << " kg = " << (in * lbs  ) << " lb" << " <--\n";
    return (in * lbs);
}
double lbstokg(int in){
	double lbs= 2.2046226218;
	cout << "\t--> " << in << " lb = " << (in / lbs  ) << " kg" << " <--\n";
    return (in / lbs);
}
double gramtooz(int in){
	double oz= 28.35;
    cout << "\t--> " << in << " g = " << (in / oz  ) << " oz" << " <--\n";
    return (in / oz);
}
double oztogram(int in){
	double g= 28.35;
    cout << "\t--> " << in << " oz = " << (in * g  ) << " g" << " <--\n";
    return (in * g);
}
double inchtocm(int in){
	double cm= 2.54;
    cout << "\t--> " << in << " in = " << (in * cm  ) << " cm" << " <--\n";
    return (in * cm);
}
double cmtoinch(int in){
	double x= 2.54;
    cout << "\t--> " << in << " cm = " << (in / x  ) << " in" << " <--\n";
    return (in / x);
}
double gramtolbs(int in){
	double x= 453.592;
    cout << "\t--> " << in << " g = " << (in / x  ) << " lb" << " <--\n";
    return (in / x);
}
double lbstogram(int in){
	double x= 453.592;
    cout << "\t--> " << in << " lb = " << (in * x  ) << " g" << " <--\n";
    return (in * x);
}
double ctof(int in){
	double f;
    cout << "\t--> " << in << " �C = " << (f=(in*9.0)/5.0+32 ) << " �F" << " <--\n";
    return f;
}
double ftoc(int in){
	double c;
    cout << "\t--> " << in << " �F = " << (c=(in-32.0)*5.0/9.0 ) << " �C" << " <--\n";
    return c;
}
double ctok(int in){
	double x= 273.15;
    cout << "\t--> " << in << " �C = " << (in + x  ) << " K" << " <--\n";
    return (in + x);
}
double ktoc(int in){
	double x= 273.15;
    cout << "\t--> " << in << " K = " << (in - x  ) << " �C" << " <--\n";
    return (in - x);
}
double psitopa(int in){
	double x= 6894.75729;
    cout << "\t--> " << in << " psi = " << (in * x  ) << " pa" << " <--\n";
    return (in * x);
}
double patopsi(int in){
	double x= 6894.75729;
    cout << "\t--> " << in << " pa = " << (in / x  ) << " psi" << " <--\n";
    return (in / x);
}
double miletokm(int in){
	double x= 0.6214;
    cout << "\t--> " << in << " mi = " << (in / x  ) << " km" << " <--\n";
    return (in / x);
}
double kmtomile(int in){
	double x= 0.6214;
    cout << "\t--> " << in << " km = " << (in * x  ) << " mi" << " <--\n";
    return (in * x);
}
double ttolbs(int in){
	double x= 2000;
    cout << "\t--> " << in << " t = " << (in * x  ) << " lb" << " <--\n";
    return (in * x);
}
double lbstot(int in){
	double x= 2000;
    cout << "\t--> " << in << " lb = " << (in / x  ) << " t" << " <--\n";
    return (in / x);
}
double kgtooz(int in){
	double x= 35.274;
    cout << "\t--> " << in << " kg = " << (in * x  ) << " oz" << " <--\n";
    return (in * x);
}
double oztokg(int in){
	double x= 35.274;
    cout << "\t--> " << in << " oz = " << (in / x  ) << " kg" << " <--\n";
    return (in / x);
}




// main method
int main(){
	
	int in, ch, ans=0;
	struct group_facet: public std::numpunct<char>
	{
		protected:
			string do_grouping() const {return "\003";}
    };
    cout.imbue(locale(cout.getloc(), new group_facet));
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
	
	do{
		 system("cls"); 
            cout << endl;
            cout << "\t\t<<---Weight Conversion App--->>\n\n";
            cout << "\t[1] Kilogram to Pound \t\t" ;
            cout << "[2] Pound to Kilograms" << endl; 
            cout << "\t[3] Gram to Ounce \t\t" ; 
            cout << "[4] Ounce to Grams" << endl; 
            cout << "\t[5] Inch to Centimeter \t\t" ;
            cout << "[6] Centimeter to Inch" << endl;
            cout << "\t[7] Gram to Pound \t\t" ;
            cout << "[8] Pound to Gram" << endl;
            cout << "\t[9] Celcius to Fahrenheit \t" ;
            cout << "[10] Fahrenheit to Celcius" << endl;
            cout << "\t[11] Celcius to Kelvin \t\t" ;
            cout << "[12] Kelvin to Celcius" << endl;
            cout << "\t[13] psi to Pascal \t\t" ;
            cout << "[14] Pascal to psi" << endl;
            cout << "\t[15] mile to Kilometer \t\t" ;
            cout << "[16] Kilometer to mile" << endl;
            cout << "\t[17] Ton to Pound \t\t" ;
            cout << "[18] Pound to Ton" << endl;
            cout << "\t[19] Kilogram to Ounce \t\t" ;
            cout << "[20] Ounce to Kilogram" << endl;
            cout << "\n\t[0] Exit Conversion App" << endl;
            cout << "\n\t Select Conversion : ";
            cin >> ch;
            
            switch(ch){
            	case 1: cout<<"\n\t\t<< Convert kilogram to pound >>"<<endl;
            			cout<<"\n\t Enter kilogram : ";
            			cin>>in;
            			cout<<endl;
            			kgtolbs(in);
            			promptAndWait();	
            	break;
            	case 2: cout<<"\n\t\t<< Convert pound to kilograms >>"<<endl;
            			cout<<"\n\t Enter pound : ";
            			cin>>in;
            			cout<<endl;
            			lbstokg(in);
            			promptAndWait();
            	break;
            	case 3: cout<<"\n\t\t<< Convert gram to ounce >>"<<endl;
            			cout<<"\n\t Enter gram : ";
            			cin>>in;
            			cout<<endl;
            			gramtooz(in);
            			promptAndWait();
            	break;
            	case 4: cout<<"\n\t\t<< Convert ounce to grams >>"<<endl;
            			cout<<"\n\t Enter ounce : ";
            			cin>>in;
            			oztogram(in);
            			promptAndWait();
            	break;
            	case 5: cout<<"\n\t\t<< Convert inch to centimeter >>"<<endl;
            			cout<<"\n\t Enter inch : ";
            			cin>>in;
            			inchtocm(in);
            			promptAndWait();
            	break;
            	case 6: cout<<"\n\t\t<< Convert Centimeter to Inch >>"<<endl;
            			cout<<"\n\t Enter centimeter : ";
            			cin>>in;
            			cmtoinch(in);
            			promptAndWait();
            	break;
            	case 7: cout<<"\n\t\t<< Convert Gram to Pound >>"<<endl;
            			cout<<"\n\t Enter gram : ";
            			cin>>in;
            			gramtolbs(in);
            			promptAndWait();
            	break;
            	case 8: cout<<"\n\t\t<< Convert Pound to Gram >>"<<endl;
            			cout<<"\n\t Enter pound : ";
            			cin>>in;
            			lbstogram(in);
            			promptAndWait();
            	break;
            	case 9: cout<<"\n\t\t<< Convert Celcius to Fahrenheit >>"<<endl;
            			cout<<"\n\t Enter celcius : ";
            			cin>>in;
            			ctof(in);
            			promptAndWait();
            	break;
            	case 10: cout<<"\n\t\t<< Convert Fahrenheit to Celcius >>"<<endl;
            			cout<<"\n\t Enter fahrenheit : ";
            			cin>>in;
            			ftoc(in);
            			promptAndWait();
            	break;
            	case 11: cout<<"\n\t\t<< Convert Celcius to Kelvin >>"<<endl;
            			cout<<"\n\t Enter celcius : ";
            			cin>>in;
            			ctok(in);
            			promptAndWait();
            	break;
            	case 12: cout<<"\n\t\t<< Convert Kelvin to Celcius >>"<<endl;
            			cout<<"\n\t Enter kelvin : ";
            			cin>>in;
            			ktoc(in);
            			promptAndWait();
            	break;
            	case 13: cout<<"\n\t\t<< Convert psi to Pascal >>"<<endl;
            			cout<<"\n\t Enter psi : ";
            			cin>>in;
            			psitopa(in);
            			promptAndWait();	
            	break;
            	case 14: cout<<"\n\t\t<< Convert Pascal to psi >>"<<endl;
            			cout<<"\n\t Enter pascal : ";
            			cin>>in;
            		    patopsi(in);
            			promptAndWait();
            	break;
            	case 15: cout<<"\n\t\t<< Convert mile to Kilometer >>"<<endl;
            			cout<<"\n\t Enter mile : ";
            			cin>>in;
            			miletokm(in);
            			promptAndWait();
            	break;
            	case 16: cout<<"\n\t\t<< Convert Kilometer to mile >>"<<endl;
            			cout<<"\n\t Enter kilometer : ";
            			cin>>in;
            			kmtomile(in);
            			promptAndWait();
            	break;
            	case 17: cout<<"\n\t\t<< Convert Ton to Pound >>"<<endl;
            			cout<<"\n\t Enter ton : ";
            			cin>>in;
            			ttolbs(in);
            			promptAndWait();
            	break;
            	case 18: cout<<"\n\t\t<< Convert Pound to Ton >>"<<endl;
            			cout<<"\n\t Enter pound : ";
            			cin>>in;
            			lbstot(in);
            			promptAndWait();
            	break;
            	case 19: cout<<"\n\t\t<< Convert Kilogram to Ounce >>"<<endl;
            			cout<<"\n\t Enter kilogram : ";
            			cin>>in;
            			kgtooz(in);
            			promptAndWait();
            	break;
            	case 20: cout<<"\n\t\t<< Convert Ounce to Kilogram >>"<<endl;
            			cout<<"\n\t Enter ounce : ";
            			cin>>in;
            			oztokg(in);
            			promptAndWait();
            	break;
            	case 0: return 0;
			}
            
	}while (ans==0);
	
	return 0;
}