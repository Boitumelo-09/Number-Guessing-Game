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
  text_t userName , userChoiceText , userName2;
  desicion_t contDesicion , restartDesicion , confirmDesicion2, confirmDesicion,confirmDesicion3;
  value_t pinCode ,pinCode2, computerUserHolder, computerGuessNumber,userGuessNumber, guessAttempts,secretNumber,secretNumberMatch;
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
      std::cout<<"You need to have a username to proceed."<<std::endl;
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
                std::cin>>confirmDesicion;
            system("cls");

      guessAttempts=1;
               if (confirmDesicion=='y' || confirmDesicion=='Y')
               {
                 std::cout<<"Welcome To Our Number Guessing Game "<<userName<<"."<<std::endl;
//MAIN PROGRAM..
srand(time(NULL));
 computerGuessNumber=(rand()%100)+1; 
    computerUserHolder=(rand()%4) +1;
                 std::cout<<"Would You Like To Play With Computer Or Another User?(Only Inputs [Computer] Or [User2] Will Be Accepted.):"; 
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
                         std::cout<<" I'm Braddy, Your Guess Opponent."<<std::endl;
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
                     else if (userChoiceText=="User2" || userChoiceText=="user2")
                     {
          std::cout<<"Please Enter Second User's Username:";
          getline(std::cin,userName2);
                          
                     while (userName2.length()>=10)
      {
          system("cls");
      std::cout<<"Invalid Username, Username Can't Be More Than 10 Characters."<<std::endl;
        std::cout<<"Please Re-enter Your Username:";
          getline(std::cin,userName2);  
      }
      while (userName2.empty())
      {
          system("cls");
      std::cout<<"You need to have a Second User's username to proceed."<<std::endl;
        std::cout<<"Please enter Your Username:";
          getline(std::cin,userName2);  
      } 
         system("cls");
                      
                           
                   std::cout<<"Hello "<<userName2<<". You are going to be "<<userName<<"'s Opponent."<<std::endl;
                   std::cout<<"You will need your 4-digit Gaming Pin to proceed"<<std::endl;
                     std::cout<<"PIN:";
                          std::cin>>pinCode2;
     system("cls");
                while (pinCode2<=1000 || pinCode2>=9999)
                {
                  std::cout<<"INVALID PIN."<<std::endl;
                  std::cout<<"Enter Valid PIN:";
                                 std::cin>>pinCode2;
     system("cls");
                }
                   std::cout<<"PIN ACCEPTED!"<<std::endl;
                  std::cout<<"***************          ***************"<<std::endl;
                  std::cout<<"User 1:                  User 2:"<<std::endl;
                  std::cout<<"Name:"<<userName<<".          Name:"<<userName2<<"."<<std::endl;
                  std::cout<<"Gaming PIN:"<<pinCode<<"          Gaming PIN:"<<pinCode2<<std::endl;
                   std::cout<<"***************          ***************"<<std::endl; 
                    std::cout<<"Do You Confirm And Continue?[Y/N]:";
                        std::cin>>confirmDesicion2;
     system("cls");
                          if (confirmDesicion2=='Y' || confirmDesicion2=='y')
                          {
                           std::cout<<"****************************************"<<std::endl;
                           std::cout<<"Okay Let's Begin."<<std::endl<<std::endl;
                           std::cout<<"               HOW TO PLAY:"<<std::endl<<std::endl;
                           std::cout<<"          -"<<userName<<" will type in a secret number."<<userName2<<" will  guess that number."<<std::endl;
                           std::cout<<"          -"<<userName<<" must specify the range where the secret number belongs with respect to 10's."<<std::endl;
                           std::cout<<"          -"<<userName2<<" must not see when "<<userName<<" inputs the secret number."<<std::endl;
                           std::cout<<"          -"<<"The game trials depend on "<<userName2<<"."<<std::endl;
                           std::cout<<"          -"<<userName2<<" is the one to face game judgements."<<std::endl;
                           std::cout<<"          -"<<userName2<<" is given only 5 match attempts."<<std::endl;
                           std::cout<<"          -"<<"If "<<userName2<<" exceeds the 5 given attempts, he/she is considered a BAD GAMER!!!"<<std::endl;
                           std::cout<<"____________________________________"<<std::endl;
                           std::cout<<"Do You Confirm And Continue?[Y/N]:";
                                           std::cin>>confirmDesicion3;
    system("cls");
                             if (confirmDesicion3=='Y' || confirmDesicion3=='y')
                             {
                              std::cout<<"****************************************"<<std::endl;
                              std::cout<<"Enter a secrete number "<<userName<<":";
                                std::cin>>secretNumber;
    system("cls");
                              do{
                                 std::cout<<"****************************************"<<std::endl;
                                    std::cout<<"Enter a GUESS number "<<userName2<<":";
                                  std::cin>>userGuessNumber;
                                   if (userGuessNumber<secretNumber)
                                   {std::cout<<"____________________________________"<<std::endl;
                                   std::cout<<" Too Low!"<<std::endl;
                                   }
                                   else if (userGuessNumber>secretNumber)
                                  {std::cout<<"____________________________________"<<std::endl;
                                   std::cout<<" Too High!"<<std::endl;

                                   }
                                   else
                                    {
                                      std::cout<<"****************************************"<<std::endl;
                                    std::cout<<"Yes! It's A Match "<<userName2<<".Here is your Judgement"<<std::endl;
                                  if (guessAttempts>5)
                                  {
                                    std::cout<<"You Have Played The Game "<<guessAttempts<<" Times."<<std::endl;
                                    std::cout<<"You Are A Bad! Gamer"<<std::endl;
                                    std::cout<<"____________________________________"<<std::endl;
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
                              } while (secretNumber!=userGuessNumber);
                                
                             }
                             
                                else if (confirmDesicion2=='N' || confirmDesicion2=='n')
                                {
                                 std::cout<<"OKAY"<<std::endl;
                                }
                                 
                          }

                            else if (confirmDesicion2=='n' || confirmDesicion2=='N')
                            {
                             std::cout<<"OKAY"<<std::endl;
                            }
                             
                
               }
               else if (confirmDesicion=='N' || confirmDesicion=='n')
               {
               system("cls");
                      std::cout<<"OKAY";
                      std::cout<<" WOULD YOU LIKE TO RESTART THE PROCESS?[Y/N]:";
                std::cin>>restartDesicion;
          
               }
               
                     }
                     
                  
          }
          else
              system("cls");
                std::cout<<"................."<<std::endl;
             std::cout<<" WOULD YOU LIKE TO RESTART THE PROCESS?[Y/N]:";
                std::cin>>restartDesicion;
          
       } while (restartDesicion=='Y' || restartDesicion=='y');
        system("cls");
      std::cout<<"Okay FINE!!"<<std::endl;
      std::cout<<"Next Time We Hope"<<std::endl;
  system("pause>0");  
}

    
  