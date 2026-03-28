#include <bits/stdc++.h>
using namespace std;
enum Choice { ROCK, PAPER, SCISSORS };
int main() {
    
    srand(time(0));

    
    Choice comChoice = static_cast<Choice>(rand() % 3);
    string si;
    cin>>si;
    Choice s;
    cout <<"enter a choice" <<endl;
    if (comChoice == ROCK) {
        cout << "The com chose ROCK" <<endl;
    } else if (comChoice == PAPER) {
        cout << "The com chose PAPER" << endl;
    } else {
        cout << "The comp chose SCISSORS" << endl;
    }

if(si == "ROCK") s = ROCK;
else if(si == "PAPER") s = PAPER;
else si = SCISSORS;

    if(comChoice == s ) {
        cout << "draw"; 
    } else {
        if(comChoice == ROCK && s == PAPER) {
            cout << "you win"<<endl;
        } else  if(comChoice == ROCK && s == SCISSORS) {
            cout << "com win"<<endl;
        } else  if(comChoice == PAPER && s == ROCK) {
            cout << "com win"<<endl;
        } else  if(comChoice == PAPER && s == SCISSORS) {
            cout << "you win"<<endl;
        } else if(comChoice == SCISSORS && s == PAPER) {
            cout <<" com win"<<endl;
        } else if(comChoice == SCISSORS && s == ROCK) {
            cout << "you win"<<endl;
        } else cout<<"something went wrong" <<endl;
    }
}
