#include <string>
#include <vector>
#include <iostream>

//1. 计算vector里所有数的平均值,在main里用几个数字测试
double average(std::vector<int> nums){
    int num=0,sum=0;
    for (int i: nums){
        sum+=i;
        num+=1;
    }
    double avg=static_cast<double>(sum)/num;
    return avg;
}

//2. 判断字符串是否是回文,正读反读一样
bool isPalindrome(std::string s){
    int l=s.length();
    int mid=l/2;
    for (int i=0; i<=mid; i++){
        if (s[i]!=s[l-1-i]) return false;
    }
    return true;
}

//3. 
int main(){
    std::vector<std::string> names;
    names.push_back("li");
    names.push_back("wang");
    names.push_back("liu");
    for (std::string s: names){
        std::cout << s <<std::endl;
    }
    return 0;
}