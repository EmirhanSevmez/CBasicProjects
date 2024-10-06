#include <stdio.h>

int stringLength(const char *str) {
    const char *ptr = str; // Pointeri ba�lang�� konumuna i�aret ettiriyoruz

    while (*ptr != '\0') {
        ptr++; // Pointer� sonraki karaktere hareket ettiriyoruz
    }

    return ptr - str; // Pointer�n ba�lang�� konumu ile son pozisyonu aras�ndaki fark, yani stringin uzunlu�u
}

int main() {
    char str[100];
    
    printf("Bir string girin: ");
    scanf("%s", str);
    
    int length = stringLength(str);
    
    printf("String uzunlu�u: %d\n", length);

    return 0;
}
