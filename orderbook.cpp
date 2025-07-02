#include "orderbook.hpp"
#include <iostream>

void Orderbook::addOrder(const Order& order) {
    if (order.side == "buy") {
        buyOrders.push_back(order);
    } else {
        sellOrders.push_back(order);
    }
    matchOrders();
}

void Orderbook::matchOrders() {
    while (!buyOrders.empty() && !sellOrders.empty()) {
        Order& buy = buyOrders.front();
        Order& sell = sellOrders.front();

        if (buy.type == OrderType::Market || sell.type == OrderType::Market || buy.price >= sell.price) {
            int tradeQty = std::min(buy.quantity, sell.quantity);
            std::cout << "Trade: " << tradeQty << " @ " << (buy.type == OrderType::Market ? sell.price : buy.price) << "\n";

            buy.quantity -= tradeQty;
            sell.quantity -= tradeQty;

            if (buy.quantity == 0) buyOrders.pop_front();
            if (sell.quantity == 0) sellOrders.pop_front();
        } else {
            break;
        }
    }
}

void Orderbook::printOrderbook() {
    std::cout << "\n--- BUY ORDERS ---\n";
    for (auto& o : buyOrders)
        std::cout << o.quantity << " @ " << o.price << "\n";

    std::cout << "\n--- SELL ORDERS ---\n";
    for (auto& o : sellOrders)
        std::cout << o.quantity << " @ " << o.price << "\n";
}
