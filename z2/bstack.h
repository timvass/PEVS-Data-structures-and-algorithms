const int MAX_LENGTH = 51;

class CharStack {
public:
    CharStack();
    bool IsEmpty() const;
    bool IsFull() const;
    void Push( /* in */ char ch);
    void Pop();
    char Top() const;
    bool operator==(CharStack stack);
private:
    char data[MAX_LENGTH];
    int top;
};
