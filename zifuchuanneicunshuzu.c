#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcde"))
//��Ϊstrlen�������ص�ֵ���޷��ŵ����֣����������ֵһ����>=0������
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("С��\n");
//	}
//	return 0;
//}


//strcpy������ʹ����ԭ��



//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
////Դ�ַ��������� '\0' ����
////�ὫԴ�ַ����е� '\0' ������Ŀ��ռ�
////Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
////Ŀ��ռ����ɱ�
//
//
////ģ��ʵ��strcpy���ַ����Ŀ���
//char* my_strcpy(char *arr1,const char *arr2)
//{
//	assert(arr1&&arr2 != NULL);
//	while (*arr1++ = *arr2++)// * �����ȼ�����
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


//strcat�����Ļ���ԭ��   �ַ�����׷��



//#include <stdio.h>
//#include <string.h>
//


////Դ�ַ��������� '\0' ����
////Ŀ��ռ���� ���㹻�Ĵ���������Դ�ַ���������
////Ŀ��ռ������޸�
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



//strcmp�����Ļ���ԭ���ַ����ıȽ�

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
//	//�ַ����ıȽϣ����ǱȽϳ���
//	//�Ƚϵ����ַ����ڶ�Ӧ��ascii��ֵ
//
//	printf("%d\n", ret);
//	return 0;
//}

//strncpy������ʹ�������������n���ַ�


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
//	//strnact����׷����֮����ں������һ��'\0'
//	strncat(arr, "abc", 3);
//	printf("%s\n", arr);
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int ret=strncmp("abcdef", "abcde", 3);
//	//�����˱Ƚϵ��ַ����ĸ���
//
//	printf("%d\n", ret);
//	return 0;
//}


//strstr�����Ļ���ʹ�ã��������ַ���



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
//	//char*str=strstr(arr1, arr2);//��arr1�в���arr2��һ�γ��ֵ�λ��,��ӡ��������arr2���ַ���arr1֮��������ַ�
//
//	char*str = my_strstr(arr1, arr2);//ģ��ʵ��strstr������ʹ��
//
//	//���û���ҵ��ͻ᷵�أ�NULL)
//	printf("%s\n", str);
//	return 0;
//}



//strtok�����Ļ���ʹ��

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "llw/3359617553/qq/com";//@ .�Ƿָ���
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



//strerror�����Ļ���ʹ��

//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	printf("%s\n", strerror(0));//strerror���ǽ�������ת���ɴ�����Ϣ
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	//�⺯����ʹ�õ�ʱ������������󣬾ͻ��ж�Ӧ�Ĵ�����
//	//��Щ������ᱻ����һ��ȫ�ֱ����У�errno
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







