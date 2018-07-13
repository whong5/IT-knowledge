1. 冒泡排序
  - 依次比较每一对相邻元素，如有必要，交换之。若整趟都没有交换，则排序完成。否则再进行依次扫描。时间复杂度O(n2)

void bubble_sort(int A[], int n)
{
    for (bool sorted = false; (sorted = !sorted); n--) {
        for (int i = 0; i < n - 1; i++) {
            if ( A[i] > A[i+1] ) {
                swap(A[i], A[i+1]);
                sorted = false;
            }
        }
    }
}

void swap(int *a, int *b)
{
    int *temp c;
    a = b, b = c;
}
