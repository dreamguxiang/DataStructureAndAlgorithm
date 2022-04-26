#include "seqlist.h"

void TestSeqList1() {
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPrint(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPrint(&s1);
	SeqListDestory(&s1);
}

void TestSeqList2() {
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPushFront(&s1, 0);
	SeqListPushFront(&s1, -1);
	SeqListPushFront(&s1, -2);
	SeqListPushFront(&s1, -3);
	SeqListPopFront(&s1);
	SeqListPopFront(&s1);
	SeqListPopFront(&s1);
	SeqListPrint(&s1);
	SeqListDestory(&s1);
}

void TestSeqList3() {
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPushFront(&s1, 0);
	SeqListPushFront(&s1, -1);
	SeqListPushFront(&s1, -2);
	SeqListPopFront(&s1);
	printf("≤È’“0£¨Œª÷√‘⁄ %d\n", SeqListFind(&s1, 0));
	SeqListInsert(&s1, 3, 100);
	SeqListPrint(&s1);
	SeqListDestory(&s1);
}

void TestSeqList4() {
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqLisrErease(&s1, 1);
	SeqListPrint(&s1);
	SeqListDestory(&s1);
}

int main() {
	TestSeqList1(); 
	TestSeqList2();
	TestSeqList3();
	TestSeqList4();
}