#include <stdio.h>
#define END 0

typedef int Elementype;

typedef struct{
    Elementype Data;// data of the node
    int Parent;     // positive for non-root node, the subscript of parent;
                    // negative for root node, the absolute value of the number of set;
                    // zero as the end of array
} SetType;

int Find(SetType* s, Elementype x){
    int i;
    for (i = 1; s[i].Parent != END && s[i].Data != x; i++)//find x in the array(from 1)
        ;
    if (s[i].Parent == END)
        return 0;

    // find the root of the x
    int root = i;
    while (s[root].Parent > 0){
        root = s[root].Parent;
    }
    
    //compress the path: connect all nodes on the path to the root directly
    int parent;
    while (i != root){
        parent = s[i].Parent;
        s[i].Parent = root;
        i = parent;
    }

    return root;
}

void Union(SetType*s, Elementype x1, Elementype x2){
    int root1 = Find(s, x1);
    int root2 = Find(s, x2);

    if (s[root1].Parent < s[root2].Parent){
        s[root2].Parent += s[root1].Parent;
        s[root1].Parent = root2;
    }else if (s[root1].Parent > s[root2].Parent){
        s[root1].Parent += s[root2].Parent;
        s[root2].Parent = root1;
    }
}
