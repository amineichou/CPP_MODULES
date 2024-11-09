#include <iostream>

using namespace std;



class Person {
    public:
        string name;
        string job;
        int age;
        int *levels;

        Person()
        {
            // this->name = name;
            // this->job = job;
            // this->age = age;
            this->levels = new int;
            // this->levels[0] = age;
        }

        Person(const Person &original)
        {
            this->name = original.name;
            this->job = original.job;
            this->age = original.age;
            this->levels = new int;
            this->levels[0] = original.age;
            cout << "Copy constractor is triggered" << endl;
        }

        ~Person()
        {
            delete [] this->levels;
            this->levels = nullptr;
        }
};

// void lk(void)
// {
//     system("leaks cpp");
// }


int main(void)
{

    // atexit(lk);
    // Person Chef("amine ichou", "chef", 21);

//     Person Chef;
//     Chef.age = 21;
//     Chef.job = "chef";
//     Chef.name = "amine ichou";

//     Person *Chef2 = &Chef;

//     cout << Chef2->name << endl;
//     cout << Chef2->job << endl;
//     cout << Chef2->age << endl;
//     cout << Chef2->levels[0] << endl;
// }

    int a;


    cin >> a;

    cout << a << endl;


}