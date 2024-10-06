#include <stdio.h>

int stringLength(const char *str) {
    const char *ptr = str; // Pointeri baþlangýç konumuna iþaret ettiriyoruz

    while (*ptr != '\0') {
        ptr++; // Pointerý sonraki karaktere hareket ettiriyoruz
    }

    return ptr - str; // Pointerýn baþlangýç konumu ile son pozisyonu arasýndaki fark, yani stringin uzunluðu
}

int main() {
    char str[100];
    
    printf("Bir string girin: ");
    scanf("%s", str);
    
    int length = stringLength(str);
    
    printf("String uzunluðu: %d\n", length);

    return 0;
}
