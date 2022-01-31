#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> nums;

/* Напишите программу, которая запрашивает у пользователя число,
а затем выводит список всех делителей этого числа.
Делитель — это число, на которое делится делимое.
Например, 14 — это делитель 28,
потому что 28 / 14 не имеет остатка. */


class Math{
public:
    void MainMenu(){
        cout << "1. Enter a number\n2. Exit\n";
        int a;
        cout << "Enter: ";
        cin >> a;
        if (a==1) {
            system("cls");
            choose();
        }
        else if (a==2) {
            system("close");
        }
        else {
            system("cls");
            MainMenu();
        }
    }
    void choose(){
        int number;
        cout << "Enter your number: ";
        cin >> number;
        if (number < 0) {
            system("cls");
            choose();
        }
        for (int i = 1;i * i <= number;i++) {
            if(number % i == 0)
            {
                if(i * i != number)
                    nums.push_back(i);
                nums.push_back(number / i);
            }
        }
        sort(nums.begin() , nums.end());
        for(int i = 0;i < (int)nums.size();i++)
            cout << nums[i] << " ";


    }

};






int main()
{
    ios::sync_with_stdio(0);//ускоряет при чтении cin , cout
    Math Menu;
    Menu.MainMenu();
    return 0;
}
