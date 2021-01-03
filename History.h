#include<iostream>
#include<fstream>
#include<ctype.h>
using namespace std;
using std::cout;

int option;
class History{
private:
string name;
string year;
string OEM;
string model;


//string history[]=
void history(){
	ofstream myFile;
    myFile.open("myHistory.txt",ios::out|ios::app);
    cout<<"Please enter your name: ";
    cin>>name;
    myFile<<name;
    cout<<"Hello "<<name<<". Now let's start building your phone history\n";
}
 void add(){
     ofstream myFile;
     myFile.open("myHistory.txt",ios::out|ios::app);
     cout<<"Who made your device:\n";
     cin>>OEM;
     myFile<<OEM;
     cout<<"What is the model of your device: \n";
     cin>>model;
     myFile<<model;
     cout<<"What year did you own this device?: \n";
     cin>>year;
     myFile<<year;
     cout<<"Device has been saved.\n";
    
    }
 
public:
void addDevice(){add();}
void greeting(){history();}

void collect(){
	greeting();
	do{
	cout<<"1)Add 2)Delete 3)Bulk\n4)Bulk Add 5)Finish";
	cin>>option;
    switch (option){
        case 1:
        	addDevice();
        	cout<<"What would you like to do?/n";
        break;
        case 2:
        	//delete();
        	break;
        case 3:
        	//bulkAdd();
        	break;
        case 4:
        	//bulkDelete();
        	break;
        case 5:
        	//finish();
        	break;
        default:
        	cout<<"Choose valid option.";
        	break;
    }
}while(option!=5);
}


};
