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
     * @brief 환영 인사말을 생성하여 반환합니다.
     * @return std::string 형식의 환영 메시지.
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