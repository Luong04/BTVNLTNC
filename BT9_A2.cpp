#include<iostream>
using namespace std;

int main()
{
  int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p;
*p2 = 100;
 cout << *p2;
 delete p2;

}
// lỗi thứ nhất do p2 không được cấp phát new array nên không delete p2
// lỗi thứ hai là do giải phóng con trỏ p mà con trỏ p2 đang trỏ tới
