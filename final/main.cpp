#include <iostream>
#include <string>
#include <vector>
#include <variant>
#include <stdio.h>
using namespace std;

class Trivia {
    private:
            string question;
            string answer;
            int amount;

    public:
    int total = 0;
    color(string ans1){
        if (ans1 == "blue" || ans1== "Blue") {
            total += 5;
            cout << "yay" << endl;
        }else {
            cout << "Incorrect. The correct answer is: Blue" << endl;
        }
        return 4;
    };
    president(string ans2){
        if (ans2 == "george washington" || ans2== "George Washington" || ans2== "washington" || ans2=="Washington") {
            cout << "Correct" <<endl;
            total += 10;
        } else
            cout<< "Incorrect. The correct answer is: George Washington"<< endl;
        return 4;
    }
    bone(int ans3){
        if (ans3 == 206) {
            cout << "Correct" <<endl;
            total += 15;
        } else
            cout<< "Incorrect. The correct answer is: 206"<< endl;
        return 4;
    }
    state(string ans4){
        if (ans4 == "TN"||ans4 == "Tn"|| ans4 == "tn"|| ans4 == "Tennesse"||ans4 == "tennesse") {
            cout << "Correct" <<endl;
            total += 20;
        }else
            cout<< "Incorrect. The correct answer is: Tennesse"<< endl;
        return 4;
    }
    invent(string ans5){
        if (ans5 == "England"||ans5=="england") {
            cout << "Correct" <<endl;
            total += 50;
        } else
            cout<< "Incorrect. The correct answer is: England"<< endl;
        cout<< "Your game winnings: $"<< total<<endl;
        return 4;
    }
};


int main() {
string ans1, ans2, ans4, ans5;
int ans3;
Trivia game;
    cout << "What color is the sky?" << std::endl;
    cin >> ans1;
    game.color(ans1);
    cout << "What is the name of the first president of the US?" << std::endl;
    cin >> ans2;
    game.president(ans2);
    cout << "How many bones make up an adult human body?" << std::endl;
    cin >> ans3;
    game.bone(ans3);
    cout << "What state is calle the volunteer state?" << std::endl;
    cin >> ans4;
    game.state(ans4);
    cout << "What country was the telescope invented in?" << std::endl;
    cin >> ans5;
    game.invent(ans5);
return 0;
}
