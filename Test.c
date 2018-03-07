#include"Hash.h"

void TestHash()
{
	HashTable ht;
	size_t size = 11;
	HashTableInit(&ht, size);
	HashTableInsert(&ht, 37, 0);
	HashTableInsert(&ht, 25, 0);
	HashTableInsert(&ht, 14, 0);
	HashTableInsert(&ht, 36, 0);
	HashTableInsert(&ht, 49, 0);
	HashTableInsert(&ht, 68, 0);
	HashTableInsert(&ht, 57, 0);
	HashTableInsert(&ht, 11, 0);

	HashTablePrint(&ht);

	HashTableInsert(&ht, 1, 0);
	HashTableInsert(&ht, 2, 0);
	HashTableInsert(&ht, 3, 0);
	HashTableInsert(&ht, 4, 0);
	HashTableInsert(&ht, 5, 0);
	HashTablePrint(&ht);
	HashTableRemove(&ht, 36);
	HashTableRemove(&ht, 57);
	HashTableRemove(&ht, 11);
	HashTablePrint(&ht);
	printf("37?%d \n", HashTableFind(&ht, 37)->_key);
	printf("25?%d \n", HashTableFind(&ht, 25)->_key);
	printf("14?%d \n", HashTableFind(&ht, 14)->_key);
	printf("36?%d \n", HashTableFind(&ht, 36)->_key);
	printf("49?%d \n", HashTableFind(&ht, 49)->_key);
	printf("68?%d \n", HashTableFind(&ht, 68)->_key);
	printf("57?%d \n", HashTableFind(&ht, 57)->_key);
	printf("11?%d \n", HashTableFind(&ht, 11)->_key);
	printf("1?%p \n", HashTableFind(&ht, 1));




}

int main()
{

	TestHash();
	system("pause");
	return 0;

}
