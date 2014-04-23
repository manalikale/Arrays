/*
 The program makes the in-place matrix transposition of the 2 × 4 matrix
 
 0 1 2 3
 4 5 6 7
 represented in row-major ordering {0, 1, 2, 3, 4, 5, 6, 7} into the 4 × 2 matrix
 
 0 4
 1 5
 2 6
 3 7
 represented by the row-major ordering {0, 4, 1, 5, 2, 6, 3, 7}.
 
 The argument m of transpose represents the rowsize, the columnsize n is determined by the rowsize and the sequence size. The algorithm needs m × n bits of auxiliary storage to store the information, which elements have been swapped. The indexes of the sequence are mapped with the following scheme:
 
 0 → 0
 1 → 2
 2 → 4
 3 → 6
 4 → 1
 5 → 3
 6 → 5
 7 → 7
 The mapping function in general is:
 
 idx → (idx × n) mod (m × n - 1) if idx < (m × n), idx → idx otherwise
 
 We can identify four cycles within this sequence: { 0 }, { 1, 2, 4 }, {3, 5, 6} and { 7 }. 
 Each cycle can be transposed independent of the other cycles. The variable cycle initially points to the second element (the first does not need to be moved because 0 → 0). 
 The bit-array visited holds the already transposed elements and indicates, that index 1 (the second element) needs to be moved. Index 1 gets swapped with index 2 (mapping function).
 Now index 1 holds the element of index 2 and this element gets swapped with the element of index 4.
 Now index 1 holds the element of index 4.
 The element of index 4 should go to index 1, it is in the right place, transposing of the cycle has finished, all touched indexes have been marked visited. 
 The variable cycle gets incremented till the first not visited index, which is 3. The procedure continues with this cycle till all cycles have been transposed.
 */

#include <iostream>  // std::cout
#include <iterator>  // std::ostream_iterator
#include <algorithm> // std::swap (until C++11)
#include <vector>

template<class RandomIterator>
void transpose(RandomIterator first, RandomIterator last, int m)
{
    const int mn1 = (last - first - 1);
    const int n   = (last - first) / m;
    std::vector<bool> visited(last - first);
    RandomIterator cycle = first;
    while (++cycle != last) {
        if (visited[cycle - first])
            continue;
        int a = cycle - first;
        do  {
            a = a == mn1 ? mn1 : (n * a) % mn1;
            std::swap(*(first + a), *cycle);
            visited[a] = true;
        } while ((first + a) != cycle);
    }
}

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7,8,9 };
    transpose(a, a + 9, 3);
    std::copy(a, a + 9, std::ostream_iterator<int>(std::cout, " "));
    std::cout<<"\n";
}
