#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void prog1(){
    //создание массива
    const short N_MAX = 10000;
    short mas[N_MAX];
    short n;
    cout << "Enter massive long: ";
    cin >> n;
    cout << "Enter " << n << " numbers: " << endl;
    for(short i = 0; i < n; i++)
        cin >> mas[i];

    // обработка
    short counter = 0;
    for(short i = 0; i < n; i++){
    short Number = mas[i];
    short Digit1;
    short Digit2;
    if (Number > 9) {
        while (Number > 0){
            Digit1 = Number % 10;
            Number /= 10;
            Digit2 = Number % 10;
            if (Digit1 == Digit2) {
                continue;
            }
            if (Digit2 == 0 || Digit1 == 0){
                counter += 1;
            }
            if (Digit1 != Digit2) {
                break;
            }
        }
    }
    }
    cout <<"In the massive " << counter << " numbers has equal digits" << endl;

    if (counter >= 3)
    {
        for(short i=0;i<n-1;i++)
            for (short j=i+1;j<n;j++)
                if (mas[i] > mas[j])
                {
                    short tmp = mas[i];
                    mas[i] = mas[j];
                    mas[j] = tmp;
                }
    for(short i=0;i<n;i++)
    {
        cout << mas[i] << " - ";
    }
    cout << endl;
    }
}

void prog2() {
    //создание массива
const short N_MAX = 10000;
cout << "Enter massive long: ";
short n;
cin >> n;
short mas[N_MAX];
cout << "Enter " << n << " numbers" << endl;
    for(short i = 0; i < n; i++)
    {
       cin >> mas[i];
    }
// обработка
for(short i=0;i<n-1;i++)
{
    for (short j=i+1;j<n;j++)
    {
    short sumI = 0;
    short sumJ = 0;
    short NumI = mas[i];
    short NumJ = mas[j];
    short Num_minI = mas[i];
    short Num_minJ = mas[j];
    short minI = 9;
    short minJ = 9;
    while(NumI > 0)
    {
        sumI += NumI % 10;
        NumI /= 10;
    }
    while(NumJ > 0)
    {
        sumJ += NumJ % 10;
        NumJ /= 10;
    }
    while(Num_minI > 9)
    {
        short dI =  Num_minI % 10;
        if (minI > Num_minI % 10)
        {
            minI =  dI;
            Num_minI /= 10;
        }
    }
    short dI =  Num_minI % 10;
    if (minI > Num_minI % 10)
    {
        minI =  dI;
    }
    while(Num_minJ > 9)
    {
        short dJ =  Num_minJ % 10;
        if (minJ > Num_minJ % 10)
        {
            minJ =  dJ;
            Num_minJ /= 10;
        }
    }
    short dJ =  Num_minJ % 10;
    if (minJ > Num_minJ % 10)
    {
        minJ =  dJ;
    }        
    if (sumI > sumJ)
    {
        short tmp = mas[i];
        mas[i] = mas[j];
        mas[j] = tmp;
    }
    else if (sumI == sumJ && minI > minJ)
    {
        short tmp = mas[i];
        mas[i] = mas[j];
        mas[j] = tmp;
     }
    else if (sumI == sumJ && minI == minJ && mas[i] > mas[j])
            {
                short tmp = mas[i];
                mas[i] = mas[j];
                mas[j] = tmp;
            }
    }
}
cout << ": ";
for(short i=0;i<n;i++)
    {
        cout << mas[i] << "  ";
    }

}

void prog3() {

}

int main() {
//prog1();
//prog2();
prog3();
}
