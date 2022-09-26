#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct node{
    int data;
    node *next;
};

node *makeNode(int x){
    node *ptr = new node;
    ptr->data = x;
    ptr->next = NULL;
    return ptr;
}

void themdau(node *&head, int x){
    node *newNode = makeNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void infront(node *head){
    node *tmp = head;
    if(head == NULL){
        cout << "EMPTY" << endl;
        return;
    }
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    cout << tmp->data << endl;
}

void xoacuoi(node *&head){
    node *tmp = head;
    if(head == NULL) return;
    if(head->next == NULL){
        head = NULL;
        delete(tmp);
        return;
    }
    while(tmp->next->next != NULL){
        tmp = tmp->next;
    }
    node *xoa = tmp->next;
    tmp->next = NULL;
    delete(xoa);
}

int main(){
    node *head = NULL;
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s == "push"){
            int x; cin >> x;
            themdau(head,x);
        }
        else if(s == "front"){
            infront(head);
        }
        else if(s == "pop"){
            xoacuoi(head);
        }
    }
    return 0;
}