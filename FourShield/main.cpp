#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

    /***************************************Objects and Characters*********************/
//Player class


class Item{ // basic item characteristics
    public:
        int damage;
        string name;

        Item(string nam, int dmg){
            damage = dmg;
            name = nam;

        }

};

class Player{
    public:
        char name[50];

        vector<Item> inv;

        void printInv(){
         cout << "\nINVENTORY \n";
           for (int x = 0; x <= inv.size(); x++)
            cout<< "  " << inv[x].name << endl;
        }

    };





    /******************************************STORY************************************/
void header(string place){
    cout << "\n----------------------"<< place <<"----------------------" << endl;

}

void contin(){ // End of Page Message
    cout << "\n----------------------Press any key to continue----------------------" << endl;
    _getch();
}



/***********INITIALIZE**************/
int choice;
Player player;


//CHOICE 2.1
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
