# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct element{
        char word[64];
        int count;
        struct element *next;
};

struct element *first = NULL;

struct element *find(char t[64]){
        struct element *current = first;
        while (current != NULL){
                if (strcmp(t, current->word) == 0) return current;
                current = current->next;
        }
        return NULL;
}

int main(){
        FILE *f = fopen("extask01-a.txt", "r");
        while (1){
                char t[64];
                int n = fscanf(f, "%s", t);
                if (n != 1) break;
                struct element *found = find(t);
                if (found != NULL) found->count++;
                else{
                        struct element *created = (struct element *) malloc(sizeof(struct el>
                        strcpy(created->word, t);
                        created->count = 1;
                        created->next = first;
                        first = created;
                }
        }
        fclose(f);
        struct element *current = first;
        while (current != NULL){
                printf("%s %d\n", current->word, current->count);
                current = current->next;
        }
        return 0;
}
