#include <iostream>
using namespace std;

int sumEvenDigits(const string cardNumber);
int sumOddDigits(const string cardNumber);
int getDigits(const int number);

int main() {
    string cardNumber;
    int result = 0;

    cout<<"Enter Your Credit Card Number: ";
    cin>> cardNumber;
    cout<< endl;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0) {
        cout<<cardNumber<< " is Valid.";
    } else {
        cout<< cardNumber << " is not Valid.";
    }
}

int sumEvenDigits(const string cardNumber) {
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i-=2){
        sum += getDigits((cardNumber[i] - '0') * 2);
    }

    return sum;
}

int sumOddDigits(const string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i -=2){
        sum += getDigits(cardNumber[i] - '0');
    }
    return sum;
}

int getDigits(const int number){
    // 18 % 10 = 8
    return number % 10 + (number / 10 % 10);
}