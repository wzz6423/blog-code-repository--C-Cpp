// 可执行文件及运行结果
//#include <stdio.h>
//
//int Add(int x, int y) {
//	return x + y;
//}
//
//int main() {
//	int ret = Add(3, 5);
//	printf("%d", ret);
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// 第一个C语言程序
//#include <stdio.h>
//
//int main() {
//	printf("Hello World\n");
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// 打印一个字符
//#include <stdio.h>
//
//int main() {
//	printf("%c\n", 'W');
//	printf("%c\n", 87);
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// 打印所有字符
//#include <stdio.h>
//
//int main() {
//	for (int i = 32; i <= 127; ++i) {
//		printf("%c ", i);
//	}
//	printf("\n");
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// 打印字符串
//#include <stdio.h>
//
//int main(){
//	printf("Hello World\n");
//	printf("%s\n", "Hello World");
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// 遇到\0打印停止
//#include <stdio.h>
//
//int main(){
//	printf("Hello World\n");
//	printf("Hello \0World\n");
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// 利用字符数组验证\0在字符串中功能
//#include <stdio.h>
//
//int main(){
//	char arr1[] = { 'a','b','c' };
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char arr1[] = { 'a','b','c','\0'};
//	char arr2[] = "abc";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// 转义字符
//#include <stdio.h>
//
//int main() {
//	printf("abcnnnnnefg\n");
//	printf("\n\n");
//	printf("abc\nnnn\nefg\n");
//	printf("\n\n");
//
//	printf("abc00efg\n");
//	printf("abc0\0efg\n");
//	printf("\n\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	printf("%c\n", '\'');
//	printf("%s\n", "\"");
//	printf("D:\\Test\\Test.c\n");
//	printf("\a");
//	printf("%c\n", '\130'); // 130是八进制 --> 十进制：10 --> ASCII：X
//	printf("%c\n", '\x30'); // x30是十六进制 --> 十进制：48 --> ASCII：0
//
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// 语句
// 空语句
//int main() {
//	; // 空语句
//	return 0;
//}
// 表达式语句
//int main() {
//	int a = 0; // 表达式语句
//	return 0;
//}
// 函数调用语句
//int add(int x, int y) {
//	return x + y;
//}
//int main() {
//	add(2, 3); // 函数调用语句
//	return 0;
//}
// 复合语句
//int add(int x, int y) {
//	return x + y;
//} // 复合语句
//int main() {
//	for (int i = 0; i < 10; ++i) {
//		printf("%d ", i);
//	} // 复合语句
//	printf("\n");
//	return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// 注释
// //
//int add(int x, int y) {
//	return x + y;
//}
//int main() {
//	printf("%d\n", add(2, 3)); // 实现调用加法函数并在控制台打印出计算结果
//	return 0;
//}
// /**/
//int add(int x, int y) {
//	return x + y;
//}
//int main() {
//	printf("%d\n", add(2, 3)); /* 实现调用加法函数并在控制台打印出计算结果 */
//	return 0;
//}