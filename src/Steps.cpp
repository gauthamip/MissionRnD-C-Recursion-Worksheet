/*

	You have N steps to climb .
	You can either take one step or two steps at a time .
	You need to find the total number of ways you can reach N steps .

	Example : For N=4 , You can either reach 4 steps in following ways
	->1111
	->112
	->121
	->211
	->22
	So total number of ways is 5

	Input : A Integer denoting N (number of steps )
	Output : Return an Integer denoting the number of ways to reach N steps

	Example Input : get_steps(5)
	Example Output : Returns 8

	Note : Test Cases would be small <25.

*/
#include "stdafx.h"
#include<stdio.h>
int t1 = 0;
int t = 0;
int step(int s)
{

	if (s == 0)
	{
		t++;
		return t;
	}
	if (s != 0)
	{
		s = s - 1;
	}
	int t1 = step(s);
	s = s + 1;
	if (s > 1)
	{
		s = s - 2;
		if (s != 0)
			t1 = step(s);
	}
	if (s == 0)
	{
		t++;
		return t;
	}
	return t;
}
int get_steps(int s)
{
	t = 0;
	int t1 = 0;
	t1 = step(s);
	return t1;
}
