// publicatons.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

class   publication
{
private:
    string name;
    int year;

public:
    string setName(string sName) {

    };
    string getName() {
        return name;
    };
    int setYear(int sYear) {
        int error_code{0};
        if (year <= 2014 || year > 2023) {
            error_code = -1;
        }
        else {
            year = sYear;
        };
        return  error_code;
    };
    int getYear() {

        return year;
    };
        
};

class book : public publication {
private:
    string ISBN;
    string izd;
    string auth;
    int pubC;
public:
    string setISBN(string sISBN) {

    };
    string getISBN() {
        return ISBN;
    };
    string setizd(string sizd) {

    };
    string getizd() {
        return izd;
    };
    string setauth(string sauth) {

    };
    string getauth() {
        return auth;
    };
    int setpubC(string spubC) {

    };
    int getpubC() {
        return pubC;
    };
   
};

class magazine : public publication {
private:
    string ISBN;
    string izd;
    string auth;
    int number;
    int tom;
    int pubC=200;
    bool scoup;
    bool WoS;
    bool RINC;
public:
    string setISBN(string sISBN) {

    };
    string getISBN() {
        return ISBN;
    };
    string setizd(string sizd) {

    };
    string getizd() {
        return izd;
    };
    string setauth(string sauth) {

    };
    string getauth() {
        return auth;
    };
    int setnumber(string snumber) {

    };
    int getnumber() {
        return number;
    };
    int settom(string stom) {

    };
    int gettom() {
        return tom;
    };
    int setpubC(int spubC) {

    };
    int getpubC() {
        int error_code{ 0 };
        if (pubC) {
            error_code = -2;
        }

        return  error_code;
        return pubC;
    };
    bool setscoup(string sscoup) {

    };
    bool getscoup() {
        return scoup;
    };
    bool setWoS(string sWoS) {

    };
    bool getWoS() {
        return WoS;
    };
    bool setRINC(string sRINC) {

    };
    bool getRINC() {
        return RINC;
    };

};

class article : public magazine {
private:
    string auth;
    int Pstart;
    int Pend;
    bool stat;

public:
    string setauth(string sauth) {

    };
    string getauth() {
        return auth;
    };
    int setPstart(string sPstart) {

    };
    int getPstart() {
        return Pstart;
    };
    int setPend(string sPend) {

    };
    int getPend() {
        return Pend;
    };
    bool setstat(string sstat) {

    };
    bool getstat() {
        return stat;
    };
};

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Hello World!\n";
    publication a;
    magazine aa;
    cout << "Введите год: ";
    int b;
    cin >> b;
    cout<<a.setYear(b);
    cout << aa.getpubC();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
