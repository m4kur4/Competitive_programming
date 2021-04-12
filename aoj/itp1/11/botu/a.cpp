// 表示されている値を保持する方針だとダイスの向きを考慮できないため没
#include <bits/stdc++.h>
using namespace std;

struct Dice {
  //     1
  // 4 | 2 | 3 | 5
  //     6
  public:
    Dice(int face_1, int face_2, int face_3, int face_4, int face_5, int face_6) {
      this->_face_1 = face_1;
      this->_face_2 = face_2;
      this->_face_3 = face_3;
      this->_face_4 = face_4;
      this->_face_5 = face_5;
      this->_face_6 = face_6;
      this->_face_disp = this->_face_1;
    }

    int get_disp() {
      return this->_face_disp;
    }

    void move(char div) {
      switch (div) {
        case 'E':
          this->_set_disp(this->_get_w());
          break;
        case 'N':
          this->_set_disp(this->_get_s());
          break;
        case 'S':
          this->_set_disp(this->_get_n());
          break;
        case 'W':
          this->_set_disp(this->_get_e());
          break;
      }
    }
  private:
    int _face_1, _face_2, _face_3, _face_4, _face_5, _face_6, _face_disp;

    void _set_disp(int face) {
      this->_face_disp = face;
    }

    int _get_w() {
      int face = this->_face_disp;
      if (face == this->_face_1) {
        return this->_face_4;
      } else if (face == this->_face_2) {
        return this->_face_4;
      } else if (face == this->_face_3) {
        return this->_face_2;
      } else if (face == this->_face_4) {
        return this->_face_5;
      } else if (face == this->_face_5) {
        return this->_face_4;
      } else if (face == this->_face_6) {
        return this->_face_4;
      } else {
        return -1;
      }
    }

    int _get_e() {
      int face = this->_face_disp;
      if (face == this->_face_1) {
        return this->_face_3;
      } else if (face == this->_face_2) {
        return this->_face_3;
      } else if (face == this->_face_3) {
        return this->_face_5;
      } else if (face == this->_face_4) {
        return this->_face_2;
      } else if (face == this->_face_5) {
        return this->_face_3;
      } else if (face == this->_face_6) {
        return this->_face_3;
      } else {
        return -1;
      }
    }

    int _get_n() {
      int face = this->_face_disp;
      if (face == this->_face_1) {
        return this->_face_5;
      } else if (face == this->_face_2) {
        return this->_face_1;
      } else if (face == this->_face_3) {
        return this->_face_1;
      } else if (face == this->_face_4) {
        return this->_face_1;
      } else if (face == this->_face_5) {
        return this->_face_1;
      } else if (face == this->_face_6) {
        return this->_face_2;
      } else {
        return -1;
      }
    }

    int _get_s() {
      int face = this->_face_disp;
      if (face == this->_face_1) {
        return this->_face_2;
      } else if (face == this->_face_2) {
        return this->_face_6;
      } else if (face == this->_face_3) {
        return this->_face_6;
      } else if (face == this->_face_4) {
        return this->_face_6;
      } else if (face == this->_face_5) {
        return this->_face_6;
      } else if (face == this->_face_6) {
        return this->_face_5;
      } else {
        return -1;
      }
    }

};

int main()
{
  int face_1, face_2, face_3, face_4, face_5, face_6;
  cin >> face_1 >> face_2 >> face_3 >> face_4 >> face_5 >> face_6;
  Dice dice(face_1, face_2, face_3, face_4, face_5, face_6);

  string move_dirs;
  cin >> move_dirs;

  for (char dir: move_dirs){
    dice.move(dir);
  }
  cout << dice.get_disp() << endl;
  return 0;
}
