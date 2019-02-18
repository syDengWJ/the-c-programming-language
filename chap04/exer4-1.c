#include <stdio.h>

/*
��д����strindex(s, t)�� �������ַ���t��s�����ұ߳��ֵ�λ�á�
���s�в�����t���򷵻�-1.
*/
int strindex(char s[], char t[]) {
  int ns, nt;
  int i, j, k;

  ns = 0;
  while (s[ns++] != '\0')
    ;
  nt = 0;
  while (t[nt++] != '\0')
    ;
  // printf("%d %d %d %d\n", ns, nt, sizeof(s), sizeof(t));
  for (i = ns-nt; s[i] != '\0'; --i) {
    for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++) {
      ;
    }
    if (k > 0 && t[k] == '\0') {
      return i;
    }
  }
  return -1;
}

int main() {
  char s[] = "everytime i try to fly i fall without you near me.";
  char t[] = "try";
  int index = strindex(s, t);
  printf("%d\n", index);
  return 0;
}
