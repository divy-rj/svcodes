class node {
public:
    int data;
    node *next;

    explicit node(int data) {
        this->data = data;
        next = nullptr;
    }
};

void createlist(node **head) {
    cout << "enter size of list";
    int j, n;
    node *curr = nullptr, *pre = nullptr;
    cin >> j;
    for (int i = 0; i < j; ++i) {
        if ((*head) == nullptr) {
            cout << "Enter data :";
            cin >> n;
            curr = new node(n);
            (*head) = curr;
            pre = curr;

        } else {
            cout << "Enter data :";
            cin >> n;
            curr = new node(n);
            pre->next = curr;
            pre = curr;


        }
    }
}

void print_list(node *head) {
    node *ptr;
    for (ptr = head; ptr != nullptr; ptr = ptr->next) {

        cout << ptr->data << " ";
    }
}