#include <stdio.h>

int main() {

    int fingerprint_match, retinal_match, access_card_valid;

    printf("Enter Fingerprint Match: ");
    scanf("%d", &fingerprint_match);

    printf("Enter Retinal Match: ");
    scanf("%d", &retinal_match);

    printf("Enter Access Card Validity: ");
    scanf("%d", &access_card_valid);

    if ((fingerprint_match + retinal_match + access_card_valid) >= 2) {
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }

    return 0;
}
