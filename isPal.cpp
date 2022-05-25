bool checkPalindrome(char str[]) {
    // Write your code here
    bool isPal=true;
    int i=0;
    int size=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }
    int start=0;
    int last=size-1;
    while(start<last){
        if(str[start]==str[last]){
            start++;
            last--;
            continue;
        }
        else {
            isPal=false;
            break;
        }
    }
    return isPal;
}
