#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<string.h>
#include<dos.h>
#include<time.h>
#include<ctime>
#include "horoscope.h"
#include "love.h"
#include "today.h"

//#include "selectiondistinction.cpp"


using namespace std;


class first
{
	
	public:
		char error[200]="No Errors";
		
		struct userdata
		{
			char name[200];
			char pob[100];
			char sex;
		} d1;
		
		
		struct birthdate
		{
			int year;
			int month;
			int day;
			int age;
		}b1 ;
		
		struct times
		{
		int year;
		int month;
		int day;	
		}t1;
		
		
		struct zods
		{
			char zodiac[20];
		}z1;
		
		//void anotherentry();
		void backcode();
		void details();
		void luckprocess();
		void loveprocess();
		void blankscreen();
		void age();
		void firstscreen();
		void userinput();
		void selectionscreen();
		void selection();
		void luckycharms();
		void career();
		void lovelife();
		void personalityprocess();
		void interests();
		void health();
		void horoscope();
		void horoscope(int,int);
		void checkings();
		void errorbox(char*);
		
	};
	
	
	
	
	
	
		
	   
	void first::blankscreen()                                                                                                   //blankscreen
	{
		cout<<"\n ";
		time_t clc=time(0);
		char *dateandtime=ctime(&clc);
		cout<<setw(120)<<dateandtime;
		tm *lt=localtime(&clc);
		t1.year=1900 + lt->tm_year;
		b1.age=t1.year-b1.year;
		cout<<"\n\n\n\n\n\n";
	    cout<<setw(70)<<"Press any key to continue.....";
	    getch();
	
	}
	
	
	void first::selectionscreen()                                                                                                      //selectionscreen
	{ 
	
	
		system("cls");
		cout<<setw(120)<<"Enter 0 For New Entry";
			   cout<<"\n\n\n";	
		//sselectionscreen();
			int n;
	   cout<<"\n\n\n";	
			cout<<"Here are the predictions on different aspects of your life"<<endl;
		cout<<"\n \n \n \n";
		cout<<setw(80)<<"========================================================================================================================"<<endl;
		cout<<"\n \n";
		cout<<setw(30)<<"1 : Your Horoscope"; 
		
		 cout<<setw(60)<<"2 : Lucky Number , Color and Gemstone"<<endl;
		 cout<<"\n\n";
		cout<<setw(27)<<"3 : Personality";  
      cout<<setw(36)<<"4 : Your's Today'"<<endl;
      cout<<"\n\n";
		cout<<setw(24)<<"5: Love Life";
		cout<<setw(37)<<"6 : Exit";
		
		cout<<"\n\n\n ";
		cout<<setw(80)<<"========================================================================================================================"<<endl;
		cout<<"\n";
		cout<<" Enter a digit corresponding to the part : ";
		cin>>n;
		
		switch (n)
		{
			case 0:
				fflush(stdin);
				userinput();
				break;
			case 1:
				horoscope();
				break;
			case 2:
			 luckprocess();
			 break;
			case 3:
			 personalityprocess();
			 break;
			case 4:
			  today();
			  backcode();
			  break;
			case 5:
			 loveprocess();
			 break;
			case 6:
			 close(1);
			 break;
			 case 'n':
			 	fflush(stdin);
			 	userinput();
			default:
			 cout<<"Invalid Entry";   	
		}
		
		
	}
	
	
	void first::userinput()                                                                                                     //Userinput
	{
		label1:
		system("cls");
		cout<<"\n \n \n";
		cout<<setw(80)<<"***********************************************"<<endl;
		cout<<"\n \n \n";
		cout<<setw(70)<<" Welcome!   Registration Details"<<endl;
		cout<<"\n \n \n";
		cout<<setw(80)<<"***********************************************"<<endl;
		cout<<"\n \n \n \n ";
		cout<<"\n \n \n ";
			
		 errorbox(error);                                                                                                            /// Error Box is Here
        
		
        	
		cout<<"======================================================================================================================="<<endl;
		cout<<endl;
		cout<<" FULL NAME : ";
		gets(d1.name);
		
		cout<<setw(80)<<"  Date Of Birth   "<<endl;
		cout<<setw(80)<<"  Year : ";
		cin>>b1.year;
		if(b1.year<1923)
		{
		 char error1[200]="Invalid Year";
		 strcpy(error,error1);
		goto label1;
		}
		else if(b1.year>=2023)
		{
			char error1[200]="Invalid Year";
			strcpy(error,error1);
			goto label1;
			
		}
		cout<<setw(80)<<"  Month : ";
		cin>>b1.month;
		try                                                                                                                        //Exception Handling
		{
			if(b1.month<1 || b1.month>12)
			 throw(1);
		}
		catch(int a)
		{
			char error1[200]="Invalid Month";
			strcpy(error,error1);
			goto label1;
		}
		cout<<setw(80)<<"  Day : ";
		cin>>b1.day;
		try
		{
			if(b1.day<1 || b1.day>31)
			 throw(1);
			else if(b1.month==2 && b1.day==29)
			{
				if((b1.year%4)!=0)
				{
					
					throw(1);
				}
				
			}
			else if(b1.month==2 && b1.day>28)
			 throw(1);
		}
		catch(int x)
		{
			char error1[200]="Invalid Day";
			strcpy(error,error1);
			goto label1;			
		}
		
		cout<<" Place of birth:  ";
	    cin>>d1.pob;
		cout<<setw(80)<<"   Enter your Sex  M/F :    ";
		d1.sex=getche();
		
		cout<<setw(80)<<"\n \n   \n   ......Press any key to continue";
		cout<<"\n \n";
		cout<<"=======================================================================================================================";
		getch();
		selectionscreen();
		
		
	}
	
	       
	void first::horoscope()                                                                                                                  //Horoscope
	{
	       	char x=d1.name[0];
	       	char y=d1.name[1];
	       	char z=d1.name[2];
	       	char zx=d1.name[3];
	       	
		
        if((x=='a' || x=='l' || x=='e' || x=='c' || (x=='l' && (y=='0' || y=='i' || y=='a' || y=='e')) || (x=='c' && y=='h' && z=='o')))
		{
		
            aries();
            strcpy(z1.zodiac,"Aries");
            backcode();
        }
        else if((x=='o' || x=='u' || x=='b'  || (x=='b' && (y=='a' || y=='e' || y=='i')) || (x='v' && (y=='a' || y=='e'||y=='u'||y=='o'))))
        {
		
            taurus();
            strcpy(z1.zodiac,"Taurus");
            backcode();
        }
        else if((x=='k' || (x=='k' && (y=='a' || y=='e' || y=='u' || y=='o')) || (x=='g' && y=='h' && z=='a')|| (x=='i' && y=='n' && z=='g') || (x=='c' && y=='h' && z=='h' && z=='a')))
       {
	
            gemini();
            strcpy(z1.zodiac,"Gemini"); 
			backcode();  
            
        }
        else if((x=='d' || x=='h' ||  (x=='h' && (y=='i' || y=='a' || y=='e' || y=='u'|| y=='o')) || (x=='d' && (y=='a' || y=='e' || y=='o')) ))
            {
			
			cancer();
		    strcpy(z1.zodiac,"Cancer");	
		    backcode();
		}
        else if((x=='m' || (x=='m' && (y=='a' || y=='e' || y=='o' || y=='i')) || (x=='t' && (y=='e'||y=='i')) || (x=='m' && y=='o' && z=='o'))|| (x=='t' && y=='a' && z=='a') || (x=='t' && y=='e' && z=='e'))
        {
		
            leo();
            strcpy(z1.zodiac,"Leo");
            backcode();
        }
        else if((x=='p'  || (x=='p' && (y=='a' || y=='e' || y=='o')) || (x=='t' && y=='h' && z=='a')))
        {
		
            virgo();
            strcpy(z1.zodiac,"Virgo");
			backcode();   
        }
        else if((x=='r' || x=='t' || (x=='r' && (y=='a' || y=='i' || y=='e')) || (x=='t' && (y=='a' || y=='i' || y=='e'))))
        {
		
            libra();
         strcpy(z1.zodiac,"Libra");  
		 backcode(); 
        }
        else if((x=='n' || (x=='n' && (y=='a' || y=='i' || y=='e' || y=='o')) || (x=='y' && y=='a')))
        {
		
         
		    scorpio();
		 strcpy(z1.zodiac,"Scorpio"); 
		 backcode();  
		}
        else if(( (x=='b' && y=='h') || (x=='d' && y=='h') || (x=='p' && y=='h') || (x=='y' && (y=='e' || y=='u' || y=='o')  )))
        {
		
            saggitarius();
         strcpy(z1.zodiac,"Saggitarius"); 
		 backcode();  
        }
        else if((x=='j'  || (x=='j' && (y=='a' || y=='e' || y=='i')) || (x=='k' && y=='h')))
        {
		
            capricon();
         strcpy(z1.zodiac,"Capricon");  
         backcode();
        }
        else if((x=='g' || (x=='g' && (y=='u' || y=='a' || y=='e' || y=='i' || y=='o')) || (x=='s' && (y=='a' || y=='h' || y=='e' || y=='u' || y=='o'))))
        {
		 char a;
            aquarius();
            strcpy(z1.zodiac,"Aquarius");
			  backcode();   
        }
        
        else if(((x=='d' && (y=='a' || y=='i' || y=='e' || y=='o')) || (x=='c' && y=='h') || (x=='j' && y=='h' && z=='a') || (x=='t' && y=='h' && z=='a')))
        
        {
		
            pisces();
         strcpy(z1.zodiac,"Pisces");  
		 backcode();  
        }
        
        else
        {
        	cout<<"Invalid Entry";
		}
     
	}   
	
	
			     	 		     	 
			     	 
	 void first::errorbox(char abc[200])                                                                            //errorbox
       {
		   	
		cout<<setw(120)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		cout<<"\n\n";
		cout<<setw(105)<<"Error Box: "<<error;
		cout<<"\n\n";
        cout<<setw(120)<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
        }
	       
	       
	       
	       
	    void first::backcode()
	    { 
		   redo:
	       	    cout<<"\n \n Press B to Go Back \n Press X to exit";
	             char a=getche();
	
    	switch(a)
	    {
		case 'b':
		 selectionscreen();
		 break;
		case 'x':
		exit(0);
	    default:
		cout<<"\n \n Invalid input";
		goto redo;	 
	    } 
	    
	   }
	       
	       
	       
	       
	       
	    void first::personalityprocess()                                                                          //Personality
	    {
	    	
	    	 if(strcmp(z1.zodiac,"Aries")==0)
			  {
			  	ariespersonality();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Taurus")==0)
			  {
			  	tauruspersonality();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Gemini")==0)
			  {
			  	geminipersonality();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Cancer")==0)
			  {
			  	cancerpersonality();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Leo")==0)
			  {
			  	leopersonality();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Virgo")==0)
			  {
			  	virgopersonality();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Libra")==0)
			  {
			  	librapersonality();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Scorpio")==0)
			  {
			  	scorpiopersonality();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Saggitarius")==0)
			  {
			  	saggitariuspersonality();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Aquarius")==0)
			  {
			  	aquariuspersonality();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Pisces")==0)
			  {
			  	piscespersonality();
			  	backcode();
			  }
			  
	    	
		}
		
		void first::details()                                                                                      //details
		{
			system("cls");
			cout<<setw(80)<<" Name: "<<d1.name<<"\n";
			cout<<"\n"<<setw(80)<<"Age: "<<b1.age<<"\n";
			cout<<"\n"<<setw(80)<<"Zodiac: "<<z1.zodiac<<"\n";
			
		}
	    
	    
	    void first::luckprocess()                                                                //Luck
	    {
	    	if(strcmp(z1.zodiac,"Aries")==0)
			  {
			  	details();
			  	arieslucky();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Taurus")==0)
			  {
			  	details();
			  	tauruslucky();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Gemini")==0)
			  {
			  	details();
			  	geminilucky();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Cancer")==0)
			  {
			  	details();
			  	cancerlucky();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Leo")==0)
			  {
			  	details();
			  	leolucky();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Virgo")==0)
			  {
			  	details();
			  	virgolucky();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Libra")==0)
			  {
			  	details();
			  	libralucky();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Scorpio")==0)
			  {
			  	details();
			  	scorpiolucky();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Saggitarius")==0)
			  {
			  	details();
			  	saggitariuslucky();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Aquarius")==0)
			  {
			  	details();
			  	aquariuslucky();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Pisces")==0)
			  {
			  	details();
			  	pisceslucky();
			  	backcode();
			  }
			  
		}
	    
	    void first::loveprocess()                                                         //Love
	    {
	    		if(strcmp(z1.zodiac,"Aries")==0)
			  {
			  	details();
			  	arieslove();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Taurus")==0)
			  {
			  	details();
			  	tauruslove();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Gemini")==0)
			  {
			  	details();
			  	geminilove();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Cancer")==0)
			  {
			  	details();
			  	cancerlove();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Leo")==0)
			  {
			  	details();
			  	leolove();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Virgo")==0)
			  {
			  	details();
			  	virgolove();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Libra")==0)
			  {
			  	details();
			  	libralove();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Scorpio")==0)
			  {
			  	details();
			  	scorpiolove();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Saggitarius")==0)
			  {
			  	details();
			  	saggitariuslove();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Aquarius")==0)
			  {
			  	details();
			  	aquariuslove();
			  	backcode();
			  }
			  else if(strcmp(z1.zodiac,"Pisces")==0)
			  {
			  	details();
			  	pisceslove();
			  	backcode();
			  }
		}
		
		void first::age()
		{
			b1.age=t1.year-b1.year;
		}
	
	
	int main()
    	{    							
		first obj1;
		obj1.blankscreen();
		obj1.userinput();
		obj1.age();
		//obj1.selectionscreen();
		return 0;		
    	}