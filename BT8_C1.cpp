#include<iostream>
using namespace std;
int getsize(char* &a){
    int count = 0;
    while((*a) != '\0'){
        count++;
        a++;
    }
    return count;
}
void reverse(char* &a){
    char *p = a;
    char b[1000];
    int length = getsize(a);
    for(int i = 0 ; i < length; i++){
        b[i] = *(p+length - i -1);
    }
    a = b;
    cout<<b<<endl;
}

void delete_char(char* &a, char c){

}

void pad_right(char* &a, int n){

}

void pad_left(char* &a, int n){

}

void truncate(char * &a, int n){

}

bool is_palindrome(char* &a){

}

void trim_left(char* &a){

}

void trim_right(char* &a){

}

int main(){
    char *c;
    while((*c)!='\0'){
    cin>>*(c+i);
//    reverse(c);

    cout<<getsize(c);
    return 0;
}
