#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);
    while (n--) {
        int n1, n2;
        scanf("%d %d", &n1, &n2);
        if (n1 < n2) printf("<\n");
        else if (n1 > n2) printf(">\n");
        else printf("=\n");
    }
    return 0;
}
