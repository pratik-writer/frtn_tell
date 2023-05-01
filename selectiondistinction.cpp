#include<iostream>
#include<conio.h>
#include "horoscope.h"
using namespace std;

void distinctpersonality(int a)
{
	switch (a)
		{
			case 1: 
				ariespersonality();
				break;
			case 2:
			 tauruspersonality();
			 break;
			case 3:
			 geminipersonality();
			 break;
			case 4:
				cancerpersonality();
				break;
			case 5:
			 leopersonality();
			 break;
			case 6:
			 virgopersonality();
			 break; 
			case 7:
			 librapersonality();
			  break;
			case 8:
			 scorpiopersonality();
			 break;
			case 9:
			 saggitariuspersonality();
			 break;
			case 10:
			 capriconpersonality();
			 break;
			case 11:
			 aquariuspersonality();
			  break;
			case 12:
			 piscespersonality();
			  break;        	
			   	
		}
		
}

