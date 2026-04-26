#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Define the transition matrix
    double P[2][2];
    printf("Enter the transition matrix (e.g., 0.7 0.3 0.4 0.6 for a 2x2 matrix):\n");
    scanf("%lf %lf %lf %lf", &P[0][0], &P[0][1], &P[1][0], &P[1][1]);

    // Print the transition matrix
    printf("Transition matrix:\n");
    printf("%f %f\n", P[0][0], P[0][1]);
    printf("%f %f\n", P[1][0], P[1][1]);

    // Define the current state matrix
    float x, y;
    printf("Enter the current state matrix (e.g., 1 0 for state 1):\n");
    scanf("%f %f", &x, &y);

    // Generate the Markov chain
    int n;
    printf("Enter the number of steps to generate:\n");
    scanf("%d", &n);

    printf("State sequence probabilities:\n");
    printf("%f %f\n", x, y);

    for (int i = 1; i <= n; i++)
    {
        // Generate the next state
        // This calculates the matrix multiplication: [x, y] * P
        float new_x = P[0][0] * x + P[1][0] * y;
        float new_y = P[0][1] * x + P[1][1] * y;

        printf("%f %f\n", new_x, new_y);

        x = new_x;
        y = new_y;
    }

    return 0;
}
