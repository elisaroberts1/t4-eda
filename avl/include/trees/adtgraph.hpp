namespace trees {

class AAL {
private:

public:
	ALL();
	void insert_rec(int val, ALL* node);
	void insert(int val);
	ALLNode* find_rec(int val, AVLNode* node);
	LLNode* find(int val);
	void traverse_rec(AVLNode* node, int level);
	void traverse();
	virtual ~AVL();
};
}
