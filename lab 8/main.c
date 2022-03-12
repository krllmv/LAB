#include <stdio.h>
#include <string.h>

int main() {
printf("The length of call in minutes:\n");
int duration;
scanf("%d", &duration);
printf("The cost of the subscription fee:\n");
int cost;
scanf("%d", &cost);
printf("The cost of a minute after the exhaustion of the basic tariff:\n");
int overpayment;
scanf("%d", &overpayment);

int newDuration;
int newCost;
int summary;
if (duration > 499) {
newDuration = duration - 499;
newCost = newDuration * overpayment;
summary = cost + newCost;
printf("Total: %drub", summary);
}
else
printf("Total: %drub", cost);
char *string1[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
char string2[10];
int n;
scanf("%d", &n);
strcpy(string2, string1[n]);
printf("%s\n", string2);

return 0;
}