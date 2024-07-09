#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int middle;

    printf("Enter five numbers: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
 
    if (a > b) { int temp = a; a = b; b = temp; }
    if (a > c) { int temp = a; a = c; c = temp; }
    if (a > d) { int temp = a; a = d; d = temp; }
    if (a > e) { int temp = a; a = e; e = temp; }
    if (b > c) { int temp = b; b = c; c = temp; }
    if (b > d) { int temp = b; b = d; d = temp; }
    if (b > e) { int temp = b; b = e; e = temp; }
    if (c > d) { int temp = c; c = d; d = temp; }
    if (c > e) { int temp = c; c = e; e = temp; }
    if (d > e) { int temp = d; d = e; e = temp; }

 
    middle = c;
    printf("The middle number is: %d\n", middle);

    return 0;
}
