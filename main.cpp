#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//classes - Mikita Hnidzin
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


//classes - Hanna Shaparava

class Calculator{
    double totalAmount;
    int numberOfDays;
    double percent;
    double totalResult;

public:
    Calculator(double totalAmount, int numberOfDays, double percent){

    }
    //урок 90 - дружественные методы, получить доступ к private полям класса account
    //функция и параметры
};

class contribution : public Calculator{
    double amount;
    /*na ile dni symma wklada - kolic dniej вклада и создать тип вклада. (возвратный, безвозвратный - разные проценты). опираясь на эти данные показывает  сколько денег выйдет из этого вклада*/
//функция, которая возвращает рассчет вклада
//функция перезаписывает в функцию род класса - рассчитать

};

class countCredit : public Calculator{
    double creditResult;
    //возращает сколько в месяц нужно выплачивать
    //принимает параметры: какая сумма, на сколько дней, тип кредита (от этого - процент, а его процент - в зависимости от количества дней)
};

//не идет от калькул
class ExchangeMoney {
private:
    double eurBuy;
    double eurSel;
    double plnBuy;
    double plnSel;

    double exchangeResult;

public:

    ExchangeMoney(double eurB, double eurS, double plnB, double plnS){
        eurBuy = eurB;
        eurSel = eurS;
        plnBuy = plnB;
        plnSel = plnS;
    }






};

int main() {

    return 0;
}
