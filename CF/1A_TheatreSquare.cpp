#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long n, m, a;
    cin >> n >> m >> a;
    long double x = ceil(m * 10.0 / 10.0 / a);
    long double y = ceil(n * 10.0 / 10.0 / a);
    long double q = x * y;
    cout.precision(25);
    cout << q << endl;

    return 0;
}
