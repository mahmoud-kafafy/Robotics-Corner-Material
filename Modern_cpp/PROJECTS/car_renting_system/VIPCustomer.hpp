#ifndef VIPCUSTOMER_HPP
#define VIPCUSTOMER_HPP

#include "Customer.hpp"

class VIPCustomer : public Customer {
public:
    VIPCustomer(string n, int i);
    double calculateDiscount(double price) override;
};

#endif
