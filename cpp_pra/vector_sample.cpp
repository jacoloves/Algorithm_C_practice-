#include <vector>
#include <stdio.h>

int main(void) {
    std::vector<int> vec{ 1, 2, 3 };

    for(int i = 0; i < vec.size(); i++)
    {
        /* code */
        printf("%d ", vec[i]);
    }

    printf("\n");
    return 0;
    
}