#include <stdio.h>
#include <string.h>

void reverse_helper(char *left, char *right) {
    if (left >= right) {
        return;
    }

    char temp = *left;
    *left = *right;
    *right = temp;

    reverse_helper(left+1,right-1);   // 往中间走
}

void reverse_string_rec(char *s) {
    if (*s == '\0') {
        return;
    }

    char *right = s + strlen(s) - 1;
    reverse_helper(s, right);
}
int main(){
	char a[] = "hello";
	reverse_string_rec(a);
	printf("%s\n", a);   // olleh

	char b[] = "abcd";
	reverse_string_rec(b);
	printf("%s\n", b);   // dcba
}
