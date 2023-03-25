#include<iostream>
using namespace std;

int getsize(const char *a)
{
	int count = 0;
	int i = 0;
	while(a[i]) {
		count++;
		i++;
	}
	return count;
}
char* reverse(const char *a)
{
	char c;
	int length = getsize(a);
	char* cpy = new char[length];
	for( int i = 0 ; i < length; i++) {
		c = a[i];
        cpy[i] = a[length - 1 -i] ;
	}
	cpy[length] = '\0';
	return cpy;
	delete cpy;
}

void delete_char(char *a, char c)
{
	int n = getsize(a);
	for( int i = 0 ; i < n ; i++) {
		while(a[i] == c) {
			n--;
			for ( int j = i; j < n+1; j ++) {
				a[j] = a[j+1];
			}
		}
	}
}

void pad_right(char* a, int n)
{
	int length = getsize(a);
	if (length < n) {
		while(length < n) {
			*(a + length) = ' ';
			length ++;
		}
	}
}

void pad_left(char* &a, int n)
{
	int length = getsize(a);
	while(length < n) {
		length++;
		for(int i = length - 1 ; i >0; i--) {
			a[i] = a[i-1];
		}
		a[0] = ' ';
	}
}

void truncate(char *a, int n)
{
	int length = getsize(a);
	while(length >= n) {
		*(a+length) = ' ';
		length --;
	}
}

bool is_palindrome(char* a)
{
	int n = getsize(a);
	int check = 0 ;
	for( int i = 0 ; i < n ; i ++) {
		if(a[i] != a[n -1- i]) check = 1;
	}
	if(check == 1) return false;
	else return true;
}

void trim_left(char* a)
{
	int n = getsize(a);
	while (a[0]==' '){
		for( int i = 0; i < n+1; i++){
			a[i] = a[i+1];
		}
		n--;
	}
}

void trim_right(char* a)
{
	int n = getsize(a);
	while (a[n-1]==' '){
		for( int i = n-1; i >= 0; i--){
			a[i] = a[i-1];
		}
		n--;
	}
}

int main()
{
	const char *a = "I want to kiss you!";
	char* x =reverse(a);
	//delete_char(a,'x');
	//pad_left(a,40);
	//pad_right(a,40);
	//truncate(a,n);
	//trim_left(a);
	//trim_right(a);

	int n = getsize(x);
	int i = 0;
	while(*(x+i)) {
		cout<< *(x+i);
		i++;
	}
	//if(is_palindrome(a))cout<<"true ne";
	delete [] a;
	return 0;
}
