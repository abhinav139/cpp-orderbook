# 🧾 C++ Order Book Simulator

This project simulates a basic order book — the heart of any financial trading system. It supports both **market and limit orders**, matches using a **FIFO algorithm**, handles **partial/full fills**, and prints the current state of the order book.

> 💹 Perfect for learning trading systems, data structures, or for academic demos.

---

## 🚀 Features

- ✅ FIFO matching engine
- ✅ Market & Limit order support
- ✅ Partial & Full order fills
- ✅ Orderbook state visualization
- ✅ Fast and lightweight (~4ns matching)
- ✅ Unit tests (optional)

---

## 📁 Project Structure

| File            | Description                            |
|-----------------|----------------------------------------|
| `main.cpp`      | Handles user interaction               |
| `order.hpp`     | Defines the `Order` struct             |
| `orderbook.hpp` | Declares the `Orderbook` class         |
| `orderbook.cpp` | Implements matching logic & printing   |
| `unit_tests.cpp`| Unit tests for the order book (optional) |
| `Makefile`      | Simple build script                    |

---

## 🛠️ How to Run

### ▶️ Compile manually (Windows/macOS/Linux)
```bash
g++ -std=c++17 main.cpp orderbook.cpp -o main
./main        # or .\main.exe on Windows
