/*
  2 * 파일명: ex-function01.c
  3 * 프로그램 설명: 함수의 첫 번째 형태
  4 *
  5 * 매개변수: 없음, 반환값: 없음
  6 */
  7
  8 #include <stdio.h>
  9
 10 void function1(void);
 11
 12 int main(void)
 13 {
 14     function1();
 15
 16     return 0;
 17 }
 18
 19 /*
 20 * 함수명: function1
 21 * 매개변수: 없음, 반환값: 없음
 22 * 기능: 함수 안에서 선언한 year 변수의 값을 출력한다.
 23 */
 24
 25 void function1(void)
 26 {
 27      int year = 2050;
 28      printf("%d년 입니다. \n", year);
 29 }
 30
