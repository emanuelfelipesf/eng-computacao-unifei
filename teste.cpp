#include <iostream>

int main(int argc, char const *argv[])
{
    int vetor[4] = {1, 2, 3, 4};

    int left = 0, right = 3;
    while (left < right) {
        int temp = vetor[left];
        vetor[left] = vetor[right];
        vetor[right] = temp;
        left++;
        right--;
    }
    
    for (int i = 0; i < 4; i++) {
        std::cout << vetor[i] << " ";
    }
    
    return 0;
}
