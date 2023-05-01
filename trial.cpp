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