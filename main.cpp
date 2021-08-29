#include <iostream>

using namespace std;

double fx(double x)
{
    return  1/x;
}

int main()
{
    cout << "Local and End behavior example in C++" << endl << endl;

    double in[] = {0.1, 0.01, 0.001, 0.0001};

    int nAE = sizeof(in) / sizeof(in[0]);

    for(int i = 0; i < nAE; i++)
    {
        cout << in[i] << "\t" << fx(in[i]) << "\t" << (-1 * (fx(in[i]))) <<endl;
    }

    return 0;
}
