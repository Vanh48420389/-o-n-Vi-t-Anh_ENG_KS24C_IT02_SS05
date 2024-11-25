#include <stdio.h>

int main() {
	
    int choice;
    printf("\nCALCULATOR\n");
    printf("1. tong 2 so\n");
    printf("2. hieu 2 so\n");
    printf("3. tich 2 so\n");
    printf("4. thuong 2 so\n");
    printf("5. thoat\n");
    printf("chon: ");
    float n1, n2;

    while (1) {
        
        scanf("%d", &choice);

        if (choice == 5) {
            printf("thoat.\n");
            break; 
        }
        printf("nhap so thu nhat: ");
        scanf("%f", &n1);
        printf("nhap so thu hai: ");
        scanf("%f", &n2);

        switch (choice) {
            case 1:
                printf("tong cua %.2f và %.2f la: %.2f\n", n1, n2, n1 + n2);
                break;
            case 2:
                printf("hieu cua %.2f và %.2f la: %.2f\n", n1, n2, n1 - n2);
                break;
            case 3:
                printf("tich cua %.2f và %.2f la: %.2f\n", n1, n2, n1 * n2);
                break;
            case 4:
                if (n2 != 0) {
                    printf("thuong cua %.2f và %.2f la: %.2f\n", n1, n2, n1 / n2);
                } else {
                    printf("ko the chia cho 0.\n");
                }
                break;
            default:
                printf("lua chon ko phu hop , chon lai :");
                break;
        }
    }

    return 0;
}

