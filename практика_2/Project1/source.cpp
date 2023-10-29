#include <stdio.h>
#include <iostream>
int main() {
    int A = -2;
    int B = 5;
    int C = 35;
    int D = 12;
    if (A > B)
    {
        D = A + C - 9;
        if ((C > A) && (A > B))
        {
            B = (A + D) % 9;
            if (A > D)
            {
                B = (D / B) + 6;
                C = (A / B) % 6;
            }
            else
            {
                A = (A / B) + 7;
            }
        }
    }
    else
    {
        if ((A > D) && (A > B))
        {
            A = (D % A) - 9;
            if ((C > B) && (C > A))
            {
                B = C * A + 5;
                A = A + C + 10;
            }
            D = (A * C) % 7;
        }
    }
    std::cout << A << " " << B << " " << C << " " << D;
	return 0;
}
