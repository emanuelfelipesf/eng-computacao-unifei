#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Hole
{
    int x, y;
};

double dist(const Hole &a, const Hole &b)
{
    double dx = static_cast<double>(a.x - b.x);
    double dy = static_cast<double>(a.y - b.y);
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    int N;
    cin >> N;

    Hole *holes = new Hole[N];

    for (int i = 0; i < N; i++)
    {
        cin >> holes[i].x >> holes[i].y;
    }

    double ans = 1e100;

    for (int i = 0; i < N; i++)
    {
        double dmax = 0.0;
        for (int j = 0; j < N; j++)
        {
            dmax = max(dmax, dist(holes[i], holes[j]));
        }

        double diameter = 2.0 * (dmax + 2.5);
        ans = min(ans, diameter);
    }

    cout << fixed << setprecision(2) << ans << "\n";

    delete[] holes;
    return 0;
}

