#include <stdio.h>
#include <string.h>

 int main(){

    char Receipt[100] = "";
    char OrderID[20] = "";
    char Date[20] = "";
    int start = 0;
    int end = 0;
    int length = 0;
    printf("Enter OrderID (OrderID:#XXXXX, Date:YYYY-MM-DD): ");
    fgets(Receipt, sizeof(Receipt), stdin);
    Receipt[strlen(Receipt) - 1] = '\0';

    while (Receipt[start] != '#')
    {
        start++;
    }
    
    if (Receipt[start] == '#')
    {
        start++;
        end = start;
        while (Receipt[end] != ',')
        {
            end++;
        }
        length = end - start;
        strncpy(OrderID, Receipt + start, length);
    }

    printf("Order ID: %s\n", OrderID);
    return 0;
}
