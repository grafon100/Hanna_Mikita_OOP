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
    void countContribution (double monthlyPay, double contribution){
        //variables to hold the monthly pay and the amount of contribution
        cout << "Please, enter the monthly pay:" << endl;
        cin >> monthlyPay;
        cout << endl;


        //calculate and display a 5% contribution
        contribution = monthlyPay * 0.05;
        cout << "5 percent is: " << contribution << " per month" <<endl;

        //calculate and display a 7% contribution
        contribution = monthlyPay * 0.07;
        cout << "7 percent is: " << contribution << " per month" <<endl;

        //calculate and display a 10% contribution
        contribution = monthlyPay * 0.1;
        cout << "10 percent is: " << contribution << " per month" <<endl;
    }


};

class countLoan : public Calculator{

    void countCredit(double loanAmount, double totalAmount, double monthlyAmount){

        int fiveRate = 5, tenRate = 10;
        int fiveYears = 5, tenYears = 10;
        int selection;
        cout << "Please, enter the Loan Amount:" << endl;
        cin >> loanAmount;
        cout << endl;



        cout << "Please, choose the Interest Rate:" << endl;

        cout << "    Enter 1 to choose 5% rate for 10 years:" << endl;
        cout << "or" << endl;
        cout << "    Enter 2 to choose 10% rate for 5 years:" << endl;
        cin >> selection;

        switch(selection){
            case 1:
                cout << "You chose 5% rate for 10 years." << endl << endl;
                cout << "Here's your information: " << endl;
                totalAmount = (tenYears * loanAmount) + (tenYears * loanAmount *(fiveRate/100.00));
                monthlyAmount = totalAmount/(tenYears * 12);

                cout << "Total amount to be paid: " << totalAmount << endl;
                cout << "Monthly amount to be paid: " << monthlyAmount << endl;
                cout << "Your overpayment is: " << totalAmount - loanAmount << endl;
                break;

            case 2:
                cout << "You chose 10% rate for 5 years." << endl << endl;
                cout << "Here's your information: " << endl;
                totalAmount = (fiveYears * loanAmount) + (fiveYears * loanAmount *(tenRate/100.00));
                monthlyAmount = totalAmount/(fiveYears * 12);

                cout << "Total amount to be paid: " << totalAmount << endl;
                cout << "Monthly amount to be paid: " << monthlyAmount << endl;
                cout << "Your overpayment is: " << totalAmount - loanAmount << endl;

            default:
                cout<< "I don't know this type of operation" << endl;
                break;

        }

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
