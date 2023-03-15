#include<string>
#include<iostream>
using namespace std;

char* weird_string() { 
   char c[] = "12334345";
   return c; 
}

int main(){
	char *p = new char[100];
	p = weird_string();
	cout<<sizeof p;
	for(int i = 0 ; i < sizeof(p);i++)cout<<*(p+i);
	//thuc ra sizeof p cũng bị lỗi vì nó gán một giá trị ngẫu nhiên bởi c đã bị xóa 
	return 0;
}