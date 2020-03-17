#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

    /***************************************Objects and Characters*********************/
//Player class
class Player{
    public:
        char name[50];

    };

class Item{ // basic item characteristics
    public:
        bool got = false;

        void get(){
        got = true;
        }
};


class Gun : public Item{

};




    /******************************************STORY************************************/
void header(string place){
    cout << "\n----------------------"<< place <<"----------------------" << endl;

}

void contin(){ // End of Page Message
    cout << "\n----------------------Press any key to continue----------------------" << endl;
    _getch();
}

int choice;

void c11(){

    system("cls");
    header("Outside");
        Gun handgun;
        cout << "You leave the room and find yourself in a deep forest, in front of you is a box on the box lies a handgun and a flower" << endl;
        cout << "\n\t |1|> Take the Gun" << endl;
        cout << "\t |2|> Take the Flower" << endl;
        retry:
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice){

            case 1:
                cout << "\nYou take the gun" << endl;
                handgun.get();
                cout<< handgun.got << endl;
                contin();
                break;

            case 2:
                cout << "\nYou take the flower" << endl;
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
    Player player; //create player
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
            c11();
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
