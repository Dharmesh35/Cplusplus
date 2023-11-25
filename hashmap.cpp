#include<unordered_map>
#include<map>
#include<iostream>
using namespace std;

int main(){
    unordered_map<string,int> mp;
    pair<string,int> p1=make_pair("love",3);    
    mp.insert(p1);
    pair<string,int> p2("me",3000);
    mp.insert(p2);
    cout<<mp["mine"]<<endl;
    cout<<mp.count("mined");
}