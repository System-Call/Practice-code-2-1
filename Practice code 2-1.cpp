#include<stdio.h>
#include<malloc.h>
#define Maxsize 10
typedef int ElemType;
typedef struct
{
	ElemType data[Maxsize];
	int length;
}Sqlist;
void Createlist(Sqlist*& L, ElemType a[], int n)//由数组元素a[..]创建一个顺序表
{
	int i = 0, k = 0;
	L = (Sqlist*)malloc(sizeof(Sqlist));
	while (i<n)
	{
		L->data[k] = a[i];
		k++;i++;
	}
	L->length = k;
}
void Initlist(Sqlist*& L)//创建一个空的线性表（线性表长度为0）
{
	L = (Sqlist*)malloc(sizeof(Sqlist));
	L->length = 0;
}
void Destorylist(Sqlist*& L)//销毁线性表
{
	free(L);
}
bool Listempty(Sqlist* L)//判断线性表是非为空表（长度是否为0）
{
	return (L->length==0);
}
int Listlength(Sqlist* L)//得到线性表的长度
{
	return (L->length);
}
void Displist(Sqlist* L)//输出线性表
{
	for (int i = 0;i < L->length;i++)
	{
		printf_s("%d ", L->data[i]);
	}
	printf_s("\n");
}
bool Getlist(Sqlist* L, int i,ElemType &e)//用e返回线性表中第i个元素的值
{
	if (i<0 || i>=L->length)
		return false;
	else
	{
		e = L->data[i];
		return true;
	}
}
int Locatelist(Sqlist* L, ElemType e)//查找表中数值与e相同的数据项，并返回逻辑序号，如果不存在返回0
{
	int i = 0;
	while (L->data[i] != e && i < L->length)
		i++;
	if (i == L->length)
		return 0;
	else 
		return i+1;
}
bool Listinsert(Sqlist*& L, int i,ElemType e)
{

}
int main()
{
	void Createlist(Sqlist * &L, ElemType a[], int n);
	bool Getlist(Sqlist * L, int i, ElemType & e);
	void Displist(Sqlist * L);
	int b[Maxsize] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a;
	Sqlist *L;
	Createlist(L, b, Maxsize);
	Displist(L);
	Getlist(L, 10, a);
	printf_s("%d %d", a,L->length);
}