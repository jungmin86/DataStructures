//
//  main.cpp
//  LAB11_#3
//
//  Created by Jungmin Kim on 2023/05/23.
//

#include <iostream>
#include "PQType.h"
//D. Big-O notation
//Enqueue : SortedLL의 InsertItem의 Big-O -> O(N) -> 처음부터 끝까지 들어가야할 곳 찾는 최악의 경우의 수
//Dequeue : 그냥 맨 앞에 있는 가장 큰 수를 빼면 되므로 O(1)
int main(int argc, const char * argv[]) {
    PQType<int> pq;
    
    pq.Enqueue(56);
    pq.Enqueue(27);
    pq.Enqueue(42);
    pq.Enqueue(26);
    pq.Enqueue(15);
    pq.Enqueue(3);
    pq.Enqueue(19);
    pq.Enqueue(25);
    pq.Enqueue(24);
    pq.Enqueue(5);
    
    pq.Enqueue(28);
    pq.Enqueue(2);
    pq.Enqueue(40);
    int x, y, z;
    //내림차순으로 정의되어있고, Enqueue 혹은 Dequeue해줄 때마다 ReheapUp과 ReheapDown을 수행해서 내림차순을 유지한다.
    //따라서 Dequeue는 가장 큰 숫자가 반환될 것
    //56, 42, 40 순으로 Dequeue된다.
    pq.Dequeue(x);
    pq.Dequeue(y);
    pq.Dequeue(z);
    
    std::cout << x << " " << y << " " << z << std::endl;
}
