#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class Security;
class Account;




class Account{
    friend Security;
private:
    string login;
    string password;
    string name;
    int age;
    int phone;
    double moneyPLN;
    double moneyEUR;


    // конструктор по умолчанию задает параметры
    Account(){
        login = "";
        password = "";
        name = "";
        age = 18;
        phone = 0;
        moneyPLN = 1000;
        moneyEUR = 100;

        countAccount++;
    }


public:
    //колличество всех аккаунтов
    static int countAccount;

    //getter and setter - good example encapsulation
    string getLogin(){
        return login;
    }
    void setLogin(string login){
        this -> login = login;
    }

    string getPassword(){
        return password;
    }
    void setPassword(string password){
        this -> password = password;
    }

    string getName(){
        return name;
    }
    void setName(string name){
        this -> name = name;
    }

    int getAge(){
        return age;
    }
    void setAge(string password){
        this -> age = age;
    }


    int getPhone(){
        return phone;
    }
    void setPhone(string name){
        this -> phone = phone;
    }


};

int Account::countAccount = 0;
