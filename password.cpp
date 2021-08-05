// Password Generator / Password Detector

#include <iostream>
using namespace std;

struct Password{
private:
    const int length = 20;
    string pass;
public:
    ~Password();
    Password(string &s);
    bool isValid(string s);
    string suggestion();    
};

Password::~Password(){}
Password::Password(string &s){
    pass = (s);
    if(!isValid(s))
        cout << "Password is not valid, here's is a suggestion: ";
        suggestion();
}

bool Password::isValid(string s){
    if (s.length() < length){
        for(int i = 0; i < s.length(); i++){
            if(isalpha(s[i]) > 0 || isdigit(s[i]) > 0)
                continue;
            else
                return false;
            
        }

    }
    return true;

}

string Password::suggestion(){
    string newSugg;
    for(int i = 0; i < length; i++){
        int charOrNum = 0 +rand()%2;
        char randChar = 'a'+rand()%26;
        if(0+rand()%2 == 1)
            newSugg += (char)0+rand()%10;
        else
            newSugg += randChar;
    }

}

int main(){
    string s = "lol";
    string s1 = "lol123";
    string s2 = "loL";
    string s3 = "!!";
    Password p(s);
    Password p(s1);
    Password p(s2);
    Password p(s3);
    

}

