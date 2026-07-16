#include <iostream>
#include <map>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

int main(){
    //1. 用 std::map<std::string, int> 存几个人的年龄,遍历打印所有人,再查找某个人是否存在
    std::map<std::string, int> ages;
    ages["li"]=12;
    ages["wang"]=13;
    ages["liu"]=14;
    for (auto& p : ages){
        std::cout<< p.first << ':' << p.second << std::endl;
    }
    if (ages.count("li")>0)  std::cout << "li exists" << std::endl;

    //3. 用std::sort对一个vector<int>降序排序,再用std::find查找某个值是否存在,打印结果
    std::vector<int> v={1,2,3,4,5};
    std::sort(v.begin(),v.end(),std::greater<int>());
    auto it=std::find(v.begin(),v.end(),1);
    if (it!=v.end()) std::cout << "1 exists" << std::endl;

    return 0;
};

//2. 写一个函数 std::vector<int> removeDuplicates(std::vector<int> v),用std::set去重后返回一个排序好的vector
std::vector<int> removeDuplicates(std::vector<int> v){
    std::set<int> s(v.begin(),v.end());
    std::vector<int> v_sorted(s.begin(),s.end());
    return v_sorted;
}

