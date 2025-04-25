

char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    char len2 = strlen(word2);
    char* merge= (char*)malloc(len1+len2 + 1);
    int i = 0, k = 0;
    while(i < len1 && i < len2) {
        merge[k++]=word1[i];
        merge[k++]=word2[i++];
        }
    while (i < len1) {
        merge[k++] = word1[i++];
    }
    while (i < len2) {
        merge[k++] = word2[i++];
    }
    merge[k] = '\0';
    return merge;
}
