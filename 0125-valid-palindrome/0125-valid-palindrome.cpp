class Solution {
// private: 
//     bool valid(char ch){
//         if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z')|| (ch>='0' && ch<='9')){
//             return '1';
//         }
//         return 0;
//     }

//     char toLowecase(char ch){
//         if((ch>='a' && ch <='z') || (ch>='0' && ch<='9')){
//             return ch;
//         }else{
//             char temp = ch - 'A' + 'a';
//             return temp;
//         }
//     }
    
// bool checkPalindrome(string a)
// {
//     int s = 0;
//     int e = a.length()-1;

//     while(s<e){
//         if(a[s] != a[e]){
//             return 0;
//         }else{
//             s++;
//             e--;
//         }
//     }

//     return 1;

// }
    

public:
    bool isPalindrome(string s) {

        // string temp = " ";

        // for(int j = 0; j<s.length(); j++){
        //     if(valid(s[j])){
        //         temp.push_back(s[j]);
        //     }
        // } 


        // for(int j=0; j<temp.length(); j++){
        //     temp[j] = toLowecase(temp[j]);
        // }

        // return checkPalindrome(temp);

      int start = 0;
      int end = s.size()-1;

    while(start<end){

        if(!isalnum(s[start])){
            start++; 
            continue;
        } if(!isalnum(s[end])){
            end--;
            continue;
        }if(tolower(s[start])!=tolower(s[end]))return 0;
        else{
            start++;
            end--;
        }
    }

    return 1;

    }
};