#include<iostream>
using namespace std;
//li do code chay sai : do ham doi co chi goi ban sao cua x va y nen thay doi trong ban sao khong anh huong toi ban goc
//sua lai : truyen tham chieu
void swap_pointers(char* &x, char* &y)
{
   char *tmp;
   tmp = x;
   x = y;
   y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(s1,s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}
