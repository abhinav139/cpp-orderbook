#pragma once
#include <string>

enum class OrderType { Market, Limit };

struct Order {
    int id;
    OrderType type;
    std::string side; 
    double price;
    int quantity;
    Order(int i, OrderType t, std::string s, double p, int q)
        : id(i), type(t), side(s), price(p), quantity(q) {}
};
