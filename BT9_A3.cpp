#include<iostream>
using namespace std;

int *x(int p){
    int *p1 = new int;
    *p1= 10;
    *p1 += p;
    delete p1;
    return p1;

}
int main()
{
int *p = new int;
*p = *x(12);
cout<<*p;

}
//kết quả theo dự định sẽ là 22 nhưng thực tế

// chương trình không kiểm soat được con trỏ p2 sẽ trỏ tới đâu vì p đã bị giải phóng


/* lệnh cerr cuối cùng không in ra như mong muốn do c không
được cấp phát new char nên không delete c.*/
