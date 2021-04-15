// 一つのサイコロに同じ値が複数存在するケースへ対応できていない
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

    int get_left() {
      return this->_faces[3];
    }

    int get_back() {
      return this->_faces[4];
    }

    int get_bottom() {
      return this->_faces[5];
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


bool is_same_dice(Dice d1, Dice d2)
{
  return (
    d1.get_top() == d2.get_top() &&
    d1.get_front() == d2.get_front() &&
    d1.get_right() == d2.get_right() &&
    d1.get_left() == d2.get_left() &&
    d1.get_back() == d2.get_back() &&
    d1.get_bottom() == d2.get_bottom()
  );
}

int main()
{
  int face_1, face_2, face_3, face_4, face_5, face_6;
  cin >> face_1 >> face_2 >> face_3 >> face_4 >> face_5 >> face_6;
  Dice dice1(face_1, face_2, face_3, face_4, face_5, face_6);

  cin >> face_1 >> face_2 >> face_3 >> face_4 >> face_5 >> face_6;
  Dice dice2(face_1, face_2, face_3, face_4, face_5, face_6);

  bool is_same = false;

  if (dice1.get_top() == dice2.get_top() && dice1.get_front() == dice2.get_front()){
    is_same = is_same_dice(dice1, dice2);

  } else {
    // 全ての面を走査して上面を合わせる
    for (int i = 0; i < 4; i++) {
      if (dice1.get_top() == dice2.get_top()) break;
      dice2.roll('S');
    }
    for (int i = 0; i < 4; i++) {
      if (dice1.get_top() == dice2.get_top()) break;
      dice2.roll('W');
    }
    // 上面を固定した状態で縦軸回転して前面を合わせる
    for (int i = 0; i < 4; i++) {
      if (dice1.get_front() == dice2.get_front()) break;
      dice2.roll('N');
      dice2.roll('W');
      dice2.roll('S');
    }
    is_same = is_same_dice(dice1, dice2);
  }
  if (is_same) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
