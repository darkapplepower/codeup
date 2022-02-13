#include <stdlib.h>
void merge(int* list, int left, int mid, int right) {
	int len = (right - left + 1);
	int* sorted = (int*)malloc(sizeof(int) * len);
	int l = left, m = mid + 1, k=0;
	while (l <= mid && m <= right) {
		if (list[l] > list[m]) {
			sorted[k++] = list[m++];
		}
		else {
			sorted[k++] = list[l++];
		}
	}
	if (l > mid) {
		for (;m <= right;m++) {
			sorted[k++]=list[m];
		}
	}
	else {
		for (;l <= mid;l++) {
			sorted[k++] = list[l];
		}
	}
	for (int i = 0;i < len;i++) {
		list[i+left] = sorted[i];
	}
	free(sorted);
}
void merge_sort(int* list, int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		merge(list, left, mid, right);
	}
}