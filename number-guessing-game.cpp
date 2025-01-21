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
  text_t userName , userChoiceText;
  desicion_t contDesicion , restartDesicion;
  value_t pinCode , computerUserHolder, computerGuessNumber,userGuessNumber, guessAttempts;
       system("cls");
  std::cout<<"Hello Please Enter Your Username:";
          getline(std::cin,userName);
       do
       {
        
      while (userName.length()>=10)
      {
          system("cls");
      std::cout<<"Invalid Username, Username Can't Be More Than 10 Characters."<<std::endl;
        std::cout<<"Please Re-enter Your Username:";
          getline(std::cin,userName);  
      }
      while (userName.empty())
      {
          system("cls");
      std::cout<<"Username Must Not Be Empty."<<std::endl;
        std::cout<<"Please enter Your Username:";
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

      guessAttempts=1;
                  std::cout<<"Welcome To Our Number Guessing Game "<<userName<<"."<<std::endl;
//MAIN PROGRAM..
srand(time(NULL));
 computerGuessNumber=(rand()%100)+1; 
    computerUserHolder=(rand()%4) +1;
                 std::cout<<"Would You Like To Play With Computer Or Another User?(Only Inputs [Computer] Or [User2] Will Be Accepted.)"<<std::endl; 
                    std::cin>>userChoiceText;
                     system("cls"); 

                     if (userChoiceText=="Computer" || userChoiceText=="computer")
                     {                       
                        
     switch (computerUserHolder)
                        {
                        case 1:
                      std::cout<<"Hi "<<userName<<"."<<std::endl;
                         std::cout<<"My Name Is Bill, Your Guess Opponent."<<std::endl;
                         std::cout<<"I Am A Machine And I Have Generated A Number From 1-100."<<std::endl;
                                std::cout<<"Guess And Enter The Number, Let's See If We Match"<<std::endl;
                           do{
                                 
                                    std::cout<<"Guess Num:";
                                  std::cin>>userGuessNumber;
                                   if (userGuessNumber<computerGuessNumber)
                                   {
                                   std::cout<<" Too Low!"<<std::endl;
                                   }
                                   else if (userGuessNumber>computerGuessNumber)
                                  {
                                    std::cout<<" Too High!"<<std::endl;
                                   }
                                   else
                                    {
                                    std::cout<<"Yes! "<<userName<<".You Have Matched My Generated Number! You Win."<<std::endl;
                                  if (guessAttempts>5)
                                  {
                                    std::cout<<"You Have Played The Game "<<guessAttempts<<" Times."<<std::endl;
                                    std::cout<<"Do Better Next Time"<<std::endl;
                                  }
                                  else if (guessAttempts<5)
                                  {
                                    std::cout<<"You Have Played The Game "<<guessAttempts<<" Times."<<std::endl;
                                    std::cout<<"You're A Good! Gamer."<<std::endl;
                                  }
                                    else
                                    {
                                     std::cout<<"You Have Played The Game "<<guessAttempts<<" Times."<<std::endl;
                                    std::cout<<"You're A Moderate Gamer!"<<std::endl; 
                                    }           
                          }   
                                      
                              guessAttempts++;
                              } while (computerGuessNumber!=userGuessNumber);                                   
                          break;
                        case 2:
                           std::cout<<"Hi "<<userName<<"."<<std::endl;
                         std::cout<<"My Name Is Sue, Your Guess Opponent."<<std::endl;
                         std::cout<<"I Am A Female Machine And I Have Generated A Number From 1-100."<<std::endl;
                                std::cout<<"Guess And Enter The Number, Let's See If We Match"<<std::endl;
                           do{
                                 
                                    std::cout<<"Guess Num:";
                                  std::cin>>userGuessNumber;
                                   if (userGuessNumber<computerGuessNumber)
                                   {
                                   std::cout<<" Too Low!"<<std::endl;
                                   }
                                   else if (userGuessNumber>computerGuessNumber)
                                  {
                                    std::cout<<" Too High!"<<std::endl;
                                   }
                                   else
                                    {
                                    std::cout<<"Yes! "<<userName<<".You Have Matched My Generated Number! You Win."<<std::endl;
                                  if (guessAttempts>5)
                                  {
                                    std::cout<<"You Have Played The Game "<<guessAttempts<<" Times."<<std::endl;
                                    std::cout<<"Do Better Next Time"<<std::endl;
                                  }
                                  else if (guessAttempts<5)
                                  {
                                    std::cout<<"You Have Played The Game "<<guessAttempts<<" Times."<<std::endl;
                                    std::cout<<"You're A Good! Gamer."<<std::endl;
                                  }
                                    else
                                    {
                                     std::cout<<"You Have Played The Game "<<guessAttempts<<" Times."<<std::endl;
                                    std::cout<<"You're A Moderate Gamer!"<<std::endl; 
                                    }           
                          }   
                                      
                              guessAttempts++;
                              } while (computerGuessNumber!=userGuessNumber);
                          break;
                        case 3:
                           std::cout<<"Hi "<<userName<<"."<<std::endl;
                         std::cout<<"Braddy, Your Guess Opponent."<<std::endl;
                         std::cout<<"I Have Generated A Number From 1-100."<<std::endl;
                                std::cout<<"Guess And Enter The Number, Let's See If We Match"<<std::endl;
                           do{
                                 
                                    std::cout<<"Guess Num:";
                                  std::cin>>userGuessNumber;
                                   if (userGuessNumber<computerGuessNumber)
                                   {
                                   std::cout<<" Too Low!"<<std::endl;
                                   }
                                   else if (userGuessNumber>computerGuessNumber)
                                  {
                                   std::cout<<" Too High!"<<std::endl;
                                   }
                                   else
                                    {
                                    std::cout<<"Yes! "<<userName<<".You Have Matched My Generated Number! You Win."<<std::endl;
                                  if (guessAttempts>5)
                                  {
                                    std::cout<<"You Have Played The Game "<<guessAttempts<<" Times."<<std::endl;
                                    std::cout<<"Do Better Next Time"<<std::endl;
                                  }
                                  else if (guessAttempts<5)
                                  {
                                    std::cout<<"You Have Played The Game "<<guessAttempts<<" Times."<<std::endl;
                                    std::cout<<"You're A Good! Gamer."<<std::endl;
                                  }
                                    else
                                    {
                                     std::cout<<"You Have Played The Game "<<guessAttempts<<" Times."<<std::endl;
                                    std::cout<<"You're A Moderate Gamer!"<<std::endl; 
                                    }           
                          }   
                                      
                                       
                              guessAttempts++;
                              } while (computerGuessNumber!=userGuessNumber);
                          break;
                        case 4:
                          std::cout<<"Hey "<<userName<<"."<<std::endl;
                         std::cout<<"BelmireDub, Your Guess Opponent."<<std::endl;
                         std::cout<<"I Am A Machine And I Have Generated A Number From 1-100."<<std::endl;
                                std::cout<<"Guess And Enter The Number, Let's See If We Match"<<std::endl;
                           do{
                                 
                                    std::cout<<"Guess Num:";
                                  std::cin>>userGuessNumber;
                                   if (userGuessNumber<computerGuessNumber)
                                   {
                                   std::cout<<" Too Low!"<<std::endl;
                                   }
                                   else if (userGuessNumber>computerGuessNumber)
                                  {
                                    std::cout<<" Too High!"<<std::endl;
                                   }
                                   else
                                    {
                                    std::cout<<"Yes! "<<userName<<".You Have Matched My Generated Number! You Win."<<std::endl;
                                  if (guessAttempts>5)
                                  {
                                    std::cout<<"You Have Played The Game "<<guessAttempts<<" Times."<<std::endl;
                                    std::cout<<"Do Better Next Time"<<std::endl;
                                  }
                                  else if (guessAttempts<5)
                                  {
                                    std::cout<<"You Have Played The Game "<<guessAttempts<<" Times."<<std::endl;
                                    std::cout<<"You're A Good! Gamer."<<std::endl;
                                  }
                                    else
                                    {
                                     std::cout<<"You Have Played The Game "<<guessAttempts<<" Times."<<std::endl;
                                    std::cout<<"You're A Moderate Gamer!"<<std::endl; 
                                    }           
                          }   
                                     
                              guessAttempts++;
                              } while (computerGuessNumber!=userGuessNumber);
                          break;
                        default:
                           std::cout<<"Error";
                           std::cout<<" WOULD YOU LIKE TO RESTART THE PROCESS?[Y/N]:";
                             std::cin>>restartDesicion;
                          break;
                        }

                         
                         
                          
                     }
                     else if (userChoiceText=="User2" || userChoiceText=="User2")
                     {
                      /* code */
                     }
                     else
                     {
                      system("cls");
                      std::cout<<"INVALID CHOICE";
                      std::cout<<" WOULD YOU LIKE TO RESTART THE PROCESS?[Y/N]:";
                std::cin>>restartDesicion;
          
                     }
                     
                     
                     
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

    
  