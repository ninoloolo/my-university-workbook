#include <cstdio>
#include <string>
using namespace std;

void swap(string& s1, string& s2, string& s3){
    string temp = s1;
    s1 = s2;
    s2 = s3;
    s3 = temp;
}


int main(){
    string lastname = "Тищенко";
    string firstname = "Юлія";
    string middlename = "Сергіївна";

    printf("Прізвище: %s\n", lastname.c_str());
    printf("Ім`я: %s\n", firstname.c_str());
    printf("По батькові: %s\n\t", middlename.c_str());

    swap(lastname, firstname, middlename);

    printf("Прізвище: %s\n\t", lastname.c_str());
    printf("Ім`я: %s\n\t", firstname.c_str());
    printf("По батькові: %s\n", middlename.c_str());

    return 0;
}
