// main.cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;
/**
 * @brief 사용자 정보를 관리하는 클래스입니다.
 * @details 이름과 나이 정보를 저장하고, 인사말을 생성할 수 있습니다.
 */
class User {
private:
    std::string name;
    int age;

public:
    /**
     * @brief User 객체를 생성합니다.
     * @param userName 사용자의 이름.
     * @param userAge 사용자의 나이.
     */
    User(std::string userName, int userAge) : name(userName), age(userAge) {}

    /**
     * @brief User 객체를 멋지게 생성하는 생성자입니다.
     * @param userName 사용자의 이름 (예: "홍길동").
     * @param userAge 사용자의 실제 나이.
     */
    std::string getGreeting() {
        return "안녕하세요, " + name + "님! (" + std::to_string(age) + "세)";
    }
};

int main() {
    User user1("홍길동", 30);
    cout << user1.getGreeting() << endl;
    return 0;
}