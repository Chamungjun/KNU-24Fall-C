#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_TOPING 10000


int solution(int toping[], size_t toping_len) {
    int answer = -1;
    int left_tops[MAX_TOPING + 1] = { 0, };
    int right_tops[MAX_TOPING + 1] = { 0, };
    int num_left = 0;
    int num_right = 0;
    int num_fairs = 0;

    for (int i = 0; i < toping_len; i++) {
        int top = toping[i];
        if (right_tops[top] == 0) num_right++;
        right_tops[top]++;
    }

    for (int i = 0; i < toping_len; i++) {
        int top = toping[i];
        right_tops[top]--;
        if (right_tops[top] == 0) num_right--;

        if (left_tops[top] == 0) num_left++;
        left_tops[top]++;

        if (num_left == num_right) num_fairs++;
    }





    return num_fairs;
}