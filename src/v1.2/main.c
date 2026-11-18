#include <stdio.h>
int main() {
	double outside = 0, inside = 0, bed = 0, other = 0;
	double total = 0;

	printf("outside hours ? ");
	scanf("%lf", &outside);
    if (outside == 0) {
        printf("Outside time must be greater than zero.\n");
        return 1;
    }
    printf("inside hours ? ");
    scanf("%lf", &inside);
    if (inside == 0) {
        printf("Inside time must be greater than zero.\n");
        return 1;
    }
    printf("bed hours ? ");
    scanf("%lf", &bed);
    if (bed == 0) {
        printf("Bed time must be greater than zero.\n");
        return 1;
    }
    printf("other hours ? ");
    scanf("%lf", &other);
    if (other == 0) {
        printf("Other time must be greater than zero.\n");
        return 1;
    }

    total = outside + inside + bed + other;
    if (total == 0) {
        printf("Total time must be greater than zero.\n");
        return 1;
    }

	printf("\nPercent of your recorded time:\n");
	printf("Outside: %.1f%%\n", outside * 100.0 / total);
	printf("Inside:  %.1f%%\n", inside * 100.0 / total);
	printf("In bed:  %.1f%%\n", bed * 100.0 / total);
	printf("Other:   %.1f%%\n", other * 100.0 / total);

    printf("eventually.. you going to spend %.1f%% of your time outside entire life\n", outside * 100.0 / total);
    printf("eventually.. you going to spend %.1f%% of your time inside entire life\n", inside * 100.0 / total);
    printf("eventually.. you going to spend %.1f%% of your time in bed entire life\n", bed * 100.0 / total);
    printf("eventually.. you going to spend %.1f%% of your time doing other things entire life\n", other * 100.0 / total);

	return 0;
}