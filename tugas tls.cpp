#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;

float penjumlahan(float num1, float num2)
{
    float plus;
    plus = (num1 + num2) / 1.0;
    return plus;
}
float perkalian(float num1, float num2)
{
    float times;
    times = (num1 * num2) / 1.0;
    return times;
}
float pembagian(float num1, float num2)
{
    float divide;
    divide = (num1 / num2) / 1.0;
    return divide;
}
float pengurangan(float num1, float num2)
{
    float minus;
    minus = (num1 - num2) / 1.0;
    return minus;
}
float perpangkatan(float num1, float num2)
{
    float power;
    power = (pow(num1, num2)) / 1.0;
    return power;
}
float akar_dari(float num1, float num2)
{
    float square_root;
    square_root = (sqrt(num1)) / 1.0;
    return square_root;
}
float sin_dari(float num1)
{
    float sin_;
    sin_ = (sin(num1)) / 1.0;
    return sin_;
}
float cos_dari(float num1)
{
    float cos_;
    cos_ = (cos(num1)) / 1.0;
    return cos_;
}
float tan_dari(float num1)
{
    float tan_;
    tan_ = (tan(num1)) / 1.0;
    return tan_;
}
float asin_dari(float num1)
{
    float asin_;
    asin_ = (asin(num1)) / 1.0;
    return asin_;
}
float acos_dari(float num1)
{
    float acos_;
    acos_ = (acos(num1)) / 1.0;
    return acos_;
}
float atan_dari(float num1)
{
    float atan_;
    atan_ = (atan(num1)) / 1.0;
    return atan_;
}

int main()
{
    float jumlah, num3, num4, kali, bagi, kurang, pangkat, akar, _sin, _cos, _tan, _asin, _acos, _atan;
    int tipe;
    char op, ip, konfirmasi = 'y';
    cout << "operasi tipe apa yang ingin anda gunakan? (1.Aljabar & exponential 2. Trigonometri)" << endl;
    cin >> tipe;
    if (tipe == 1)
    {
        for (konfirmasi = 'y'; konfirmasi == 'y';)
        {
            cout << "masukkan operasi aljabar secara menurun( operator untuk penjumlahan = +, penguarangan = -, perkalian = x, pembagian = /, perpangkatan = ^, akar kuadrat = #,)" << endl;
            cin >> num3;
            cin >> op;
            cin >> num4;
            jumlah = penjumlahan(num3, num4);
            kurang = pengurangan(num3, num4);
            kali = perkalian(num3, num4);
            bagi = pembagian(num3, num4);
            pangkat = perpangkatan(num3, num4);
            akar = akar_dari(num3, num4);
            switch (op)
            {
            case 'x':
                cout << "= " << kali << endl;
                break;
            case '/':
                cout << "= " << bagi << endl;
                break;
            case '+':
                cout << "= " << jumlah << endl;
                break;
            case '-':
                cout << "= " << kurang << endl;
                break;
            case '^':
                cout << "= " << pangkat << endl;
                break;
            case '#':
                cout << "= " << akar << endl;
                break;
            default:
                cout << "tidak bisa dikomputasi karena operator yang digunakan salah" << endl;
                break;
            }
            cout << "apakah masih ingin menggunakan kalkulator operasi aljabar ? (y/n)" << endl;
            cin >> konfirmasi;
            if (konfirmasi == 'y')
            {
                continue;
            }
            else
                ;
            {
                return 0;
            }
        }
    }
    else if (tipe == 2)
        ;
    {
        for (konfirmasi = 'y'; konfirmasi == 'y';)
        {
            cout << "pilih operasi trigonometri yang ingin dicari" << endl;
            cout << "a_sin(n)"
                 << "\td_asin(n)" << endl;
            cout << "b_cos(n)"
                 << "\te_acos(n)" << endl;
            cout << "c_tan(n)"
                 << "\tf_atan(n)" << endl;
            cout << "masukan kode operasi: " << endl;
            cin >> ip;
            cout << "masukkan nilai n: " << endl;
            cin >> num3;
            _sin = sin_dari(num3);
            _cos = cos_dari(num3);
            _tan = tan_dari(num3);
            _asin = asin_dari(num3);
            _acos = acos_dari(num3);
            _atan = atan_dari(num3);
            switch (ip)
            {
            case 'a':
                cout << "hasilnya adalah " << _sin << endl;
                break;
            case 'b':
                cout << "hasilnya adalah " << _cos << endl;
                break;
            case 'c':
                cout << "hasilnya adalah " << _tan << endl;
                break;
            case 'd':
                cout << "hasilnya adalah " << _asin << endl;
                break;
            case 'e':
                cout << "hasilnya adalah " << _acos << endl;
                break;
            case 'f':
                cout << "hasilnya adalah " << _atan << endl;
                break;
            default:
                cout << "tidak bisa dikomputasi karena kode operasi yang diberikan salah" << endl;
                break;
            }
            cout << "apakah masih ingin melanjutkan ? (y/n)" << endl;
            cin >> konfirmasi;
            if (konfirmasi == 'y')
            {
                continue;
            }
            else
                ;
            {
                return 0;
            }
        }
    }
    return 0;
}