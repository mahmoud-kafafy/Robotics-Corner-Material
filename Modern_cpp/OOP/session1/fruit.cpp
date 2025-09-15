#include <iostream>
#include <vector>

class fruit
{
    private:  
    double price; 
    std::string vendor;
    float weight;
    
    public:
    fruit ()   //default constructor
    {
        std::cout << " I am Default constructor" <<std::endl;
        price = 10;
        vendor = "3am ahmed";
        weight = 5;
    }
    fruit (double p , std::string v , float w)   //paramtrized constructore constructor
    {
        std::cout << " I am paramtrized constructor" <<std::endl;
        price = p;
        vendor = v;
        weight = w;
        
    }

    ~ fruit ()  //automatic call when finish using the object
    {
        std::cout << "I am Destructor" << std::endl;
    }

    void SetWeight(float w)
    {
        weight = w;
    }
    float getWeight()
    {
        return weight;
    }
    void SetPrice(double p)
    {
        price = p;
    }
    double getPrice()
    {
        return price;
    }
    
    double calculateTotalPrice()
    {
        return weight * price;
    }
};


int main()
{
    fruit apple (100,"mahmoud" , 6);   // -> parametrized constructor
    std::cout << apple.getWeight() << " " << apple.getPrice() << std::endl;
    float f;
    std::cin >> f;
    apple.SetWeight(f);
    apple.SetPrice(20);
    //apple.vendor = "3am ahmed";
    double x = apple.calculateTotalPrice();
    std::cout << apple.getWeight() << " " << apple.getPrice() << std::endl;
    std::cout << "Total Price of apple = " << x << std::endl;
    
}