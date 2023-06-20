#include "RSPType.h"

RSPType::RSPType(int N)  
{
  listData = NULL;
  currentPos = NULL;
  
    length = 0;
    A_win_num = 0;
    B_win_num = 0;
    if ((N%2 != 0) && (N>=3)) { //이외의 경우의 수 고려하지 않아도 됨 -> input에 이 경우에 해당하는 N만 들어갈 예정
        n_count = N; //ex 7판
        m_count = (n_count+1) / 2; //ex 4선승제
    }
    else { // 실수로 조건에 맞지 않는 N을 입력했을 경우 IsCompleted == true를 통해 while문을 바로 빠져나오게끔 설정 (예외처리)
        n_count = 0;
    }
    
}


RSPType::~RSPType()
{
  MakeEmpty();
}  

bool RSPType::IsCompleted() const
{
    bool result = false;
    if (n_count == 0) result = true; //승부가 난 경기에서 하나씩 -- 카운트됨
    else if ((A_win_num >= m_count) || (B_win_num >= m_count)) result = true;
    
    return result;
}

int RSPType::LengthIs() const
{
  return length;
}

void RSPType::MakeEmpty()
{
    NodeType* tempPtr;

    while (listData != NULL)
    {
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;

}


void RSPType::InsertItem(string A, string B)
{
//    if (listData == NULL) {
//        NodeType* location;
//        location = new NodeType;
//        location->A = A;
//        location->B = B;
//        location->next = NULL;
//        listData = location;
//        length++;
//    }
//    else {
        NodeType* location;
        location = new NodeType;
        location-> next = listData; //listData가 NULL이면 알아서 next에 NULL이 할당됨
        location->A = A;
        location->B = B;
        listData = location;
        length++;
//    }
    
    if (A == B) {} //비겨도 경기로 인정 총 0가지 경우의 수 중 3가지 해당
    
    else if (A=="rock" && B == "paper") {
        B_win_num++;
        n_count--;
    }
    else if (A=="rock" && B == "scissors") {
        A_win_num++;
        n_count--;
    }
    else if (A== "scissors" && B == "paper") {
        A_win_num++;
        n_count--;
    }
    else if (A== "scissors" && B == "rock") {
        B_win_num++;
        n_count--;
    }
    else if (A== "paper" && B == "rock") {
        A_win_num++;
        n_count--;
    }
    else if (A== "paper" && B == "scissors") {
        B_win_num++;
        n_count--;
    }
    
}


void RSPType::ResetList(){
  currentPos = NULL;
}
 
void RSPType::GetNextItem(string& A, string& B)
{
    if (currentPos == NULL)
      currentPos = listData;
    else
      currentPos = currentPos->next;
    A = currentPos->A;
    B = currentPos->B;
}

void RSPType::Print()
{
    NodeType* location;
    location = listData;
    int temp_len = length;
    while (temp_len != 0) {
        
        for (int i = 0; i < temp_len-1; i++) location = location -> next; //listData로부터 temp_len에 해당하는 위치까지 이동해서 프린트
        std::cout << "A: " << location->A << " B: " << location->B << std::endl;
        temp_len--;
        location = listData; //다시 시작지점 가리킴
    }
    if (A_win_num > B_win_num)
        std::cout << "Result: A Win"; //예시에 줄넘김이 존재하지 않음
    else if (A_win_num < B_win_num)
        std::cout << "Result: B Win";
}
