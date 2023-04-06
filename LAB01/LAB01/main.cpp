// LAB01
// 2018100233 김정민
// 4. Exercise 28

//규격 명세
//Structure
//  정사각형 행렬의 요소 값을 초기화하고, 원하는 특정 요소의 값을 저장할 수 있다. 행렬끼리의 덧셈, 뺄셈, 복사를 수행할 수 있다.
//Definitions
//  MAX_ROWS: 행으로 가질 수 있는 최대 개수(50)
//  MAX_COLS: 열으로 가질 수 있는 최대 개수 (정사각형 행렬이기 때문에 사실상 MAX_ROWS와 같은 값을 가짐)(50)
//  matrix: 정사각형 행렬을 나타내는 멤버 변수. SquareMatrix의 private 멤버임
//Operations
//  MakeEmpty(n)
//      Function: 모든 n행과 n열들을 0으로 설정한다.
//      Precondition: n의 값이 최대 행과 열의 개수인 50을 넘으면 안된다.
//      Postcondition: matrix의 n행과 n열들의 값이 0이 된다.
//  StoreValue(i, j, value)
//      Function: i번째 행의 j번째 열의 값을 value로 저장한다.
//      Precondition: None
//      Postcondition: matriX의 i행, j열 위치에 value가 저장된다.
//  Add(SquareMatrix, n)
//      Function: this 객체의 matrix에 파라미터 객체의 matrix의 각 요소를 더한다.
//      Precondition: 두 matrix 모두 같은 행열의 길이를 가져야 한다.(n)
//      Postcondition: this 객체의 matrix의 각 요소 값이 파라미터 객체의 matrix의 각 요소 값이 더해진 값으로 수정된다.
//  Subtract(SquareMatrix, n)
//      Function: this 객체의 matrix에 파라미터 객체의 matrix의 각 요소를 뺀다.
//      Precondition: 두 matrix 모두 같은 행열의 길이를 가져야 한다.(n)
//      Postcondition: this 객체의 matrix의 각 요소 값이 파라미터 객체의 matrix의 각 요소 값만큼 차감된 값로 수정된다.
//  Copy(SquareMatrix, n)
//      Function: this 객체의 matrix에 파라미터 객체의 matrix를 복사한다.
//      Precondition: 두 matrix 모두 같은 행열의 길이를 가져야 한다.(n)
//      Postcondition: this 객체의 matrix의 각 요소 값이 파라미터 객체의 matrix의 각 요소 값으로 대체된다.
//  Print(n)
//      Function: this 객체의 private 멤버인 matrix를 출력한다.
//      Precondition: n이 matrix의 행열의 길이와 같아야 한다.
//      Postcondition: this 객체의 matrix를 정사각형 형태로 출력한다.

//#include <iostream>
//
//const int MAX_ROWS = 50;
//const int MAX_COLS = 50;
//
//class SquareMatrix
//{
//private:
//    int matrix[MAX_ROWS][MAX_COLS];
//
//public:
//    void MakeEmpty(int);
//    void StoreValue(int, int, int);
//    SquareMatrix Add(const SquareMatrix, const int);
//    SquareMatrix Subtract(const SquareMatrix, const int);
//    SquareMatrix Copy(const SquareMatrix, const int);
//
//    void Print(const int n) {
//        if(n>MAX_ROWS) ;
//        else {
//            for(int i = 0; i < n; i++) {
//                for( int j = 0; j < n; j++) {
//                    std::cout << matrix[i][j] << " ";
//                }
//                std::cout << '\n';
//            }
//        }
//    }
//};
//void SquareMatrix::MakeEmpty(const int n) {
//    if(n>MAX_ROWS) ;
//    else {
//        for(int i = 0; i < n; i++) {
//            for( int j = 0; j < n; j++) {
//                matrix[i][j] = 0;
//            }
//        }
//    }
//}
//void SquareMatrix::StoreValue(int i, int j, int value) {
//    matrix[i][j] = value;
//}
//SquareMatrix SquareMatrix::Add(const SquareMatrix ss, int size) {
//    for(int i = 0; i < size; i++) {
//        for(int j = 0; j < size; j++) {
//            this->matrix[i][j] += ss.matrix[i][j];
//        }
//    }
//    return *this;
//}
//SquareMatrix SquareMatrix::Subtract(const SquareMatrix ss, int size) {
//    for(int i = 0; i < size; i++) {
//        for(int j = 0; j < size; j++) {
//            this->matrix[i][j] -= ss.matrix[i][j];
//        }
//    }
//    return *this;
//}
//SquareMatrix SquareMatrix::Copy(const SquareMatrix ss, int size) {
//    for(int i = 0; i < size; i++) {
//        for(int j = 0; j < size; j++) {
//            this->matrix[i][j] = ss.matrix[i][j];
//        }
//    }
//    return *this;
//}
//
//int main() {
//    SquareMatrix s;
////    s.MakeEmpty(10);
//    s.StoreValue(0, 1, 1);
//    s.StoreValue(3, 2, 1);
//    s.Print(10);
//    std::cout << '\n';
//    SquareMatrix ss;
//    ss.MakeEmpty(10);
//    ss.StoreValue(1, 2, 2);
//    s.Add(ss, 10);
//    s.Print(10);
//    std::cout << '\n';
//    SquareMatrix sss;
//    sss.MakeEmpty(10);
//    sss.StoreValue(0, 1, 3);
//    sss.StoreValue(5, 6, 3);
//    sss.StoreValue(8, 3, 3);
//    s.Subtract(sss, 10);
//    s.Print(10);
//    std::cout << '\n';
//    ss.Copy(s, 10);
//    ss.Print(10);
//    std::cout << '\n';
//    s.Copy(sss, 10);
//    s.Print(10);
//    std::cout << '\n';
//}


//5. Exercise 29
#include <iostream>
#include <cstring>
#include "StrType.h"
#include <fstream>
//(a) <cstring>에 있는 strcmp를 사용하여 멤버함수 ComparedTo를 작성하라.
//RelationType StrType::ComparedTo(StrType& otherString) {
//    RelationType result;
//    if(strcmp(this->letters, otherString.letters) == 0) result = EQUAL; //1
//    else if(strcmp(this->letters, otherString.letters) > 0) result = GREATER; //2
//    else result = LESS; //0
//
//    return result;
//}

//(b) strcmp 라이브러리 함수를 사용하지 않고, 멤버 함수 ComparedTo를 작성하라.
RelationType StrType::ComparedTo(StrType& otherString){
    int idx = 0;
    int result;
    while((this->letters[idx] != '\0' && otherString.letters[idx] != '\0') && (this->letters[idx] == otherString.letters[idx])) {
        idx++;
    }
    result = this->letters[idx] - otherString.letters[idx];
    if(result == 0) return EQUAL; //1
    else if(result > 0) return GREATER; //2
    else return LESS; //0
}

int main() {
    StrType s;
    s.MakeEmpty();
    std::ifstream ifs;
    ifs.open("ex.txt");
    s.GetStringFile(true, ALPHA_NUM, ifs);
    StrType ss;
    ss.MakeEmpty();
    std::ifstream ifs1;
    ifs1.open("ex1.txt");
    ss.GetStringFile(true, ALPHA_NUM, ifs1);
    std::cout << s.ComparedTo(ss);
    
}
