#include <stdio.h>

int main(void)
{
    int input_value;
    scanf("%d", &input_value);

    // 入力値がマイナスの場合はエラーとして "NG" を表示して終了する
    if (input_value < 0)
    {
        printf("NG");
        return 0;
    }

    long long total_sum = 0;

    // 1から入力値までループし、3の倍数でも5の倍数でもない数を合計する
    for (int current_number = 1; current_number <= input_value; current_number++)
    {
        if (current_number % 3 == 0 || current_number % 5 == 0)
        {
            continue;
        }
        total_sum += current_number;
    }

    printf("%lld", total_sum);
    return 0;
}