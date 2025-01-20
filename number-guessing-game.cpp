/* 

Number Guessing Game

Generate a random number and let the user guess it.
Use loops to give multiple attempts and operators to check the guess
*/

#include<iostream>
#include<ctime>
   
//Variable Renaming
  typedef std::string text_t;
  typedef int value_t;
  typedef char desicion_t;
  int main()
{   
  //DECLARATIONS.variables
  text_t userName;
  desicion_t contDesicion , restartDesicion;
  value_t pinCode;
  std::cout<<"Hello Please Enter Your Username:";
          getline(std::cin,userName);

       
       do
       {
        
      while (userName.length()>=10 || userName.empty())
      {
          system("cls");
      std::cout<<"Username INVALID"<<std::endl;
        std::cout<<"Please Re-enter Your Username:";
          getline(std::cin,userName);  
      }
         system("cls");
    std::cout<<"Hello "<<userName<<". We Are Pleased To Have You."<<std::endl;
         std::cout<<"Would You Like To Continue?[Y/N]:";
           std::cin>>contDesicion;
          system("cls");
          if (contDesicion=='y' || contDesicion=='Y')
          {
            std::cout<<"Great!!!!!"<<std::endl;
              std::cout<<"ENTER YOUR 4-DIGIT GAMING  CODE:";
                std::cin>>pinCode;
                system("cls");
            while (pinCode<=1000 || pinCode>=9999)
            {
             std::cout<<"INVALID PIN"<<std::endl;
              std::cout<<"Re-ENTER YOUR 4-DIGIT GAMING  CODE:";
                std::cin>>pinCode;
                system("cls");
            }
           std::cout<<"PIN ACCEPTED."<<std::endl;
             std::cout<<"Your Username is "<<userName<<"."<<std::endl;
             std::cout<<"Your 4-Digit Gaming Code is:"<<pinCode<<std::endl;
             std::cout<<"Do You Confirm And Continue?[Y/N]:";
                std::cin>>contDesicion;
            system("cls");


                  std::cout<<"Welcome To Our Number Guessing Game "<<userName<<"."<<std::endl;
          //MAIN PROGRAM..
          }
          else
              system("cls");
            
             std::cout<<" WOULD YOU LIKE TO RESTART THE PROCESS?[Y/N]:";
                std::cin>>restartDesicion;
          
       } while (restartDesicion=='Y' || restartDesicion=='y');
        system("cls");
      std::cout<<"Okay FINE!!"<<std::endl;
      std::cout<<"Next Time We Hope"<<std::endl;
  system("pause>0");  
}

    
  