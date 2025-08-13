
#include<iostream>
#include<ctime>
using namespace std;
char player;
char comp;
int playerscore=0;
int compscore=0;
int n;
char getuserchoice(){
    do{                          
    cout<<"pick r for ROCK"<<endl;
    cout<<"pick p for PAPER"<<endl;
    cout<<"pick s for SCISSORS"<<endl;
    cin >> player;
    }while(player !='r'&&player !='p'&&player !='s');
    return player;
    /* do while loop works makes the statments print
     again if user picks any other letter */ 
};
char getcompchoice(){
    srand(time(0));
    int num = rand()% 3 + 1;
    switch(num){
        case 1:return 'r';
        case 2:return 'p';
        case 3:return 's';
    };
}
void showchoice(char choice){
      switch(choice){
        case 'r':cout<<" ROCK"<<endl;
                 break;
        case 'p':cout<<" PAPER"<<endl;
                 break;
        case 's':cout<<" SCISSORS"<<endl;
                 break;
                 }
};
void winnerchoice(char player,char comp){
    switch(player){
        case 'r':if(comp == 'r'){
            cout<<"Tie";}
            else if(comp == 'p'){
                cout<<"Computer Wins";
                compscore++;
            }
                    else {
                        cout<<"You Win";
                        playerscore++;
                    }
                    break;
        case 'p':if(comp == 'p'){
            cout<<"Tie";}
            else if(comp == 's'){
                cout<<"Computer Wins";
                compscore++;}
                    else {
                        cout<<"You Win";
                        playerscore++;
                    }
                    break;
        case 's':if(comp == 's'){
               cout<<"Tie";}
               else if(comp == 'r'){
                   cout<<"Computer Wins";
                   compscore++;
                }
                       else {
                           cout<<"You Win";
                           playerscore++;
                        }
                     break;
                    
    }
    cout<<"Your Score: "<<playerscore<<endl<<"Computer's Score: "<<compscore<<endl;
    cout<<"_______________________________________________________________________"<<endl;
}
int main() {
    cout<<"ROCK-PAPER-SCISSORS"<<endl;
    cout<<"For how many points would you like to play:";
    cin>>n;
    while(playerscore<n && compscore<n){
   player= getuserchoice();
   cout<<"Your Choice:";
   showchoice(player);
   comp=getcompchoice();
   cout<<"Computer's Choice: ";
   showchoice(comp);
   winnerchoice( player, comp);
}
if(playerscore == 10) {
    cout << " YOU WON THE GAME!" << endl;
} else {
    cout << "COMPUTER WON THE GAME!" << endl;
}

return 0;
}

