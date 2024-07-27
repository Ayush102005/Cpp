#include<iostream>
class Animal {
public:
    virtual void sound() {
        std::cout << "The animal makes a sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        std::cout << "The dog barks" << std::endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        std::cout << "The cat meows" << std::endl;
    }
};

int main() {
    Animal* animal = new Dog();
    animal->sound();  // Output: The dog barks

    animal = new Cat();
    animal->sound();  // Output: The cat meows

    return 0;
}