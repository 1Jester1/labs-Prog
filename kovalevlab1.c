/*
 * kovalevlab1.c
 * 
 * Copyright 2024 Timur Grigorjevich Kovalev <tgkovalev@dk8n76.dk.sci.pfu.edu.ru>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
float answ1, answ2, eggv1,eggv2;
const float pi = 3.14;
float egg1 = 5;
float egg2 = 4;
eggv1 = (4/3)*pi*egg1;
eggv2 = (4/3)*pi*egg2;
answ1 = (10*eggv1)/egg2;
answ2 = (10*eggv1)-(10*eggv2);
printf("Answer 1 %f \n",answ1);
printf("Answer 2 %f",answ2);
	return 0;
}

