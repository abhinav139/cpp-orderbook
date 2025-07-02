#include "orderbook.hpp"
#include <iostream>

int main() {
    Orderbook ob;
    ob.addOrder(Order(1, OrderType::Limit, "buy", 100.0, 10));
    ob.addOrder(Order(2, OrderType::Limit, "sell", 99.0, 5));
    ob.addOrder(Order(3, OrderType::Market, "buy", 0.0, 3));

    ob.printOrderbook();
    return 0;
}
