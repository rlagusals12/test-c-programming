 /*
  2 * 파일명: ex-function02.c
  3 * 프로그램 설명: 함수의 두 번째 형태
  4 * 매개변수: 있음, 반환값: 있음
  5 */
  6 #include <stdio.h>
  7 int function2(int year);
  8 int main(void)
  9 {
 10  int next_year;
 11  // 인수 2050 을 전달하여 함수를 호출하고 함수가 반환한 값을 next_year 에 저장한다.
 12  next_year = function2(2050);
 13  printf("다음 해는 %d 년 입니다.\n", next_year);
 14  return 0;
 15 }
 16 /*
 17 * 함수명: function2
 18 * 매개변수: int year, 반환형: int
 19 * 기능: 전달받은 연도를 출력하고, 1 을 더한 값을 반환한다.
 20 */
 21 int function2(int year)
 22 {
 23  printf("전달받은 연도는 %d 년 입니다.\n", year);
 24  return year + 1;
 25 }
