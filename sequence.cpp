#include <iostream>
#include <vector>

void print_sequence(char word[], int word_size)
{
    std::vector<char> r;
    char albet[26];

    for (int ch = 'a'; ch <= 'z'; ch++) 
    {
        albet[ch-'a'] = ch;
    }


    for(int i = 0; i < (word_size - 1);i++)
    {
        for(int j = 0; j < 26;j++)
        {
            if(i >= 1)
            {
                for(int  k = 0; k < i; k++)
                {
                    std::cout<<r.at(k);
                }
            }
            if(albet[j] == word[i])
            {
                std::cout<<albet[j]<<'\n';
                r.push_back(albet[j]);
                break;
            } 
            std::cout<<albet[j]<<'\n';
        }
    }

}