#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcde"))
//因为strlen函数返回的值是无符号的数字，所以输出的值一定是>=0的数字
//	{
//		printf("大于\n");
//	}
//	else
//	{
//		printf("小于\n");
//	}
//	return 0;
//}


//strcpy函数的使用与原理



//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
////源字符串必须以 '\0' 结束
////会将源字符串中的 '\0' 拷贝到目标空间
////目标空间必须足够大，以确保能存放源字符串
////目标空间必须可变
//
//
////模拟实现strcpy，字符串的拷贝
//char* my_strcpy(char *arr1,const char *arr2)
//{
//	assert(arr1&&arr2 != NULL);
//	while (*arr1++ = *arr2++)// * 的优先级更高
//	{
//		;
//	}
//	*arr1 = *arr2;
//}
//
//int main()
//{
//	char arr1[20] = "################";
//	char arr2[20] = "hello world";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}


//strcat函数的基本原理   字符串的追加



//#include <stdio.h>
//#include <string.h>
//


////源字符串必须以 '\0' 结束
////目标空间必须 有足够的大，能容纳下源字符串的内容
////目标空间必须可修改
//
//
//char* my_strcat(char*arr1,const char*arr2)
//{
//	char*len = arr1;
//	while (*arr1)
//	{
//		arr1++;
//	}
//	while (*arr1++=*arr2++)
//	{
//		;
//	}
//	return arr1;
//}
//
//int main()
//{
//	char arr1[30] = "hello ";
//	char arr2[10] = "world";
//
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}



//strcmp函数的基本原理，字符串的比较

//int my_strcmp(const char*str1, const char*str2)
//{
//	while (*str1==*str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//
//}
//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//int ret = strcmp("abq", "abcdef");
//	
//	int ret = my_strcmp("abh", "aht");
//
//	//字符串的比较，不是比较长度
//	//比较的是字符串内对应的ascii码值
//
//	printf("%d\n", ret);
//	return 0;
//}

//strncpy函数的使用与操作，拷贝n个字符


//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abcedf";
//	strncpy(arr1, arr2, 9);
//	printf("%s\n", arr1);
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[50] = "hello \0####";
//	//strnact函数追加完之后会在后面加上一个'\0'
//	strncat(arr, "abc", 3);
//	printf("%s\n", arr);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int ret=strncmp("abcdef", "abcde", 3);
//	//限制了比较的字符串的个数
//
//	printf("%d\n", ret);
//	return 0;
//}


//strstr函数的基本使用，查找子字符串



//#include <assert.h>
//#include <stdio.h>
//#include <string.h>
//
//
//char*my_strstr(const char*s1, const char*s2)
//{
//	assert(s1&&s2);
//	char *cp = s1;
//	while (*cp)
//	{
//		char*p1=cp;
//		char*p2 = s2;
//		while(*p1!='\0'&&*p2!='\0'&&*p1==*p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[] = "qybdfksdfj";
//	char arr2[] = "q";
//	//char*str=strstr(arr1, arr2);//在arr1中查找arr2第一次出现的位置,打印出来的是arr2首字符在arr1之后的所有字符
//
//	char*str = my_strstr(arr1, arr2);//模拟实现strstr函数的使用
//
//	//如过没有找到就会返回（NULL)
//	printf("%s\n", str);
//	return 0;
//}



//strtok函数的基本使用

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "llw/3359617553/qq/com";//@ .是分隔符
//	char*p = "/";
//	char arr1[40] = { 0 };
//	strcpy(arr1, arr);
//
//	//printf("%s\n", strtok(arr1, p));
//	//printf("%s\n", strtok(NULL, p));
//	//printf("%s\n", strtok(NULL, p));
//	//printf("%s\n", strtok(NULL, p));
//
//	char*ret = NULL;
//	for (ret = strtok(arr1, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}



//strerror函数的基本使用

//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	printf("%s\n", strerror(0));//strerror就是将错误码转换成错误信息
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	//库函数在使用的时候，如果发生错误，就会有对应的错误码
//	//这些错误码会被放在一个全局变量中，errno
//	//#incldue <errno.h>
//
//	return 0;
//}


//#include <errno.h>
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("%s\n", strerror(errno));
//	return 0;
//}

#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("%d\n", isspace(' '));
	return 0;
}







