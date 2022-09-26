#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct node{
    int data;
    node *next;
    node *prev;
};

node *makeNode(int x){
    node *ptr = new node;
    ptr->data = x;
    ptr->next = NULL;
    ptr->prev = NULL;
    return ptr;
}




void themdau(node *&head,int x){
    node *newNode = makeNode(x);
    newNode->next = head;
    if(head == NULL){
        head = newNode;
    }
    head->prev = newNode;
    head = newNode;
}

void themcuoi(node *&head,int x){
    node *newNode = makeNode(x);
    node *tmp = head;
    if(head == NULL){
        themdau(head,x);
        return;
    }
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    newNode->prev = tmp;
    tmp->next = newNode;
}
void duyet(node *head){
    while(head != NULL){
        cout << head->data << ' ';
        head = head->next;
    }
}

int main(){
    node *head = NULL;
    int n,k; cin >> n >> k;
    while(n--){
        int x; cin >> x;
        if(x != k)
            themcuoi(head,x);
    }
    if(head == NULL) {
        cout << "EMPTY" << endl;
    }
    else 
        duyet(head);
    return 0;
}