
#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> stack;

public:

    void push(int value) {
        stack.push_back(value);
    }


    void pop() {
        if (!stack.empty()) {
            stack.pop_back();
        } else {
            std::cout << "Stack is empty. Cannot pop.\n";
        }
    }


    int top() {
        if (!stack.empty()) {
            return stack.back();
        } else {
            std::cout << "Stack is empty.\n";
            return -1;
        }
    }


    bool isEmpty() {
        return stack.empty();
    }


    int size() {
        return stack.size();
    }


    void start() {
        std::cout << "Stack initialized.\n";
    }
};

int main() {
    Stack s;
    s.start();

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Top element: " << s.top() << "\n";
    std::cout << "Stack size: " << s.size() << "\n";

    s.pop();
    std::cout << "Top element after pop: " << s.top() << "\n";
    std::cout << "Stack size after pop: " << s.size() << "\n";

    return 0;
}



