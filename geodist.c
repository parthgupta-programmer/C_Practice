#include <stdio.h>
#include <math.h>
/*To calculate th Distance between two geographical locations */  
int main()
{
  int d;
  float l1,l2,g1,g2;
  printf("Enter the Latitude and Longitude of 1st Place:");
  scanf("%f %f", &l1,&g1);
  printf("Enter the Latitude and Longitude of 2nd Place:");
  scanf("%f %f", &l2,&g2);
  d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
  printf("Distance in Nautical Miles=%d\n",d);
  return 0;
}
