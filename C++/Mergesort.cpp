#include <iostream>
#include <stdlib.h>
using namespace std;
/* 初始版本，升序排序 */
/* 时间复杂度：O(nlbn) 将n个待排序记录归并次数为lbn，一趟归并O(n)
   空间复杂度：O(n) 递归栈最大深度为[lbn] + 1 ，而辅助数组大小为n
   稳定：无论最好还是最坏情况时间复杂度都是O(nlbn)
*/
 
void Merge(int *arr, int n)
{
    int temp[n];    // 辅助数组
    int b = 0;  // 辅助数组的起始位置
    int mid = n / 2;    // mid将数组从中间划分，前一半有序，后一半有序
    int first = 0, second = mid;    // 两个有序序列的起始位置
 
    while (first < mid && second < n)
    {
        if (arr[first] <= arr[second])   // 比较两个序列
            temp[b++] = arr[first++];
        else
            temp[b++] = arr[second++];
    }
 
    while(first < mid)              // 将剩余子序列复制到辅助序列中
            temp[b++] = arr[first++];
    while(second < n)
            temp[b++] = arr[second++];
    for (int i = 0; i < n; ++i)    // 辅助序列复制到原序列
        arr[i] = temp[i];
}
 
void MergeSort(int *arr, int n)
{
    if (n <= 1)    // 递归出口
        return;
    if (n > 1)
    {
        MergeSort(arr, n / 2);    // 对前半部分进行归并排序
        MergeSort(arr + n / 2, n - n / 2);    // 对后半部分进行归并排序
        Merge(arr, n);    // 归并两部分
    }
}

 
#define MAX 10           // 随机数的最大数
#define MIN 1            // 随机数的最小数
#define MAXSIZE 10       // 数组大小
#define SORTTIMES 20     // 随机生成数组并进行排序的次数
 
int get_random(int max, int min){
    return (rand() % (max - min + 1)) + min;
}
 
int main(int argc, char *argv[])
{
    int arr[MAXSIZE];
    int i = SORTTIMES;
    while(i--){
        std::cout << std::endl;
        for(int i = 0; i < MAXSIZE; ++i)
        {
           arr[i] = get_random(MAX, MIN); // 生成随机数组
           std::cout << arr[i] << " ";         // TODO ： 输出生成的随机数，可注释掉
        }
            std::cout << std::endl;
        MergeSort(arr, MAXSIZE);            // 排序
        std::cout << "\t ==> \t";
 
        for(int i = 0; i < MAXSIZE; ++i)
            std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
}
