#include <iostream>

using namespace std;

class keyboard 
{
public:
    string switchType;
    bool lubed;
    float size;
    string layout;
    
    void print_details()
    {
        cout << "switch: " << switchType << endl;
        cout << "lubed? "  << lubed << endl;
        cout << "layout: " << layout << endl;
    }
    //setter function for cost variable
    void set_cost(int potential_cost)
    {
        if (potential_cost < 0) cost = 0;
        else cost = potential_cost;
    }
    //setter funtion for cost variable
    int get_cost()
    {
        return cost;
    }
    //getter function to get discounted price
    void print_discount(float discount)
    {
        cout << "price after discount is: " << calculate_discount(discount) << endl;
    }
private:
    //cost decalred as private to prevent stupid values being assigned to cost. like 34rs
    int cost;

    float calculate_discount(float discount)
    {
        float discounted_price = cost - (discount/100 * cost);
        return discounted_price;
    }
};

int main()
{
    keyboard tvsgold;
    tvsgold.switchType = "chery mx red";
    tvsgold.lubed = false;
    tvsgold.size = 100;
    tvsgold.layout = "ISO";
    tvsgold.print_details();
    tvsgold.set_cost(1300);
    cout << "cost of tvs gold is: " << tvsgold.get_cost() << endl;
    tvsgold.print_discount(50);

}