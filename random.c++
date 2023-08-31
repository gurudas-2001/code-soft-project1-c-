#include<iostream>
#include<ctime>
using namespace std;
int main(){
    // int chanceLeft;
    cout<< "\n\t\t---I WELCOME YOU IN NUMBER GUESSING GAME---\n"<< endl;

     cout<< "\n\t\t--->>Guess Number between 1 to 100 ---";
     
     cout<< "\n\t\t--->> 3-- 2-- 1-- Start the Game and Wishing You Best of Luck---"<<endl;
      
     srand(time(0));
     int randNumber=(rand() %100) +1;

     cout<<"\n ^^ ** You will have total 5 chances to guess the correct number**^^\n ";
     int chanceLeft= 5;
     int playerInput;

     for(int i; i=5;i++){
        cout<<"\n---> Enter The Number:";
        cin>> playerInput;
        if(playerInput== randNumber){
            cout<<"\n --Congrats!!-- You have successfully guessed the right number\n";
             cout<<"\n Thanks for playing. Have a fabulous Day";
             break;
        }
        else{
            if(playerInput>randNumber)
            {
                cout<<"\n ** insert Smaller Number. Try Again**"<<endl;
            }
            else{
                
                cout<<"\n ** [insert Larger Number. Try Again]**"<<endl;
            }
     }
     chanceLeft--;
     cout<<"\n (chance Left to guess the Random Number :"<< chanceLeft<< ")"<<endl;

     if (chanceLeft==0)
     {
        cout<< "\n Sorry!! Your chance has been finished to guess the random number\n"<<endl;
         cout<< "The random number was: "<< randNumber<<endl;
         cout<<"Thanks for playing Have a Beautiful day";
     }

     cout<<"\n";
     return 0;

     }
}

