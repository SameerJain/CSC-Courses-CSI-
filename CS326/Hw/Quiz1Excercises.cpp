#include <iostream>
using namespace std;

struct WeatherType
{
    int avgHiTemp;
    int avgLoTemp;
    float actualrain;
    float recordrain;
};

class DateType
{
public:
    void Initialize(int, int, int);
    int GetYear() const;
    int GetMonth() const;
    int GetDay() const;

private:
    int m_year;
    int m_month;
    int m_day;
};

int main()
{
    // A

    // a
    typedef struct WeatherType WeatherListType[12];

    // b
    // memory in WeatherListType = 192    16 * 12  (1 int is 4, 1 float is 4)

    // c
    WeatherListType yearlyWeather;

    // d
    yearlyWeather[6].actualrain = 1.05;

    // e
    WeatherListType *pWeather;
    pWeather = (WeatherListType *)sizeof(WeatherListType);

    // f
    pWeather[0]->actualrain = 1.05;

    // g // less memory is allocated, 4

    // B

    // a
    DateType x;
    x.GetDay();

    DateType day1, day2;

    day1.Initialize(10, 12, 89);

    cout << day1.GetDay();
    cout << day1.GetMonth();
    day2.Initialize(12, 16, 89);
    if (day1.GetYear() == day2.GetYear())
    {
        cout << "They are in the same year" << endl;
    }
// 10 , 12 , they are in the same year

    return 0;
}