#include<stdio.h>
#include<math.h>

int main() {

    int input[2], sigmasum, sigmapow = 0;
    float Average = 0, SD;

    scanf("%d %d", &input[0], &input[1]);

    if (input[0] > input[1]) {
        for (int i = input[0]; i >= input[1];i--) {
            Average += i;
            printf("%d ", i);
            int x = pow(i, 2);
            sigmapow += x;
        }
        sigmasum = Average;
        Average = Average / (input[0] - input[1] + 1);
        printf("\nAverage = %.1f", Average);
        int n = (input[0] - input[1] + 1);
        SD = sqrt(((n * sigmapow) - (pow(sigmasum, 2))) / (n * (n - 1)));
        printf("\nSD = %.2f", SD);
    }
    else {
        for (int i = input[0]; i <= input[1];i++) {
            Average += i;
            printf("%d ", i);
            int x = pow(i, 2);
            sigmapow += x;
        }
        sigmasum = Average;
        Average = Average / (input[1] - input[0] + 1);
        printf("\nAverage = %.1f", Average);
        int n = (input[1] - input[0] + 1);
        SD = sqrt(((n * sigmapow) - (pow(sigmasum, 2))) / (n * (n - 1)));
        printf("\nSD = %.2f", SD);
    }
}