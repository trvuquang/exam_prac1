# include <iostream>
# include <string>
# include "Furby.cpp"
# include "ArtificialPet.cpp"

using namespace std;

int (main) (){
    ArtificialPet some_pet;
    Furby furby;


    cout << furby.getF() << endl;
    furby.feed();
    cout << furby.getF() << endl;
    furby.feed();
    cout << furby.getF() << endl;
    furby.feed();
    cout << furby.getF() << endl;
    furby.dance(1);
    cout << furby.getF() << endl;
    furby.play(2);
    cout << furby.getF() << endl;
}