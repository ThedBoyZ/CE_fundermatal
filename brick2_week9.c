#include <stdio.h>

int main() {

  int floor, width;
  char layout[20][20];
  // input floor and number

  scanf("%d %d", &floor, &width);
  // scan layout
  for (int currentFloor = 0; currentFloor < floor; currentFloor++) {
    scanf("\n");
    for (int currentWidth = 0; currentWidth < width; currentWidth++) {
      scanf("%c", &layout[currentFloor][currentWidth]);
    }
  }

  // bricks on each width
  int bricks[20];
  for (int thisline = 0; thisline < width; thisline++) {
    scanf("%d", &bricks[thisline]);
  }

  // render layout
  for (int w = 0; w < width; w++) {
    for (int Bamount = bricks[w]; Bamount > 0; Bamount--) {
      for(int layer = 0; layer < floor; layer++){
        if(layout[layer][w] != '.'){break;}
        if(layout[layer+1][w] != '.'){layout[layer][w] = '#'; break;}
        if(layer == floor && layout[layer][w] == '.'){layout[layer][w] = '#'; break;}

      }

    }

  }

  // output

  for (int currentFloor = 0; currentFloor < floor; currentFloor++) {

    for (int currentWidth = 0; currentWidth < width; currentWidth++) {

      printf("%c", layout[currentFloor][currentWidth]);

    }

    printf("\n");

  }
}
