#include<bits/stdc++.h>
using namespace std ;

class Time{
    private:
    int hour;
    int mintue;
    int second;

    public:
    Time(int=0,int=0,int=0);
    Time &setime(int,int,int);
    Time &sethours(int);
    Time &setmintues(int);
    Time &setsecond(int);

    int gethours() const;
    int getmintues() const;
    int getsecond() const;

    void printstd() const;
    void printuni() const;
};

Time::Time(int h,int m,int s){
    setime(h,m,s);
}

Time &Time::setime(int hr, int min, int sec){
    sethours(hr);
    setmintues(min);
    setsecond(sec);
    return (*this);
}

Time &Time::sethours(int hu){
    this->hour = (hu>=0&&hu<=24)?hu:0;
    return (*this);
}

Time &Time::setmintues(int mu){
    this->mintue = (mu >= 0 && mu <= 60) ? mu : 0;
    return (*this);
}

Time &Time::setsecond(int su){
    this->second = (su >= 0 && su <=60) ? su : 0;
    return (*this);
}

int Time::gethours() const{
    return hour;
}
int Time::getmintues() const{
    return mintue;
}
int Time::getsecond() const{
    return second;
}

void Time::printstd() const{
    cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << getmintues() << ":"<<setfill('0') << setw(2) << second <<endl;
}

void Time::printuni() const{
    cout << setfill('0') << setw(2) << ((hour==0||hour==12)?hour:hour%12) << ":" << setfill('0') << setw(2) << mintue << ":" << setfill('0') << setw(2) << second<<(hour<12?"AM":"PM") << endl;
}

int main(){
    Time t;
    t.sethours(18).setmintues(30).setsecond(22);
    t.setime(15,45,23);
    t.printuni();    
}
