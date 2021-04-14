#include <bits/stdc++.h>
using namespace std;

struct Dice {
  //     1
  // 4 | 2 | 3 | 5
  //     6
  public:
    Dice(int face_1, int face_2, int face_3, int face_4, int face_5, int face_6) {
      this->_faces[0] = face_1;
      this->_faces[1] = face_2;
      this->_faces[2] = face_3;
      this->_faces[3] = face_4;
      this->_faces[4] = face_5;
      this->_faces[5] = face_6;
    }

    int get_disp() {
      return this->_faces[0];
    }

    void roll(char div) {
      switch (div) {
        case 'E':
          this->_roll_to_e();
          break;
        case 'N':
          this->_roll_to_n();
          break;
        case 'S':
          this->_roll_to_s();
          break;
        case 'W':
          this->_roll_to_w();
          break;
      }
    }

    int get_top() {
      return this->_faces[0];
    }

    int get_front() {
      return this->_faces[1];
    }

    int get_right() {
      return this->_faces[2];
    }

  private:
    int _faces[6];

    void _set_faces(int face_1, int face_2, int face_3, int face_4, int face_5, int face_6) {
      this->_faces[0] = face_1;
      this->_faces[1] = face_2;
      this->_faces[2] = face_3;
      this->_faces[3] = face_4;
      this->_faces[4] = face_5;
      this->_faces[5] = face_6;
    }

    void _roll_to_e() {
      int face_1, face_2, face_3, face_4, face_5, face_6;
      face_1 = this->_faces[3];
      face_2 = this->_faces[1];
      face_3 = this->_faces[0];
      face_4 = this->_faces[5];
      face_5 = this->_faces[4];
      face_6 = this->_faces[2];
      this->_set_faces(face_1, face_2, face_3, face_4, face_5, face_6);
    }

    void _roll_to_n() {
      int face_1, face_2, face_3, face_4, face_5, face_6;
      face_1 = this->_faces[1];
      face_2 = this->_faces[5];
      face_3 = this->_faces[2];
      face_4 = this->_faces[3];
      face_5 = this->_faces[0];
      face_6 = this->_faces[4];
      this->_set_faces(face_1, face_2, face_3, face_4, face_5, face_6);
    }
    void _roll_to_s() {
      int face_1, face_2, face_3, face_4, face_5, face_6;
      face_1 = this->_faces[4];
      face_2 = this->_faces[0];
      face_3 = this->_faces[2];
      face_4 = this->_faces[3];
      face_5 = this->_faces[5];
      face_6 = this->_faces[1];
      this->_set_faces(face_1, face_2, face_3, face_4, face_5, face_6);
    }

    void _roll_to_w() {
      int face_1, face_2, face_3, face_4, face_5, face_6;
      face_1 = this->_faces[2];
      face_2 = this->_faces[1];
      face_3 = this->_faces[5];
      face_4 = this->_faces[0];
      face_5 = this->_faces[4];
      face_6 = this->_faces[3];
      this->_set_faces(face_1, face_2, face_3, face_4, face_5, face_6);
    }
};

int main()
{
  int face_1, face_2, face_3, face_4, face_5, face_6;
  cin >> face_1 >> face_2 >> face_3 >> face_4 >> face_5 >> face_6;
  Dice dice(face_1, face_2, face_3, face_4, face_5, face_6);

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    int top, front;
    cin >> top >> front;

    if (dice.get_top() == top && dice.get_front() == front) {
      cout << dice.get_right() << endl;

    } else {
      while (dice.get_top() != top || dice.get_front() != front) {
        // 全ての面を走査して上面を合わせる
        for (int i = 0; i < 4; i++) {
          if (dice.get_top() == top) break;
          dice.roll('S');
        }
        for (int i = 0; i < 4; i++) {
          if (dice.get_top() == top) break;
          dice.roll('W');
        }
        // 上面を固定した状態で縦軸回転して前面を合わせる
        for (int i = 0; i < 4; i++) {
          if (dice.get_front() == front) break;
          dice.roll('N');
          dice.roll('W');
          dice.roll('S');
        }
      }
      cout << dice.get_right() << endl;
    }
  }
  return 0;
}
