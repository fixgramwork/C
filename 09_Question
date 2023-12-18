#include <stdio.h>
int main(void) {
	int x = 0, y = 0;
	scanf_s("%d %d", &x, &y);
	int ret = x >= 0 && x <= 10 && y >= 0 && y <= 10;
	printf("박스는 (0,0)~(10,10)사이에 있는지는 : %d", ret);
	return 0;
}
/*정답)
#include <stdio.h>

int main() {
   int x = 0;
   int y = 0;

   int leftTopX = 0;
   int leftTopY = 0;
   int rightBottomX = 10;
   int rightBottomY = 10;

   printf("점 x의 값을 입력하세요: ");
   scanf_s("%d", &x);
   printf("점 y의 값을 입력하세요: ");
   scanf_s("%d", &y);

   int retx = leftTopX < x && x < rightBottomX;
   int rety = leftTopY < y && y < rightBottomY;

   int totalret = retx && rety;

   totalret = leftTopX < x && x < rightBottomX && leftTopY < y && y < rightBottomY;

   printf("점(%d, %d)는 박스(0, 0) ~ (10, 10)사이에 %d\n", x, y, totalret);


   return 0;
}
*/
