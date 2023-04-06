//LAB02
//2018100233 김정민

//#1.Unix to Dos

#include <fstream>

// myIn.txt 파일에서 첫 문자 읽어서 myOut.txt에 기록
int main(){
// 입력파일이름과 출력파일 이름은 argument를 이용하여 받을수 있도록 변경할 것
    std::ifstream input_file("Macfile_myIn.txt");
    std::ofstream output_file("Windowsfile_myOut.txt");
    char ch;
    while( !input_file.eof() ) //파일의 끝이 아닐때까지 루프를 반복함
    {
    // 공백문자 여부 상관 없이 한 문자(1byte) 만큼 읽음
    input_file.get(ch);
    if(ch=='\0') break; // 입력 파일 스트림에 에러비트가 존재한다면 루프를 빠져나감
    if(ch== '\r') // ch가 LF (‘\r’) 이라면
        output_file << '\n';
    else
        output_file<< ch;

    }
    input_file.close();
    output_file.close();
}


//#2. Exercise 9

//#include <iostream>
//#include "ItemType.h"
//#include "unsorted.h"
//
//void UnsortedType::Print() { //테스트용
//    for (int i = 0; i < length; i++) {
//        info[i].Print(std::cout);
//    }
//    std::cout << '\n';
//}
//int main() {
//    UnsortedType u;
//    ItemType i, ii,iii;
//    i.Initialize(1);
//    u.InsertItem(i);
//    i.Initialize(2);
//    u.InsertItem(i);
//    i.Initialize(3);
//    u.InsertItem(i);
//    i.Initialize(4);
//    u.InsertItem(i);
//
//    i.Initialize(1);
//    u.InsertItem(i);
//    i.Initialize(2);
//    u.InsertItem(i);
//    i.Initialize(3);
//    u.InsertItem(i);
//    i.Initialize(4);
//    u.InsertItem(i); //12341234
//
//    ii.Initialize(2);
//    iii.Initialize(4);
//
//    u.DeleteItem_a(ii);
//    u.Print();
//    u.DeleteItem_c(iii);
//    u.Print();
//}
