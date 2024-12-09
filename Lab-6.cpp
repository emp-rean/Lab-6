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
const short N_MAX = 1000;
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
            }
            Num_minI /= 10;
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
            }
            Num_minJ /= 10;
        }
        short dJ =  Num_minJ % 10;
        if (minJ > Num_minJ % 10)
        {
            minJ =  dJ;
        }        
        if  ((sumI > sumJ) || 
            (sumI == sumJ && minI > minJ) || 
            (sumI == sumJ && minI == minJ && mas[i] > mas[j]))
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
short matrix[100][100];
short r,c;
cout << "Enter matrix rows and columns: ";
cin >> r >> c;
for (short i=0; i<r; i++)
    for (short j=0; j<c; j++)
        cin >> matrix[i][j];
short multiple, t;
short result = 1;
for (short j=0; j<c; j++)
{
    multiple = 1;
    for (short i=0; i<r; i++)
        {
        multiple *= matrix[i][j];
        }
if (multiple > result)
{
result = multiple;
t = j;
}
}
for (short i=0; i<r; i++)
{
    matrix[i][t] = matrix[i][t] + 3;
}


for (short i=0; i<r; i++)
{
    for (short j=0; j<c; j++)
        cout << matrix[i][j] << " ";
cout << endl;
}

}

void prog4() {
const short N_MAX = 20000;
short mas[N_MAX];
short n;
cout << "Enter massive long: ";
cin >> n;
cout << "Enter " << n << " numbers" << endl;
for(short i=0;i<n;i++)
    cin >> mas[i];
// Удаление
for (short i=0; i<n; i++)
{
    short sum = 0;
    short Num = mas[i];
    while (Num > 0)
    {
        sum += Num % 10;
        Num /= 10;
    }
    if (sum == 7)
    {
        for (short j=i; j<n - 1; j++)
        {
            mas[j] = mas[j+1];
            n--;
            i--;
        }
    }
}
    //Дублирование
for (short i=0; i<n; i++)
{
    short Num = mas[i];
    short d1 = 0,d2 = 0,d3 = 0,d4 = 0,d5 = 0,d6 = 0,d7 = 0,d8 = 0,d9 = 0,d0 = 0;
    while (Num > 0)
    {
        short D = Num % 10;
        switch (D)
        {
            case 1: d1 += 1; break;
            case 2: d2 += 1; break;
            case 3: d3 += 1; break;
            case 4: d4 += 1; break;
            case 5: d5 += 1; break;
            case 6: d6 += 1; break;
            case 7: d7 += 1; break;
            case 8: d8 += 1; break;
            case 9: d9 += 1; break;
            case 0: d0 += 1; break;
        }
        Num /= 10;
    }

    if (d1 || d2 || d3 || d4 || d5 || d6 || d7 || d8 || d9 || d0 >= 2)
    {
        for (short j=n; j>i; j--)
            mas[j] = mas[j - 1];
        i++;
        n++;
    }
}
cout << ": ";
for(short i=0;i<n;i++)
    {
        cout << mas[i] << "  ";
    }
}

int main() {
prog1();
prog2();
prog3();
prog4();
}
