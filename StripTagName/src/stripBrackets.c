#include <stdio.h>


void stripTagName(char* tag);


int main(int argc, char* argv[])
{
    if (argc <= 1)
    {
        printf("Give me a tag.\n");
        return 1;
    }
    
    stripTag(argv[1]);
    printf("[%s]\n", argv[1]);
    
    return 0;
}

void stripTagName(char* tag)
{
    if (!tag)
        return;
    
    int i = 0, j = 0;
    while (tag[i] && tag[i] != ' ' && tag[i] != '>')
    {
        if (tag[i] != '<' && tag[i] != '/')
            tag[j++] = tag[i];
        i++;
    }
    tag[j] = '\0';
}
