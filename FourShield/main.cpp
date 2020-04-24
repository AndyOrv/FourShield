#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <vector>
using namespace std;
/***
FOUR SHEILD
Text Based adventure game

Very Early stages of development,
All classes and methods are prone to change,

Current version objective is to sort basic fundamental mechanics and layouts for clean progression in development
Code quality needs refinement
***/







    /***************************************Objects and Characters*********************/
//Player class

// basic item characteristics class
class Item{
    public:
        int damage;
        string name;

        Item(string nam, int dmg){
            damage = dmg;
            name = nam;

        }

};

//Player class to store methods based on the players interaction with the game
class Player{
    public:
        char name[50];

        vector<Item> inv;

        void printInv(){
         cout << "\n\t INVENTORY \n";
           for (int x = 0; x < inv.size(); x++)
            cout<< "\t  " << x << "] " << inv[x].name << endl;
        }

    };





    /******************************************STORY************************************/
//Header note
void header(string place){
    cout << "\n----------------------"<< place <<"----------------------" << endl;

}

//Footer note
void contin(){
    cout << "\n----------------------Press any key to continue----------------------" << endl;
    _getch();
}



/***********INITIALIZE**************/
int choice;
Player player;


//CHOICE 2.1, template for working out how pages will be setup
void c21(){

    system("cls");
    header("Outside");
        Item gun("Handgun", 50);//initialize handgun
        Item flower("Rose", 0);//initialize flower
        cout << "You leave the room and find yourself in a deep forest, in front of you is a box on the box lies a handgun and a flower" << endl;
        cout << "\n\t |1|> Take the Gun" << endl;
        cout << "\t |2|> Take the Flower" << endl;
        retry:
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice){

            case 1:
                cout << "\nYou take the gun" << endl;
                player.inv.push_back(gun);
                player.inv.push_back(flower);
                //cout << player.inv.size()<<endl;
                player.printInv();
                contin();
                break;

            case 2:
                cout << "\nYou take the flower" << endl;
                player.inv.push_back(flower);
                contin();
                break;

            default:
                cout << "You are doing it wrong, Select a valid option" << endl;
                goto retry;
                break;
        }
}


int main()
{
    header("Darkness");
    cout << "You sit in a dark room a man stand in front of you" << endl;
    cout << "\n\t Voice: Your name, what is it" << endl;
    cin.getline(player.name, 50); //set player name
    cout << "\t Voice: " << player.name << "? what a shit name" << endl;
    contin();

  system("cls");
    header("Darkness");
    //int choiceOne_Path;
    cout << "What would you like to do?" << endl;
    cout << "\t |1|> leave room" << endl;
    cout << "\t |2|> Stay" << endl;
    retry:
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice){
        case 1:
            cout << "\n\t You: I hate you" << endl;
            cout << "\t person: shutup." << endl;
            cout << "You exit the room." << endl;
            contin();
            c21();
        break;

        case 2:
            cout << "\n\t You: ..." << endl;
            cout << "\t person: ..." << endl;
        break;

        default:
            cout << "You are doing it wrong, Select a valid option" << endl;
        goto retry;
        break;
    }
    system("cls");
    cout << "Fin" << endl;


}
