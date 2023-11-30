#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


// Узел связанного списка
struct Node {
	int data;
	struct Node* next;
};


struct Node* first = NULL;


void printList() {				// Вывод списка
	struct Node* ptr = first;
	while (ptr != NULL) {
		printf("(%d) -> ", ptr->data);
		ptr = ptr->next;
	}
	printf("NULL\n");
}


void addToHead(int value) {		// Добавление элементов
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->next = first;
	newNode->data = value;

	first = newNode;
}


int deleteFromHead() {
	int value = first->data;
	struct Node* delNode = first;
	first = first->next;
	free(delNode);
	return value;
}


int contains(int value) {    // Поиск и определение элемента В СПИСКЕ!
	struct Node* ptr = first;
	while (ptr != NULL) {
		if (ptr->data == value) {
			return 1;
		}
		ptr = ptr->next;
	}
	return 0;
}


void clearList() {			// Очистка списка от Элемента
	while (first != NULL) {
		struct Node* delNode = first;
		first = first->next;
		free(delNode);
	}
}


int sum() {					// Подсчёт суммы всех элементов
	struct Node* ptr = first;
	int s = 0;
	while (ptr != NULL) {
		s += ptr->data;
		ptr = ptr->next;
	}
	return s;
}


int evenCount() {
	struct Node* ptr = first;
	int s = 0;
	while (ptr != NULL) {
		if (ptr->data % 2 == 0) {
			s++;
		}
		ptr = ptr->next;
	}
	return s;
}


int oddsX10() {
	struct Node* ptr = first;
	int s = 0;
	while (ptr != NULL) {
		if (ptr->data % 2 == 1) {
			ptr->data *= 10;
		}
		ptr = ptr->next;
	}
	return s;
}


void elementIx100(int i) {
	struct Node* ptr = first;
	int index = 0;
	while (ptr != NULL) {
		if (index == i) {
			ptr->data = ptr->data * 100;
			return;
		}
		ptr = ptr->next;
		index++;
	}
}


void elementLeftIx10(int i) {
	struct Node* ptr = first;
	int index = 0;
	while (ptr != NULL) {
		if (index < i) {
			ptr->data = ptr->data * 10;
		}
		ptr = ptr->next;
		index++;
	}
}


void elementRightIx10(int i) {
	struct Node* ptr = first;
	int index = 0;
	while (ptr != NULL) {
		if (index > i) {
			ptr->data = ptr->data * 10;
		}
		ptr = ptr->next;
		index++;
	}
}




void deleteElementI(int i) {
	if (first == NULL) {
		return;
	} 

	if (i == 0) {
		deleteFromHead();
		return;
	}

	struct Node* prev_ptr = first;
	struct Node* ptr = first->next;
	int index = 1;

	while (ptr != NULL) {
		for (index = 1; index < i - 1; index++) {
			ptr = ptr->next;
		}
		struct Node* del = ptr->next; // del pointer points to the node
		// to be deleted
		ptr->next = ptr->next;
		printf("\nElement deleted is : %d\n", del->data);
		free(del); // Node is deleted

		/*while (index < i) {
			if (index == i) {
				ptr = first->next;
				struct Node* del = prev_ptr;
				free(del);
				prev_ptr->next;
			}
			index++;
		}*/
		
			//prev_ptr = prev_ptr->next;
			//first = prev_ptr->next;
			//first->next = ptr;		!!
			//prev_ptr = ptr;

			/*int value = first->data;
			struct Node* delNode = first;
			first = first->next;
			free(delNode);
			return value;*/

		//prev_ptr = ptr;
		//ptr = ptr->next;
	}
}


void Delete (int pos) {
	struct Node* prev_ptr = first; // Creating a temporary
	// variable pointing to head
	int i;
	if (pos == 0) {
		printf("\nElement deleted is : %d\n", prev_ptr->data);
		first = first->next; // Advancing the head pointer
		prev_ptr->next = NULL;
		free(prev_ptr); // Node is deleted
	}
	else {
		for (i = 0; i < pos - 1; i++) {
			prev_ptr = prev_ptr->next;
		}
		// Now temp pointer points to the previous node of
		// the node to be deleted
		struct Node* del = prev_ptr->next; // del pointer points to the node
		// to be deleted
		prev_ptr->next = prev_ptr->next->next;
		printf("\nElement deleted is : %d\n", del->data);
		del->next = NULL;
		free(del); // Node is deleted
	}
	printf("\nUpdated Linked List is : \n");
	printList();
	return;
}








// Вспомогательная функция для вывода заданного связанного списка
void printList(struct Node* head) {
	struct Node* ptr = head;
	while (ptr)
	{
		printf("%d -> ", ptr->data);
		ptr = ptr->next;
	}

	printf("NULL\n");
}

// Функция для вставки нового узла в начало связанного списка
void push(struct Node** head, int data) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = *head;

	*head = newNode;
}

// Рекурсивная функция для обращения заданного связанного списка. Он обращает вспять
// полученный связанный список путем фиксации указателя заголовка и затем 'next'
// указатели на каждый узел в обратном порядке
void recursiveReverse(struct Node* head, struct Node** headRef) {
	struct Node* first;
	struct Node* rest;

	// Случай пустого списка
	if (head == NULL) {
		return;
	}

	first = head;           // предположим, что сначала = {1, 2, 3}
	rest = first->next;     // rest = {2, 3}

	// Случай: список имеет только один узел
	if (rest == NULL)
	{
		// Фиксируем здесь указатель головы
		*headRef = first;
		return;
	}

	// Рекурсивно инвертируем меньший случай {2, 3}
	// после: rest = {3, 2}
	recursiveReverse(rest, headRef);

	// помещаем первый элемент в конец списка
	rest->next = first;
	first->next = NULL;    
}

// Реверсировать заданный связанный список. Функция принимает указатель
// (ссылка) на головной указатель
void reverse(struct Node** head) {
	recursiveReverse(*head, head);
}





void launch1() {
	// Связанный, но не динамический
	printList();

	struct Node node1 = { 1,NULL };
	struct Node node2 = { 2,NULL };
	struct Node node3 = { 3,NULL };
	printList();

	first = &node1;
	printList();

	node1.next = &node2;
	printList();

	node2.next = &node3;
	printList();


	printf("\n\n\n");

}


void launch2() {
	// Связанныый и динамический
	printList();

	addToHead(10);	// Наполнение списка 1 элемент
	printList();

	addToHead(20);	// Наполнение списка 2 элемента
	printList();

	addToHead(30);  // Наполнение списка 3 элемента
	printList();


	int x1 = deleteFromHead();
	printf("x1= %d\n", x1);
	printList();

	int x2 = deleteFromHead();
	printf("x2 = %d\n", x2);
	printList();


	printf("\n\n\n");
}


void launch3() {
	printList();

	addToHead(400);
	addToHead(300);
	addToHead(200);
	addToHead(100);
	printList();

	printf("contains(100) = %d\n", contains(100));
	printf("contains(150) = %d\n", contains(150));
	printf("contains(200) = %d\n", contains(200));

	clearList();
	printList();

	printf("contains(100) = %d\n", contains(100));
	printf("contains(150) = %d\n", contains(150));
	printf("contains(200) = %d\n", contains(200));


	{
		int l;
		scanf("%d", &l);
	}

}


void launch4() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(9);
	printList();

	printf("sum = %d\n", sum());

	clearList();
	printList();
	printf("sum = %d\n", sum());

	{
		int l1;
		scanf_s("%d", &l1);
	}

}


void launch5() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();

	printf("even numbers = %d\n", evenCount());

	clearList();
	printList();
	printf("even numbers = %d\n", evenCount());
	
	{
		int l2;
		scanf("%d", &l2); 
	}
}


void launch6() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();

	oddsX10();
	printList();

	clearList();
	printList();

	{
		int l3;
		scanf("%d", &l3);
	}
}


void launch7() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();

	elementIx100(0);		// 1ый элемент увеличиваем в 100 раз
	printList();

	elementIx100(2);		// 3ий Элемент увеличивается в 100 раз
	printList();

	elementIx100(0);		// 1ый элемент увеличиваем в 100 раз
	printList();


	{
		int l4;
		scanf("%d", &l4);
	}
}


void launch8() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();

	elementLeftIx10(1);		// Левее i-того элемента увеличиваем
	printList();

	elementLeftIx10(2);		// Левее i-того элемента увеличиваем
	printList();

	elementLeftIx10(4);		// Левее i-того элемента увеличиваем
	printList();


	{
		int l5;
		scanf("%d", &l5);
	}
}


void launch9() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	printList();

	elementRightIx10(1);		// Правее i-того элемента увеличиваем
	printList();

	elementRightIx10(2);		// Правее i-того элемента увеличиваем
	printList();

	elementRightIx10(4);		// Правее i-того элемента увеличиваем
	printList();


	{
		int l6;
		scanf("%d", &l6);
	}
}


void launch10() {
	printList();

	addToHead(1);
	addToHead(3);
	addToHead(6);
	addToHead(8);
	addToHead(12);

	printf("\n--Created Linked List--\n");
	printList();
	printf("\nLinked List after deletion at position 0");
	Delete (1); // List indexing starts from 0
	printf("\nLinked List after deletion at position 2");
	Delete (2);


	{
		int l7;
		scanf("%d", &l7);
	}
}



void launch11() {
	// ключи ввода
	int keys[] = { 1, 2, 3, 4, 5, 6 };
	int n = sizeof(keys) / sizeof(keys[0]);

	struct Node* head = NULL;
	for (int i = n - 1; i >= 0; i--) {
		push(&head, keys[i]);
	}

	printList(head);
	reverse(&head);
	printList(head);

}


void main() {

	int item = -1;
		printf("\n");
		printf("==============================\n");
		printf("1: launch 1\n");
		printf("2: launch 2\n");
		printf("3: launch 3\n");
		printf("4: launch 4\n");
		printf("5: launch 5\n");
		printf("6: launch 6\n");
		printf("7: launch 7\n");
		printf("8: launch 8\n");
		printf("9: launch 9\n");
		printf("10: launch 10\n");
		printf("11: launch 11\n");

		printf("\n");
		printf(" >>>>>> ");
		scanf_s("%d", &item);

		switch (item) {
		case 1:
			launch1();
			break;
		case 2:
			launch2();
			break;
		case 3:
			launch3();
			break;
		case 4:
			launch4();
			break;
		case 5:
			launch5();
			break;
		case 6:
			launch6();
			break;
		case 7:
			launch7();
			break;
		case 8:
			launch8();
			break;
		case 9:
			launch9();
			break;
		case 10:
			launch10();
			break;
		case 11:
			launch11();
			break;
		}
}