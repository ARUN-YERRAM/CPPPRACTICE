// #include<iostream>
// using namespace std;

// class Player{

//     private:
//         string name;
//         int score;
//     public:
//         Player() : Player {""} {}
//         Player(string n) : score{0}, name{n} {}

//         void won(){
//             score++;
//         }
//         int getScore(){
//             return score;
//         }
//         string getName(){
//             return name;
//         }
// };
// class Game{
//     private:
//         char board[9];
//         int emptyIndex[9];
//         int againstComputer , gameOn;
//         int emptyCount;
    
//     void displayBoard(){
//         cout<<endl;
//         cout<<"\t   |   |   "<<endl;
//         cout << "\t "<<board[0]<<" | "<<board[1]<<" | "<<board[2]<<" "<<endl; 
//         cout<<"\t   |   |   "<<endl;
//         cout<<"--------------"<<endl;
//         cout<<"\t   |   |   "<<endl;
//         cout << "\t "<<board[3]<<" | "<<board[4]<<" | "<<board[5]<<" "<<endl; 
//         cout<<"\t   |   |   "<<endl;
//         cout<<"--------------"<<endl;
//         cout<<"\t   |   |   "<<endl;
//         cout << "\t "<<board[6]<<" | "<<board[7]<<" | "<<board[8]<<" "<<endl; 
//         cout<<"\t   |   |   "<<endl;
//         // cout<<endl;

//     }
//     void play(Player &p1 , Player &p2){
//         int hand = 0;
//         gameOn = 1;
//         displayBoard();
//         while(emptyCount > 0) && (gameOn != 0){
//             if(againstComputer)
//                 hand == 1 ? computerInput(): playerInput(p2);
//             else 
//                 hand == 1 ? playerInput(p1): playerInput(p2);
//             hand = !hand;
//             displayBoard();
//             chechWinner(p1,p2);
//         }
//         if (emptyCount <= 0){
//             cout <," Game Draw"<<endl;
//         }
//         cout <<"---------------"<<endl;
//         cout<<Rematch ? (y/n)""

//     }

//     public:
//         void onePlayerGame(){
//             Player p("Arun");
//             Player c("Computer");

//             cout<<"------------"<<endl;
//             cout<<"\t Arun : x \t Computer : o"<<endl;
//             cout<<"------------"<<endl;
//             cout<<endl;
//             againstComputer = 1;
//             play(c,p);
//         }
//         void twoPlayerGame(){
//             Player p("Arun");
//             Player c("Player 2");
//             cout << "----------------------"<<endl;
//             cout << "\t Arun : x \t Player 2 : o"<<endl;
//             cout << "----------------------"<<endl;
//             againstComputer = 0;
//             play(c,p);
//         }
// };


// int main(){

//     int ch;
//     while(1){
//         cout<< "----------------- Menu ------------"<<endl;
//         cout << "\t 1. 1 Player Game"<<endl;
//         cout << "\t 2. 2 Player Game"<<endl;
//         cout << "\t 3. Exit"<<endl;
//         cout<<"------------------------------"<<endl;
//         cout<<"Enter Your Choice: ";
//         cin>>ch;

//         switch(ch){
//             case 1:
//                 Game *game = new Game();
//                 game->onePlayerGame();

//             case 2:
//                 Game *game = new Game();
//                 game->onePlayerGame();

//             case 3:
//                 return 0;

//             default :
//             cout << "Invalid Choice" << endl;
//         }
//     }
//     return 0;
// }


