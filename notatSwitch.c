#include <stdio.h>

int main() {
    int notaNumerike;

    printf("Jepni noten ne forme numerike: ");
    scanf("%d", &notaNumerike);
    
    int pjesaPlote = notaNumerike / 10;

    switch (pjesaPlote) {
        case 10:
        case 9:
            printf("Nota me shkronje eshte: A\n");
            break;
        case 8:
            printf("Nota me shkronje eshte: B\n");
            break;
        case 7:
            printf("Nota me shkronje eshte: C\n");
            break;
        case 6:
            printf("Nota me shkronje eshte: D\n");
            break;
        default:
            printf("Nota me shkronje eshte: F\n");
    }
    return 0;
} 