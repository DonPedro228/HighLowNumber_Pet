# PairLong – Custom Integer Arithmetic with High/Low Representation

This project implements a custom integer type using a pair of integers to represent the high and low parts of a large number. It serves as a foundational exercise in object-oriented programming, operator overloading, and manual arithmetic handling in C++.

## 📦 Features

- `Pair` class to store two integers and perform simple pair arithmetic.
- `Long` class (container for `Pair`) that represents large numbers using:


- Operator overloading:
- `+` for addition
- Methods:
- `subtract()` for subtraction
- `multiply()` for multiplication
- Simple base overflow handling logic
- Unit tests using Visual Studio Unit Testing Framework

## ⚙️ Use Case

This library can be used as an educational tool to understand:
- Custom number systems
- How large number types (like BigInteger) might work internally
- Base representation and overflow logic

## 🧠 Concept

The `Long` number is stored as two integers:
- `first` — the high (more significant) part
- `second` — the low (less significant) part
- Example:  
If `BASE = 100000`, then:  


## 🧪 Testing

Unit tests are included using Visual Studio Test Framework:
- Addition test
- Subtraction test
- Multiplication test

## 🚀 Getting Started

To build and test the project:
1. Open the solution in Visual Studio
2. Build the project
3. Run unit tests

## 📁 Project Structure

- `Pair.h/.cpp` – defines the `Pair` class
- `Long.h/.cpp` – defines the `Long` class
- `main.cpp` – optional manual test runner
- `UnitTests` – contains tests

## 🧑‍💻 Author

Pet project by a C++ enthusiast to deepen understanding of arithmetic logic and class design.

