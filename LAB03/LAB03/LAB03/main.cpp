//
//  main.cpp
//  LAB03
// 2018100233 김정민
//#include <iostream>
//#include "sorted.h"
//int main() {
//    SortedType s;
//    ItemType i, ii, iii, iiii;
//    i.Initialize(1);
//    ii.Initialize(2);
//    iii.Initialize(3);
//    iiii.Initialize(1);
//    s.InsertItem(i);
//    s.InsertItem(ii);
//    s.InsertItem(iii);
//    s.DeleteItem(iiii);
//    s.Print();
//
//}

//// Exercise 6

//#include <iostream>
//#include "ItemType.h"
//#include "sorted.h"
//
//
//int main()
//{
//    void MergeList(SortedType, SortedType, SortedType&);
//    SortedType s_list1, s_list2, s_list3; // 리스트 선언
//    ItemType item1,item2,item3,item4,item5, item6, item7, item8, item9, item10; //필요한 만큼 선언.
//    item1.Initialize(7); //item을 필요한 만큼 초기화
//    item2.Initialize(3);
//    item3.Initialize(5);
//    item4.Initialize(1);
//    s_list1.InsertItem(item1); //리스트에 값을 넣는다.
//    s_list1.InsertItem(item2);
//    s_list1.InsertItem(item3);
//    s_list1.InsertItem(item4);
//
//    item5.Initialize(6); //item을 필요한 만큼 초기화
//    item6.Initialize(4);
//    item7.Initialize(2);
//    item8.Initialize(9);
//    item9.Initialize(8);
//    item10.Initialize(0);
//    s_list2.InsertItem(item5); //리스트에 값을 넣는다.
//    s_list2.InsertItem(item6);
//    s_list2.InsertItem(item7);
//    s_list2.InsertItem(item8);
//    s_list2.InsertItem(item9);
//    s_list2.InsertItem(item10);
//
//    MergeList(s_list1, s_list2, s_list3);
//    s_list3.Print();
//    return 0;
//}
//void MergeList(SortedType list1, SortedType list2, SortedType& result)
////Function: Make a new sorted list with 2 sorted lists merged.
////Pre: List1 and list2 have been initialized and sorted by key members.
////      Each list has a different key.
////Post: Result is a sorted list which has every element of list1 and list2.
////Big-O: O(N)
//{
//// 리스트의 current position을 초기화 한다.
//    list1.ResetList();    //O(1) 이걸 하면 -1이 됨
//    list2.ResetList();    //O(1)
//    result.ResetList();   //O(1)
//// list1과 list2의 길이를 LengthIs()함수를 통해 얻는다.
//    int list1_len = list1.LengthIs(); //O(1)
//    int list2_len = list2.LengthIs(); //O(1)
//// 정렬 리스트이므로 InsertItem(…)함수에 정렬하는 기능이 있다.
//// 따라서 list1의 길이만큼 반복하여 GetNextItem(…)로 item을 받아 result에 넣는다.
//    for (int i = 0; i < list1_len; i++) { //O(N)
//        ItemType item;
//        list1.GetNextItem(item);
//        result.InsertItem(item);
//    }
//// list2역시 길이만큼 루프를 돌며 GetNextItem(…)로 item을 얻고, result에 넣는다.
//    for (int i = 0; i < list2_len; i++) { //O(N)
//        ItemType item;
//        list2.GetNextItem(item);
//        result.InsertItem(item);
//    }
//}

//// 2. Binary Search

#include <iostream>
using namespace std;

//A.
//int BinarySearch(int array[], int sizeOfArray, int value) {
//    int midPoint ;
//    int first = 0;
//    int last = sizeOfArray - 1;
//    int index = -1;
//
//    bool moreToSearch = (first <= last);
//    bool found = false;
//    while (moreToSearch && !found) {
//        midPoint = (first + last) / 2;
//        if (array[midPoint] == value) {
//            index = midPoint;
//            found = true;
//        }
//        else if (array[midPoint] < value) {
//            first = midPoint + 1;
//            moreToSearch = (first <= last); //first가 바뀌었으니 해줘야 함
//        }
//        else if (array[midPoint] > value) {
//            last = midPoint - 1;
//            moreToSearch = (first <= last); //last가 바뀌었으니 해줘야 함
//        }
//    }
//    return index;
//}

////B.
//int BinarySearch(int array[], int sizeOfArray, int value) {
//    int midPoint ;
//    int first = 0;
//    int last = sizeOfArray - 1;
//    int index = -1;
//
//    bool moreToSearch = (first <= last);
//    bool found = false;
//    while (moreToSearch && !found) {
//        midPoint = (first + last) / 2;
//        if (array[midPoint] == value) {
//            index = midPoint;
//            found = true;
//        }
//        else if (array[midPoint] < value) {
//            first = midPoint + 1;
//            if (array[first] > value) {
//                index = first - 1; //하나 증가시키니까 바로 역전 ? -> 증가시키기 전이 value 다음으로 작은 수
//                found = true;
//            }
//            moreToSearch = (first <= last);
//        }
//        else if (array[midPoint] > value) {
//            last = midPoint - 1;
//            if (array[last] < value) {
//                index = last; //하나 감소시켰더니 역전 ? -> 그럼 이 감소한 인덱스가 value 다음으로 작은 수
//                found = true;
//            }
//            moreToSearch = (first <= last);
//        }
//    }
//    return array[index];
//}

////C.
int BinarySearch(int array[], int sizeOfArray, int value) {
    int midPoint ;
    int first = 0;
    int last = sizeOfArray - 1;
    int index = -1;

    bool moreToSearch = (first <= last);
    bool found = false;
    while (moreToSearch && !found) {
        midPoint = (first + last) / 2;
        if (array[midPoint] == value) {
            index = midPoint;
            found = true;
        }
        else if (array[midPoint] < value) {
            first = midPoint + 1;
            if (array[first] > value) {
                index = first;
                found = true;
            }
            moreToSearch = (first <= last);
        }
        else if (array[midPoint] > value) {
            last = midPoint - 1;
            if (array[last] < value) {
                index = last + 1;
                found = true;
            }
            moreToSearch = (first <= last);
        }
    }
    return array[index];
}
//
//
int main() {
//    //A.
//    int list[10] = {1,2,3,4,5,6,7,8,9,10};
//    int result = BinarySearch(list, sizeof(list)/sizeof(list[0]), 11);
//    cout << result << endl; // -1 리턴
//    result = BinarySearch(list, sizeof(list)/sizeof(list[0]), 7);
//    cout << result << endl; // 6 리턴
//    return 0;
//    //B.
//    int list[10] = {2,4,6,8,10,12,14,16,18,20};
//    int result = BinarySearch(list, sizeof(list)/sizeof(list[0]), 11);
//    cout << result << endl; //10 리턴
//    result = BinarySearch(list, sizeof(list)/sizeof(list[0]), 7);
//    cout << result << endl; //6 리턴
//    //C.
    int list[10] = {2,4,6,8,10,12,14,16,18,20};
    int result = BinarySearch(list, sizeof(list)/sizeof(list[0]), 3);
    cout << result << endl; //4 리턴
    result = BinarySearch(list, sizeof(list)/sizeof(list[0]), 17);
    cout << result << endl; //18 리턴
}
//





