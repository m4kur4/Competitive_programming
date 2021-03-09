#include <bits/stdc++.h>
using namespace std;

const int BUILDING_COUNT = 4;
const int FLOOR_COUNT = 3;
const int ROOM_COUNT = 10;
void printRoomsInfo(int rooms[][FLOOR_COUNT][ROOM_COUNT]);

int main()
{
  int n;
  cin >> n;
  int rooms[BUILDING_COUNT][FLOOR_COUNT][ROOM_COUNT] = { 0 };

  for (int i = 0; i < n; i++) {
    int b, f, r, v;
    cin >> b >> f >> r >> v;
    rooms[b-1][f-1][r-1] += v;
  }
  printRoomsInfo(rooms);
}

void printRoomsInfo(int rooms[][FLOOR_COUNT][ROOM_COUNT])
{
  for (int b = 0; b < BUILDING_COUNT; b++) {
    for (int f = 0; f < FLOOR_COUNT; f++) {
      for (int r = 0; r < ROOM_COUNT; r++) {
        cout << " " << rooms[b][f][r];
      }
      cout << endl;
    }
    if (b != (BUILDING_COUNT - 1)) {
      cout << "####################" << endl;
    }
  }
}
