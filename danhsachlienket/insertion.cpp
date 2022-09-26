#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct SinhVien{
    string ma,ten;
    float gpa;
    void nhap(){
        getline(cin,ma);
        getline(cin,ten);
        cin >> gpa;
    }
    void in(){
        cout << ma << ' ' << ten << ' ' << fixed << setprecision(2) << gpa << endl;
    }
};

struct node{
    SinhVien data;
    node *next;
};

node *makeNode(SinhVien x){
    node *ptr = new node;
    ptr->data = x;
    ptr->next = NULL;
    return ptr;
}

void themdau(node *&head, SinhVien x){
    node *newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}

void themcuoi(node *&head, SinhVien x){
    node *newNode = makeNode(x);
    if(head == NULL){
        themdau(head,x);
        return;
    }
    node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

int sz(node *head){
    int dem = 0;
    while(head != NULL){
        dem++;
        head = head->next;
    }
    return dem;
}

void themgiua(node *&head, SinhVien x, int pos){
    node *newNode = makeNode(x);
    int n = sz(head);
    if(pos < 1 || pos > n + 1){
        return;
    }
    if(pos == 1){
        themdau(head,x);
        return;
    }
    node *tmp = head;
    for(int i = 1; i <= pos - 2; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void duyet(node *head){
    while(head != NULL){
        head->data.in();
        head = head->next;
    }
}

int main(){
    node *head = NULL;
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cin.ignore();
        if(n == 1){
            SinhVien x;
            x.nhap();
            themdau(head,x);
        }
        else if(n == 2){
            SinhVien x;
            x.nhap();
            themcuoi(head,x);
        }
        else if(n == 3){
            int pos; cin >> pos;
            cin.ignore();
            SinhVien x;
            x.nhap();
            themgiua(head,x,pos);
        }
    }
    duyet(head);
    return 0;
}