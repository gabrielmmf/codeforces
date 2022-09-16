#include <iostream>

using namespace std;

int distance(int x_1, int y_1, int x_2, int y_2)
{
    return abs(x_1 - x_2) + abs(y_1 - y_2);
}

int main()
{
    int n_tests = 0;
    int n, m, s_x, s_y, d = 0;
    int steps, tries, robot_x, robot_y = 0;
    bool reached = false;
    cin >> n_tests;

    for (int i = 0; i < n_tests; i++)
    {
        steps = 0;
        tries = 0;
        reached = false;
        robot_x, robot_y = 1;

        for (int i = 0; i < 5; i++)
        {
            cin >> n >> m >> s_x >> s_y >> d;
        }

        while (robot_x != n or robot_y != m)
        {
            // Tentativa começando na horizontal
            if (tries == 0)
            {
                if (robot_x < n){

                }
                else if (robot_x > n){

                }
                else{
                    
                }
            }
            else
            {
            }
        }
    }
}