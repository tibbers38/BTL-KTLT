//
//  searchfunc.cpp
//  BTL KTLT

#include "searchfunc.hpp"
#include <string.h>

// Tìm kiếm tuần tự:
int SequentialSearch (int a, int array[], int size) {
    int i=0;
    for (i=0; i<size; i++) {
        if (array[i]==a) break;
    }
    if (i==size-1||i==0) return -1; // not found.
    else return i; // return location.
}

// Tìm kiếm nhị phân iterative:
int BinarySearch1 (int a, int array[], int size) {
    int left=0, right=size-1, mid;
    while (left<=right) {
        mid=(left+right)/2;
        if (array[mid]==a) return mid; // return location.
        else if (array[mid]>a) right=mid-1;
        else left=mid+1;
    }
    return -1; // not found.
}

// Tìm kiếm nhị phân recursive:
int BinarySearch2 (int a, int *array, int left, int right) {
    if (left>right) return -1; // not found.
    int mid;
    mid=(left+right)/2;
    if (array[mid]==a) return mid; // return location.
    else if (array[mid]>a) return BinarySearch2(a, array, left, mid-1);
    else return BinarySearch2(a, array, mid+1, right);
}

// Tìm kiếm tuần tự với chuỗi câu 2:
void SequentialSearchString(char *string, char *text) {
    int i,j,k,count=0;
    for (i=0; i<strlen(text); i++) {
        j=i;
        count=0;
        for (k=0; k<strlen(string); k++) {
            if (text[j]==string[k]) {
                ++j;
                count++;
            }
            else break;
            if (count==strlen(string)-1) printf("%d ",i); // in vị trí bắt đầu từ 0.
        }
    }
}

// Boyer-Moore:
static int compare(char* temp, char* pattern, int n) {
    int i;
    for (i=n-1; i>=0; i--) {
        if (temp[i]==pattern[i]) continue;
        else return i; // vi tri ko khop
    }
    return 0; // khop het
}

static void badchar(int check, int n, char *pattern, char *&temp) {
    int j=0;
    for (j=check-1; j>=0; j--) {
        if (temp[check]==pattern[j]) {
            temp=temp+check-j;
        }
        else continue;
    }
    if (j==-1) temp=temp+n;
}

void BoyerMoore (char* text, char* pattern) {
    int m=strlen(text);
    int n=strlen(pattern);
    char *temp, *temp2, *temp3;
    temp=new char[m];
    temp2=new char[n];
    temp3=new char[n];
    strcpy(temp, text); // tạo temp để thao tác
    int i=0;
    for (i=0; i<m-n;i++) {
        int check=compare(temp, pattern, n);
        if (check==0) {
            printf("%d", i); // vị trí từ trái sang phải, bắt đầu từ 0
            temp++;
        }
        else if (check!=0) {
            // Bad Characters done!
            badchar(check, n, pattern, temp);
            // Good Suffix not done!
//            int j=0;
//            strcpy(temp2, pattern);
//            temp2=temp2+check; // chuỗi hậu tố tốt.
//            for (j=0; j<strlen(pattern); j++) {
//                if (strcmp(temp2, strncpy(temp3, pattern++, strlen(temp2)))==0) temp+=j;
//                else continue;
//            }
//        }
    }
    printf("%s",temp);
    
    
    
}
