#include <exception>
#include <string>

namespace ne_pp::estac {
class ObserverException : public std::exception {
    private:
        std::string message;

    public:
        ObserverException(const std::string& message)
            : message(message) {}
        
        const char* what() const noexcept override {
            return message.c_str();
        }
};

class InvalidTimeStepException : public std::exception {
    private:
        std::string message;

    public:
        InvalidTimeStepException(const std::string& message)
            : message(message) {}
        
        const char* what() const noexcept override {
            return message.c_str();
        }
};
}