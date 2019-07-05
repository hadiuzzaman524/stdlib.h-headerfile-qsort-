#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
using namespace std;
typedef struct
{
   int date;
   int month;
   int year;
   char *name;
}point;

int comp( point a,point b)//correct answer
{
 if(a.date !=b.date)
    return a.date-b.date;
 else if(a.month!=b.month)
    return a.month-b.month;
 else
    return a.year-b.year;
}
/*int comp(const void *a,const void *b)//wrong answer
{
    point *x=(point *)a;
    point *y=(point *)b;
    if(x->date!=y->date)
        return x->date-y->date;
    else if(x->month !=y->month)
        return x->month-y->month;
    else
        return x->year-y->year;
}
/*int comp(int a,int b)
{
    if(a !=b)
        return a>b;
}*/
int main()
{
    point obj[3];
    obj[0].date=5;
    obj[0].month=4;
    obj[0].year=1998;
    obj[0].name="hadi";
    obj[1].date=8;
    obj[1].month=12;
    obj[1].year=1997;
    obj[1].name="ashrafi";
    obj[2].date=9;
    obj[2].month=4;
    obj[2].year=1990;
    obj[2].name="fariha";
 sort(obj,obj+3,comp);
 for(int i=0;i<3;i++)
 {
     cout<<obj[i].date<< "-"<< obj[i].month<< "-"<<obj[i].year<< "  :"<<obj[i].name<<endl;
 }

/*int a[]={4,5,3,6,543,63,24,546,777};
sort(a,a+9,comp);
cout<< "the sortest list is:"<<endl;
for(int i=0;i<9;i++)
cout<<a[i]<< " ";*/



    return 0;
}
