#include <bits/stdc++.h>
using namespace std;

class MenuItem
{
private:
    int item_id;
    double price;
    string name, description, category;

public:
    MenuItem(int id, string n, string desc, double p, string cat)
    {
        item_id = id;
        name = n;
        description = desc;
        price = p;
        category = cat;
    }
    int getItemId(){
        return item_id;
    }
    string getName()
    {
        return name;
    }
    string getDesc()
    {
        return description;
    }
    string getCategory()
    {
        return category;
    }
    double getPrice()
    {
        return price;
    }

    void setName(){
        
    }
};

class Order
{
private:
    int order_id;
    int customer_id;
    string date;
    string time;
    string status;
    vector<MenuItem> items;

public:
    Order(int id, int cust_id, string d, string t, string s):order_id(id),customer_id(cust_id),date(d),time(t){}
};

class Customer
{
private:
    int customer_id;
    string name;
    string phone_number;
    string email;
    string address;

public:
    Customer(int id, string n, string phone, string e, string addr)
    {
        customer_id = id;
        name = n;
        phone_number = phone;
        email = e;
        address = addr;
    }
};