#include <iostream>
using namespace std;

int main() {
    double height;      // 身長
    double weight;      // 体重
    double bmi;         // BMI

    // キー入力をheightに格納する
    cout << "身長(m)を入力して下さい：";
    cin >> height;

    //  キー入力をweightに格納する
    cout << "体重(kg)を入力して下さい：";
    cin >> weight;

    // 身長と体重からBMIを計算する
    bmi = weight / height / height;

    // BMIを画面に表示する
    cout << "あなたのBMIは、" << bmi << "です。" << endl;

    return 0;
}