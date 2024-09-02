#include <iostream>
#include <vector>
#include "sequence.cpp"

int main()
{

    char wrd[] = "inthemiddleoftheshinyforestwhilereadingabookaboutancientmysteriesifoundaprettyhiddenpathleadingtotheenchantingcabinwhereastunningowlwaswaitingformyarrival";
    int size = sizeof(wrd);
    print_sequence(wrd,size);
    return 0;

}