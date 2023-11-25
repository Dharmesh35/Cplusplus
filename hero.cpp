class hero{

    private:
    int health;

    public:
    char level;
    char *name;

    hero() {
      std::cout<<"constructer called"; 
      name= new char[100] 
    }

    hero( hero& temp){
        this->level= temp.level;
    }

    hero( int health, char level ){
        this->level=level;
        this->health=health;
    }

    void print(){
        std::cout<<level<<" ";
        std::cout<<health<<" ";
    }

    int gethealth(){
        return health;
    }
    
    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char l){
        level = l;
    }

    void setname( char name[]){
        strcopy(this->name,name)
    }
};