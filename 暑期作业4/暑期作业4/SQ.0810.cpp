#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void Func(char str_arg[2]){
//	int m = sizeof(str_arg);
//	int n = strlen(str_arg);
//	printf("%d\n", m);
//	printf("%d\n", n);
//}
//int main(void){
//	char str[] = "Hello";
//	Func(str);
//	system("pause");
//}

//int main(){
//	/*int a, x;
//	for (a = 0, x = 0; a <= 1 && !x++; a++){
//		a++;
//	}
//	printf("%d  %d\n", a, x);*/
//	/*int a[5] = { 1, 2, 3, 4, 5 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);
//	int* p3 = (int*)(a + 1);
//	printf("%d,%x,%d\n", p1[-1], p2[0], p3[1]);*/
//	char *str[3] = { "stra", "strb", "strc" };
//	char *p = str[0];
//	int i = 0;
//	while (i < 3){
//		printf("%s ", p++);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//char *myString(){
//	char buffer[6] = { 0 };
//	char *s = "Hello World!";
//	for (int i = 0; i < sizeof(buffer)-1; i++){
//		buffer[i] = *(s + i);
//	}
//	return buffer;
//}
//
//int main(){
//	printf("%s\n",myString() );
//	system("pause");
//	return 0;
//}

//int main(){
//	int i = 1;
//	printf("%d,%d\n", sizeof(i++), i);
//	system("pause");
//	return 0;
//}

//int main(){
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++){
//		a[i] = (char)(-1 - i);
//	}
//	printf("%d\n", strlen(a));
//	system("pause");
//	return 0;
//}

//int fun(char *s){
//	char *p = s;
//	while (*p != '\0'){
//		p++;
//	}
//	return (p - s);
//}
//int main(){
//	printf("%d\n", fun("goodbye!"));
//	system("pause");
//	return 0;
//}

int main(){
	/*unsigned char a = 0xA5;
	unsigned char b = ((~a) >>4) + 1;
	printf("%d\n", b);*/
	const int i = 0;
	int *j = (int*)&i;
	*j = i;
	printf("%d,%d", i, *j);
	system("pause");
	return 0;
}