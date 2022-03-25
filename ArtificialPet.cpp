# include "ArtificialPet.h"

// initializes a new pet
ArtificialPet::ArtificialPet (){
    fullness = 1;
}

bool ArtificialPet::isHungry (){
    if (fullness < 0){
        hungry = 1;
    }
        
}

void ArtificialPet::feed (){
    fullness = fullness + (10 - fullness)/2 + 1;
}

void ArtificialPet::play (int minute){
    // no general implememtation
}

int ArtificialPet::getF (){
    return fullness;
}