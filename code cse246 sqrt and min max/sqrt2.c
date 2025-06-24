#include <stdio.h>

double calculate_sqrt(int n) {
    if (n < 0) {
        printf("can't calculate the negative value for square root");
        return -1.0;
    }
     else if (n == 0) {
        return 0.0;
    }
    else {
        int start = 0;
        int end = n;
        double ans = 0.0;


        while (start <= end) {
            int mid = (start + end) / 2;
            if (mid * mid == n) {
                ans = mid;
                break;
            } else if (mid * mid < n) {
                start = mid + 1;
                ans = mid;
            } else {
                end = mid - 1;
            }
        }

        double inc = 0.1;
        for (int i = 0; i < 3; i++) {
            while (ans * ans <= n) {
                ans += inc;
            }
            ans -= inc;
            inc /= 10;
        }

        return ans;
    }
}

int main() {
    int n;
    printf("enter the value: ");
    scanf("%d", &n);

    double result = calculate_sqrt(n);
    if (result != -1.0) {
        printf("square root: %.3f", result);
    }
    return 0;
}

