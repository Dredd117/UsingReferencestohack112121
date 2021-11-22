#include <iostream>

using namespace std;

//function that checks the normal account and displays the balance, it also checks mid.
void normCheck(int balance, int mid) {
    if (mid == 0) { //terrorist
        cout << "your balance is " << balance << endl;
    }
    else {//coffee shop
        cout << "your balance is " << balance << endl;
    }
}

// this function checks the hackers bank account and also checks the amount of money compared to mid.
void hackCheck(int& balance, int& hackB, int mid) {
    if (mid == 0) { //terrorist
        cout << "your balance is " << hackB << endl;
    }
    else {//coffee shop
        cout << "your balance is " << balance << endl;
    }
}

int main()
{
    //terrorist Balance 
    int balance = 100000;
    int& rBalance = balance;

    //Juan's coffee Balance 
    int JuanBalance = 100;
    int& rJuanBalance = JuanBalance;

    //this iteration displays the balance as is.
    cout << "Juan checks his balance..." << endl;
    normCheck(JuanBalance, 1);
    cout << "Terrorist checks his balance..." << endl;
    normCheck(balance, 1);

    //this second iteration makes adjustments and then displays the end result.
    cout << "Juan checks his balance again..." << endl;
    hackCheck(rJuanBalance, rBalance, 1);
    cout << "Terrorist checks his balance again..." << endl;
    hackCheck(rBalance, rJuanBalance, 0);

}