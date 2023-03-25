#include<iostream>
using namespace std;

int getsize(char *a)
{
	int count = 0;
	int i = 0;
	while(a[i]) {
		count++;
		i++;
	}
	return count;
}
void reverse(char *a)
{
	char c;
	int length = getsize(a);
	for( int i = 0 ; i < length/2; i++) {
		c = a[i];
		a[i] = a[length - 1 -i] ;
		a[length - 1 -i] = c;
	}
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
	char *a = new char[1000];
	cin.getline(a,1000);
	
	//reverse(a);
	//delete_char(a,'x');
	//pad_left(a,40);
	//pad_right(a,40);
	//truncate(a,n);
	//trim_left(a);
	//trim_right(a);
	
	int n = getsize(a);
	int i = 0;
	while(*(a+i)) {
		cout<< *(a+i);
		i++;
	}
	//if(is_palindrome(a))cout<<"true ne";
	delete [] a;
	return 0;
}
