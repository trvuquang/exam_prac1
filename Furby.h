# ifndef FURBY_H
# define FURBY_H

# include "ArtificialPet.h"

class Furby : public ArtificialPet {
    public:
        Furby();
        void dance (int minutes);
        void play (int minutes);
    
    private:
    
};


# endif