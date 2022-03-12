#include <stdio.h>
#include <math.h>
enum month{
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};
struct figure {
    int x1,y1,x2,y2;
    float A;
};
struct bitfield {
    unsigned int DSL: 1;
    unsigned int PPP: 1;
    unsigned int Link: 1;
};
int main() {
    //1
    printf("1.Value = %d\n", July);
    //2
    struct figure Segment;
    Segment.x1 = 0;
    Segment.y1 = 0;
    Segment.x2 = 4;
    Segment.y2 = 4;
    float Length = sqrt(pow(Segment.x2 - Segment.x1, 2) + pow(Segment.y2 - Segment.y1, 2));
    printf("2)Segment length = %f\n", Length);
    //3
    union x {
        struct bitfield status;
        unsigned int i;
    };
    union x bitf;
    scanf("%x", &bitf.i);
    printf("3)Status of ADSL:\n");
    printf("DSL%s\n", (bitf.status.DSL == 1) ? "On" : "Off");
    printf("PPP %s\n", (bitf.status.PPP == 1) ? "On" : "Off");
    printf("Link %s\n", (bitf.status.Link == 1) ? "On" : "Off");
    return 0;
}
