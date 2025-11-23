//#include<iostream>
//#include<array>
//using namespace std;
//
//int main()
//{
//    srand(time(0));
//    array<int, 10> arr;
//    int i = 0;
//    for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
//    {
//        arr[i] = rand() % 20;
//        i++;
//    }
//
//    for (int i = 0; i < arr.size(); i++)
//    {
//        cout << arr[i] << "\t";
//    }
//    cout << endl;
//
//    cout << arr.at(1) << endl;
//
//
//}


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = { 1, 2, 3, 4, 5 };
    for (auto ptr = vec.begin(); ptr != vec.end(); ptr++)
    {
        cout << *ptr << "\t";
    }

    for (int i = 0; i < 5; i++)
    {
        vec.push_back(rand() % 100);
    }
    cout << endl << endl;
    for (auto ptr = vec.begin(); ptr != vec.end(); ptr++)
    {
        cout << *ptr << "\t";
    }

    for (int i = 0; i < 10; i++)
    {
        vec.insert(vec.begin(), rand() % 100);
    }
    cout << endl << endl;
    for (auto ptr = vec.begin(); ptr != vec.end(); ptr++)
    {
        cout << *ptr << "\t";
    }

}