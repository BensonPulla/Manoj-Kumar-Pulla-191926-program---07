#include <iostream>
using namespace std;
class TIME
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    friend TIME addtime(TIME t1, TIME t2);
    void gettime(void)
    {
        cout << "enter time" << endl;
        cout << "hours ?" << endl;
        cin >> hours;
        cout << "minutes ?" << endl;
        cin >> minutes;
        cout << "seconds ?" << endl;
        cin >> seconds;
    }
    void settime(void)
    {

        cout << endl;
        cout << "time after add" << endl;
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};
TIME addtime(TIME t1, TIME t2)
{
    TIME result;
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + (result.seconds / 60);
    result.hours = t1.hours + t2.hours + (result.minutes / 60);
    result.minutes %= 60;
    result.seconds %= 60;
    return result;
}
int main()
{
    TIME t1, t2, t3;
    t1.gettime();
    t2.gettime();
    t3 = addtime(t1, t2);
    t3.settime();
    return 0;
}