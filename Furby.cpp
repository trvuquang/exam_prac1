# include "Furby.h"

Furby::Furby (){
    
}

void Furby::play(int minutes){
    fullness -= 2*minutes;
}

void Furby::dance(int minutes){
    fullness -= 3*minutes;
}