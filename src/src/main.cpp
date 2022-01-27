#include <iostream>

#include "Skip_List.h"
#include "Console.h"

int main()
{
    std::vector<double> vc = { 90, 15, -59, 48, -1, -28 };
    Skip_List skip_list{};

    Console console{ skip_list };
    console.write_to_file("output.txt");
    console.run();
}