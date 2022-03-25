# ifndef ARTIFICIALPET_H
# define ARTIFICIALPET_H

# define FULL 10

class ArtificialPet {
    public:
        ArtificialPet();
        bool isHungry();
        void feed();
        virtual void play (int minutes);
        int getF ();
        

    protected:
        bool hungry;
        int fullness;
};

# endif
