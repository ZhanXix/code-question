#include "leetcode.h"

/*
 * 计算并返回 x 的平方根，其中 x 是非负整数。
 * 由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。
 */

int mySqrt(int x)
{
	long low = 0, high = 65536;
	long mid, temp;
	while (1)
	{
		mid = (low + high) / 2;
		temp = mid * mid;
		if (temp > x)
		{
			high = mid;
		}
		else if (temp < x) {
			low = mid;
		}
		else
		{
			return mid;
		}
		if (low == high - 1)
		{
			return low;
		}
	}
}