#pragma once
#include "order.hpp"
#include <deque>
#include <vector>

class Orderbook {
public:
    void addOrder(const Order& order);
    void matchOrders();
    void printOrderbook();

private:
    std::deque<Order> buyOrders;
    std::deque<Order> sellOrders;
};
