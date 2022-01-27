# Interactive Skip List 

C++ implementation of a skip list data-structure, along with an interactive console to visualize and experiment with the list.

## Demo
<p align="center">
    <img src='https://user-images.githubusercontent.com/63466463/151427495-beff78d5-ede2-47df-b747-568371504a0c.gif'>
</p>

## Example
```cpp
std::vector<double> v = { 90, 15, -59, 48, -1, -28 };
Skip_List skip_list{v};

/// Operations
skip_list.insert(5);
skip_list.remove(90);
Node* node = skip_list.search(-1);
skip_list.remove(5);

/// Console
Console console{ skip_list };
console.write_to_file("output.txt");
console.run();
```