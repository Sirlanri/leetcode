#pragma once

#include "数组字符串.h"

/*合并两个有序数组*/

void CombineTwoVector::merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //nums2的下标
    int i2 = 0;

    for (int i = 0; i < m ; i++) {
        //num2越界判断
        if (i2 > n) {
            break;
        }
        if ((nums1[i] < nums2[i2]) && (nums1[i]!=0)) {
            continue;
        }
        else {
            nums1.insert(nums1.begin() + i, nums2[i2]);
            nums1.pop_back();
            i2++;
        }
    }
    return;
}


void CombineTwoVectorTest() {
    CombineTwoVector com;
    vector<int> n1 = { 1,2,3,0,0,0 };
    int m = n1.size();
    vector<int> n2 = { 2,5,6 };
    int n = n2.size();
    com.merge(n1, m, n2, n);
}