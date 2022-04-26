#include "seqlist.h"

void SeqListInit(SL* ps) {
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
void SeqListPrint(SL* ps) {
	for (int i = 0; i < ps->size; ++i) {
		printf("%d ", ps->a[i]);
	}
	printf("size:%d capacity:%d\n",ps->size,ps->capacity);
}
void SeqListDestory(SL* ps) {
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListCheckCapacity(SL* ps) {
	if (ps->size == ps->capacity) {
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL) {
			printf("realloc fail \n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}


void SeqListPushBack(SL* ps, SLDataType x) {
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPopBack(SL* ps) {

	if (ps->size > 0) {
		ps->a[ps->size - 1] = 0;
		ps->size--;
	}
}


void SeqListPushFront(SL* ps, SLDataType x) {
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0) {
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SL* ps) {
	int begin = 1;
	int end = ps->size - 1;
	while (begin <= end) {
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}
	if (ps->size > 0) {
		ps->size--;
	}
}


int SeqListFind(SL* ps, SLDataType x) {

	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}

void SeqListInsert(SL* ps, int pos, SLDataType x) {

	if (pos >= 0 && pos <= ps->size) {
		SeqListCheckCapacity(ps);
		for (int i = ps->size; i > pos; i--) {
			ps->a[i] = ps->a[i - 1];
		}
		ps->a[pos] = x;
		ps->size++;
	}
}

void SeqLisrErease(SL* ps, int pos) {
	if (pos >= 0 && pos <= ps->size) {
		for (int i = pos + 1; i < ps->size; i++) {
			ps->a[i - 1] = ps->a[i];
		}
		ps->size--;
	}
}