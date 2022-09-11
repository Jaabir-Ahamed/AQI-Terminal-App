#include <iostream>
#include <string>

int main()
{
   bool done = false;
   
   while (!done)
   {
      bool again = false; // true to repeat the same conversion
      std::string name;       //Initalize variable "name" (will be used throughout the program)
      std::string response1; //Initalize variable "response1" (will be used to quit the program or continue)
      std::cout << "Hi welcome to the A.Q.I program. What is your name?" << std::endl;
      std::cin >> name;
      std::cout << "Nice to meet you, " << name << "." << "\n"; 
      std::cout << "This program will ask for the current Air Quality and if you have any resiptory problems." << "\n";
      std::cout << "After which you will get suggestions based on the current A.Q.I level." << "\n";
      std::cout << "If you wish exit this program please type quit, if not then press any key and hit enter" << "\n";
      std::cin >> response1;
      if (response1 == "quit") 
      {
        done = true;
        return 1;
      }
      
      double aqi;
      std::cout << "Please enter the current AQI: ";
      std::cin >> aqi;
      std::string respitory_prob;
      std::cout << "Do you have any respiratory problems? Type yes or no :" << "\n";
      std::cin >> respitory_prob;
      // 1st Condtition to check if AQI is good (between 0 to 50)
      if(aqi >= 0 && aqi <= 50)
      {
        if(respitory_prob == "yes")
        {
            std::cout << name << " the air polution is very low today and will not be hazardous to your health." <<
                "\n"  <<"*-------*"<<
                "\n"  <<"* ^   ^ *"<<
                "\n"  <<"*       *"<<
                "\n"  <<"* [===] *"<<
                "\n"  <<"*       *"<<
                "\n"  <<"*-------*" <<std::endl;
        }
        else
        {
            std::cout << name << " the air polution is okay for you to go outside" <<
                 "\n"  <<"*-------*"<<
                 "\n"  <<"* ^   ^ *"<<
                 "\n"  <<"*       *"<<
                 "\n"  <<"* [===] *"<<
                 "\n"  <<"*       *"<<
                 "\n"  <<"*-------*" <<std::endl;
        }
      } 
      // 2nd Condtition to check if AQI is good (between 51 to 100)
      if(aqi >= 51 && aqi <= 100)
      {
        if(respitory_prob == "no")
        {
            std::cout << name << " the air quality is okay to go outside however, if you have difficulties breathing please stay inside." << 
                "\n"  <<"*-------*"<<
                "\n"  <<"* o   o *"<<
                "\n"  <<"*       *"<<
                "\n"  <<"*  ___  *"<<
                "\n"  <<"*       *"<<
                "\n"  <<"*-------*" <<std::endl;
        }
        else
        {
          std::cout << name << " since you have respiratory issues the air polution is not safe for going outside. It is recomended to stay indoors and wait till the air quality gets better" <<
               "\n"  <<"*-------*"<<
               "\n"  <<"* >   < *"<<
               "\n"  <<"*       *"<<
               "\n"  <<"*  ___  *"<<
               "\n"  <<"*       *"<<
               "\n"  <<"*-------*"<<std::endl;;
        }
      }
      // 3rd Condtition to check if AQI is good (between 101 to 150)
      if(aqi >= 101 && aqi <= 150)
      {
        if(respitory_prob == "no")
        {
            std::cout << name << " the air polution outside is bad but is not bad enough to effect you." << 
                 "\n"  <<"*--------*"<<
                 "\n"  <<"* o    o *"<<
                 "\n"  <<"*        *"<<
                 "\n"  <<"*  {===} *"<<
                 "\n"  <<"*        *"<<
                 "\n"  <<"*--------*"<<std::endl;;
        }
        else
        {
            std::cout << name << " the air polution is will pose a problem for breathing. It is advised for you to stay inside" <<
                "\n"  <<"*--------*"<<
                "\n"  <<"* ^   ^  *"<<
                "\n"  <<"* |      *"<<
                "\n"  <<"*  ___   *"<<
                "\n"  <<"*     |  *"<<
                "\n"  <<"*-|------*"<<std::endl;;
        }
        
      }
      // 4th Condtition to check if AQI is good (between 151 to 200)
      if(aqi >= 151 && aqi <= 200)
      {
        if(respitory_prob == "no")
        {
            std::cout << name << " the air quality is bad even if you have no problems. I suggest you proceed with caution" << 
                 "\n"  <<"*--------*"<<
                 "\n"  <<"* o    o *"<<
                 "\n"  <<"*        *"<<
                 "\n"  <<"*  ~~~~  *"<<
                 "\n"  <<"*        *"<<
                 "\n"  <<"*--------*"<<std::endl;;
        }
        else
        {
            std::cout << name << " the air polution outside is hazardous for your health. I highly recomend you to stay inside untill the air quality gets better. " <<
                "\n"  <<"*--------*"<<
                "\n"  <<"* ^   ^  *"<<
                "\n"  <<"* |      *"<<
                "\n"  <<"*  ___   *"<<
                "\n"  <<"*     |  *"<<
                "\n"  <<"*-|------*"<<std::endl;;
        }
        
      }
      // 5th Condtition to check if AQI is good (between 201 to 300)
      if(aqi >= 201 && aqi <= 300)
      {
        if(respitory_prob == "no")
        {
            std::cout << name << " the air is hazardous please stay inside untill air quality gets better." << 
                 "\n"  <<"*---------*"<<
                 "\n"  <<"* o     o *"<<
                 "\n"  <<"*         *"<<
                 "\n"  <<"*  {===}  *"<<
                 "\n"  <<"*         *"<<
                 "\n"  <<"*--------*"<<std::endl;;
        }
        else
        {
            std::cout << name << " the air polution is extremely bad for you please stay inside and try to use an air refreshener." <<
                "\n"  <<"*---------*"<<
                "\n"  <<"* X     X *"<<
                "\n"  <<"*         *"<<
                "\n"  <<"*  (XXX)  *"<<
                "\n"  <<"*         *"<<
                "\n"  <<"*--------*"<<std::endl;;
        }
      }
        //6th Condtition to check if AQI is good (300 above)
     if(aqi >= 301 && aqi <= 1000)
     {
         if(respitory_prob == "no")
         {
            std::cout << name << " DON'T GO OUTSIDE, wait for emergency orders." << 
                "\n"  <<"*--------*"<<
                "\n"  <<"* X    X *"<<
                "\n"  <<"*        *"<<
                "\n"  <<"*  (XXX) *"<<
                "\n"  <<"*        *"<<
                "\n"  <<"*--------*"<<std::endl;;
         }
         else
         {
            std::cout << name << " DON'T GO OUTSIDE, wait for emergency orders." << 
                "\n"  <<"*---------*"<<
                "\n"  <<"* X     X *"<<
                "\n"  <<"*         *"<<
                "\n"  <<"*  (XXX)  *"<<
                "\n"  <<"*         *"<<
                "\n"  <<"*--------*"<<std::endl;
         }
      }
      
     std::cout << "Do you want to try the program again? Type 1 for no and 2 for yes : ";
     int choice;
     std::cin >> choice;
    
     if(choice == 1)
     {
      std::cout << "Thank you for using the program. Have a nice day!" << std::endl;
      break;
     }
     else if(choice == 2)
     {
      std::cout << "Restarting the program..." << std::endl;
      done = false;
     } 
     if(choice != 1 && choice != 2)
     {
      std::cout << "Invalid input. Terminating the program..." << std::endl;
      break;
     }

    }
    
      
      
    

 return 0;
}





