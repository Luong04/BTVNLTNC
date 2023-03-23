#include<iostream>
using namespace std;

int main( )
{
   /*char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
    */

    //tinh kich thuoc cua kieu int
    /*int a[5] = {4,5,6,12,686};
    for(int *p = a; (*p)!=NULL; p++){
        cout<<(void*) p <<" : "<<*p<<endl;
    }
    return 0;*/
    //nhan xet vi tri cua 2 bien kieu int lien tiep cach nhau 4 byte

    //tuong tu voi kieu double
    double a[5] = {4.54,5.00,6.24345,12.9,686.12};
    double *p = a;
    for(int i = 0 ;i < 5; i ++){
        cout<<(void*) p <<" : "<<(*p)<<endl;
        p++;
    }
    delete p;
    return 0;
}

