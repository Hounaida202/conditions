#include <stdio.h>

int main() {
    char alpha;
    printf("Taper un alphabet : ");
    scanf("%c", &alpha);

    if ((alpha >= 'A' && alpha <= 'Z') || (alpha >= 'a' && alpha <= 'z')) {
        if (alpha >= 'A' && alpha <= 'Z') {
            printf("C est une MAJUSCULE");
        } else {
            printf("Cest une minuscule");
        }
    } else {
        printf("Ce nest pas une lettre");
    }

}