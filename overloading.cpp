#include <bits/stdc++.h>
using namespace std;

class Product{
public:
    int product_id;
    double price;
    string name;
    string manufacturing_date;

    Product(int id, double p, string n, string m){
        product_id = id;
        price = p;
        name = n;
        manufacturing_date = m;
    }

    virtual double getDiscount(){ 
        return 0.0;
    }
};

class ConsumableProduct : public Product{
public:
    string expiry_date;

    ConsumableProduct(int id, double p, string n, string m, string e): Product(id, p, n, m), expiry_date(e) {}

    double getDiscount() override{ 
        return price * 0.02;
    }
};

class NonConsumableProduct : public Product{
public:
    NonConsumableProduct(int id, double p, string n, string m): Product(id, p, n, m) {}

    double getDiscount() override{
        return price * 0.04;
    }
};

class Customer{
public:
    string name;
    string address;
    int membership_id; 
    int mobile_number;

    Customer(string n, string a, int m, int mn): name(n), address(a), membership_id(m), mobile_number(mn) {}
};

int main()
{
    vector<Customer> customers;
    customers.push_back(Customer("Don chintu", "sector 39", 1, -1));
    customers.push_back(Customer("Don mintu", "sector 59", 2, -1)); 
    customers.push_back(Customer("Don pintu", "sector 49", -1, 1234));
    customers.push_back(Customer("Don rintu", "sector 69", -1, 5678));

    vector<Product *> products;
    products.push_back(new ConsumableProduct(1, 10.0, "Milk", "2022-03-01", "2022-03-28")); 
    products.push_back(new NonConsumableProduct(2, 5.0, "Soap", "2022-03-01"));
    products.push_back(new ConsumableProduct(3, 25, "Butter", "2022-03-01", "2022-03-28"));
    products.push_back(new NonConsumableProduct(2, 5, "Harpic", "2022-03-01"));

    double total_discount = 0.0;
    Customer *max_discount_customer = nullptr;
    double max_discount = 0.0;

    for (const auto &customer : customers)
    {
        double customer_discount = 0.0;

        for (const auto &product : products){
            customer_discount += product->getDiscount();
        }

        if (customer.membership_id != -1)
        {
            customer_discount += customer_discount * 0.20; // member discount
        }

        total_discount += customer_discount;

        if (customer_discount > max_discount){
            max_discount = customer_discount;
            max_discount_customer = &const_cast<Customer &>(customer);
        }
    }

    cout << "Total discount: " << total_discount << endl;

    if (max_discount_customer != nullptr)
    {
        cout << "Customer with maximum discount: " << max_discount_customer->name << " (" << max_discount_customer->address << ")" << endl;
    }
}
