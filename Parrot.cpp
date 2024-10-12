#include <iostream>
#include <vector>
#include <random>

class Parrot {
    std::vector<std::string> phrases_;
public:
    Parrot(const std::string& phrase) {
        phrases_.emplace_back(phrase);
    }

    void say(int count = 1) const {
        for (int i = 0; i < count; ++i) {
            const std::string& phrase = phrases_[rand() % phrases_.size()];
            std::cout << phrase << " ";
        }
        std::cout << std::endl;
    }

    void setPhrase(const std::string& phrase) {
        phrases_.emplace_back(phrase);
    }
};

int main() {
    Parrot parrot("Hello");
    parrot.say();
    parrot.setPhrase("AAAA");
    parrot.setPhrase("BBBB");
    for (int i = 1; i <= 10; ++i)
        parrot.say(i);
}
