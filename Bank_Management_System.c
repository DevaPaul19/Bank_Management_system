#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define HASH_TABLE_SIZE 100
#define NUM_ACCOUNTS 1000
char load = 219;
char lod = 254;
void log_in() {
    system("color 02");
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading account modules....\n\n");
    for (int i = 0; i < 40; i++) {
        usleep(100000);
        printf("%c", load);
    }
    for (int i = 0; i < 30; i++) {
        usleep(1000);
        printf("%c", load);
    }
    for (int i = 0; i < 30; i++) {
        usleep(10000);
        printf("%c", load);
    }
    for (int i = 0; i < 20; i++) {
        printf("%c", load);
    }
}

void log_out() {
		system("color 02");
		printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLog Out....\n\n");
		for (int i = 0; i < 40; i++)
		{
			usleep(100000);
			printf(load);
		}
		for (int i = 0; i < 30; i++)
		{
			usleep(1000);
			printf(load);
		}
		for (int i = 0; i < 30; i++)
		{
			usleep(10000);
			printf( load);
		}
		for (int i = 0; i < 20; i++)
		{
			printf(load);
		}
	}
void employee_account_login() {
    system("cls");
    system("color 07");
    printf("\n");
    printf("\t\t\t\t");
    for (int i = 0; i <= 50; i++) {
        printf("%c", load);
    }
    printf("\n");
    printf("\t\t\t\t%c                                                 %c\n", load, load);
    printf("\t\t\t\t%c             Employee Login portal               %c\n", load, load);
    printf("\t\t\t\t%c                                                 %c\n", load, load);
    printf("\t\t\t\t");
    for (int i = 0; i <= 50; i++) {
        printf("%c", load);
    }
    printf("\n\n");
}
void admin_account_login() {
    system("cls");

    system("color 07");
    printf("\n");
    printf("\t\t\t\t");
    for (int i = 0; i <= 50; i++) {
        printf("%c", load);
    }
    printf("\n");
    printf("\t\t\t\t%c                                                 %c\n", load, load);
    printf("\t\t\t\t%c               Admin Login portal                %c\n", load, load);
    printf("\t\t\t\t%c                                                 %c\n", load, load);
    printf("\t\t\t\t");
    for (int i = 0; i <= 50; i++) {
        printf("%c", load);
    }
    printf("\n\n");
}
void wellcome_slomo() {
		system("color 07");
		usleep(500);

		printf(" \t\t\t\t\t           ***** WELCOME *****                             ");
		printf("\n");
		for (int i = 0; i < 119; i++) {
			printf("%c",lod);
		}
		usleep(100);
		for (int i = 0; i < 119; i++) {
			printf("%c",lod);
		}
		printf("\n\t\t             %c\t\t\t\t\t\t\t\t\t %c"  ,load,load);
		printf("\n\t\t             %c\t\t\t   ",load);
		char bn[] = "Bank Management System";
		for (int i = 0; i <sizeof(bn); i++) {
			usleep(10);
			printf("%c",bn[i]);
		}
		printf("\t\t\t %c" ,load);
		printf("\n\t\t             %c" ,load);
		printf("");
		for (int i = 0; i < 67; i++) {
			printf("%c",lod);
		}
		printf("%c",load);
		printf("\n\t\t             %c\t\t\t\t\t\t\t\t\t %c",load ,load);
		printf("\n\t\t             %c\t",load);
		char d[] = "Implementation";
		for (int i = 0; i < sizeof(d); i++) {
			usleep(10000);
			printf("%c",d[i]);
		}
		printf("\t\t\t  ");
		char a[]= "Team-5";
		for (int i = 0; i < sizeof(a); i++) {
			usleep(10000);
			printf("%c",a[i]);
		}
		printf("       \t\t\t %c" ,load);
		printf("\n\t\t             %c\t",load);
		char en[]= "Bank Name";
		for (int i = 0; i < sizeof(en); i++) {
			usleep(10000);
			printf("%c",en[i]);
		}
		printf("    \t\t\t  ");
		char em[] = "HDDCS";
		for (int i = 0; i < sizeof(em); i++) {
			usleep(10000);
			printf("%c" ,em[i]);
		}
		printf("       \t\t\t %c" ,load);
		printf("\n\t\t             %c\t",load);
		char co[] = "Course Name";
		for (int i = 0; i < sizeof(co); i++) {
			usleep(10000);
			printf("%c",co[i]);
		}
		printf("    \t\t\t  ");
		char c[] = "Data Structures & Algothrim";
		for (int i = 0; i < sizeof(c); i++) {
			usleep(10000);
			printf("%c",c[i]);
		}
		printf("    %c" ,load);
		printf("\n\t\t             %c\t",load);
	char ins[]= "Instructor";
		for (int i = 0; i < sizeof(ins); i++) {
			usleep(10000);
			printf("%c",ins[i]);
		}
		printf("\t\t\t  ");
		char t[] = "Dr.Shrutilipi Bhattacharjee";
		for (int i = 0; i < sizeof(t); i++) {
			usleep(10000);
			printf("%c",t[i]);
		}
		printf("    %c" ,load);
		printf("\n");
		usleep(10000);
		for (int i = 0; i < 119; i++) {
			printf("%c",lod);
		}
		usleep(100000);
		char uni[100] = "National Institute of Technology Karnataka";
		printf("\n\n\t\t\t\t\t");
		for (int i = 0; i <sizeof(uni); i++) {
			usleep(10000);
			printf("%c",uni[i]);
		}
		printf("\n");
		usleep(10000);
		for (int i = 0; i < 119; i++) {
			printf("%c",lod);
		}
		printf("");
		usleep(1000000);
		printf("\n");
	}
void employee_logo() {
    system("cls");
    system("color 07");
    printf("\n\n");
    printf("\t\t\t\t\t");
    for (int i = 0; i <= 29; i++)
    {
        printf("%c", load);
    }
    printf("\n");
    printf("\t\t\t\t\t%c                            %c\n", load, load);
    printf("\t\t\t\t\t%c      Employee Portion      %c\n", load, load);
    printf("\t\t\t\t\t%c                            %c\n", load, load);
    printf("\t\t\t\t\t%c", load);
    for (int i = 0; i <= 27; i++)
    {
        printf("%c", lod);
    }
    printf("%c      \n", load);
    printf("\t\t\t\t\t%c                            %c\n", load, load);
    printf("\t\t\t\t\t%c  ", load);
    for (int i = 0; i <= 23; i++)
    {
        printf("%c", load);
    }
    printf("  %c\n", load);
    printf("\t\t\t\t\t%c  %c                      %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (1) Create Account   %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (2) Search Account   %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (3) Update Account   %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (4) Send Money       %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (5) Delete Account   %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (6) Log out          %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c                      %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  ", load);
     for (int i = 0; i <= 23; i++)
    {
        printf("%c", load);
    }
    printf("  %c\n", load);
   printf("\t\t\t\t\t%c  %c                      %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t");
    for (int i = 0; i <= 29; i++)
    {
        printf("%c", load);
    }
    printf("\n");
}
void admin_logo() {
    system("cls");
    system("color 07");
    printf("\n\n");
    printf("\t\t\t\t\t");
    for (int i = 0; i <= 32; i++)
    {
        printf("%c", load);
    }
    printf("\n");
    printf("\t\t\t\t\t%c                               %c\n", load, load);
    printf("\t\t\t\t\t%c         Admin Portal          %c\n", load, load);
    printf("\t\t\t\t\t%c                               %c\n", load, load);
    printf("\t\t\t\t\t%c", load);
    for (int i = 0; i <= 30; i++)
    {
        printf("%c", lod);
    }
    printf("%c      \n", load);
    printf("\t\t\t\t\t%c                               %c\n", load, load);
    printf("\t\t\t\t\t%c  ", load);
    for (int i = 0; i <= 26; i++)
    {
        printf("%c", load);
    }
    printf("  %c\n", load);
    printf("\t\t\t\t\t%c  %c                         %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (1) Add Employee        %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (2) Search Employee     %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (3) Update Employee     %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (4) Delete Employee     %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (5) Change Password     %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (6) Logout              %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c                         %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  ", load);
    for (int i = 0; i <= 26; i++)
    {
        printf("%c", load);
    }
    printf("  %c\n", load);
    printf("\t\t\t\t\t%c                               %c\n", load, load);
    printf("\t\t\t\t\t");
    for (int i = 0; i <= 32; i++)
    {
        printf("%c", load);
    }
    printf("\n");

}
void load_Bar() {
		system("color 02");
		printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tLoading modules please wait....\n\n");
		for (int i = 0; i < 20; i++)
		{
			usleep(100000);
			printf("%c",load);
		}
		for (int i = 0; i < 30; i++)
		{
			usleep(10000);
			printf("%c",load);
		}
		for (int i = 0; i < 40; i++)
		{
			usleep(1000);
			printf("%c",load);
		}
		for (int i = 0; i < 30; i++)
		{
			usleep(100);
			printf("%c",load);;
		}
	}
void load_Bar1() {
		system("color 02");
		printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tLogging out....\n\n");
		for (int i = 0; i < 20; i++)
		{
			usleep(100000);
			printf("%c",load);
		}
		for (int i = 0; i < 30; i++)
		{
			usleep(10000);
			printf("%c",load);
		}
		for (int i = 0; i < 40; i++)
		{
			usleep(1000);
			printf("%c",load);
		}
		for (int i = 0; i < 30; i++)
		{
			usleep(100);
			printf("%c",load);;
		}
	}

void home_logo() {
  system("cls");
  system("color 07");
  printf("\n");
  printf("\t\t\t\t\t");
  for (int i = 0; i <= 33; i++) {
        printf("%c", load);
  }
  printf("\n");
  printf("\t\t\t\t\t%c                                %c\n", load,load);
  printf("\t\t\t\t\t%c   BANKING MANAGEMENT SYSTEM    %c\n", load,load);
  printf("\t\t\t\t\t%c                                %c\n", load,load);
  printf("\t\t\t\t\t%c", load);
  for (int i = 0; i <= 31; i++) {
    printf("%c", load);
  }
  printf("%c\n", load);
  printf("\t\t\t\t\t%c                                %c\n", load,load);
  printf("\t\t\t\t\t%c   ", load);
  for (int i = 0; i <= 25; i++) {
    printf("%c", load);
  }
  printf("   %c\n", load);
  printf("\t\t\t\t\t%c   %c                        %c   %c\n", load,load,load,load);
  printf("\t\t\t\t\t%c   %c       Login Form       %c   %c\n", load,load,load,load);
  printf("\t\t\t\t\t%c   %c                        %c   %c\n", load,load,load,load);
  printf("\t\t\t\t\t%c   ",load);
  for (int i = 0; i <= 25; i++) {
    printf("%c",load);
  }
  printf("   %c\n", load);
  printf("\t\t\t\t\t%c                                %c\n", load, load);
  printf("\t\t\t\t\t%c   ", load);
  for (int i = 0; i <= 25; i++) {
    printf("%c", load);
  }
  printf("   %c\n", load);
  printf("\t\t\t\t\t%c   %c                        %c   %c\n", load,load,load,load);
  printf("\t\t\t\t\t%c   %c  (1) Admin login       %c   %c\n", load,load,load,load);
  printf("\t\t\t\t\t%c   %c  (2) Employee  login   %c   %c\n", load,load,load,load);
  printf("\t\t\t\t\t%c   %c  (3) User login        %c   %c\n", load,load,load,load);
  printf("\t\t\t\t\t%c   %c  (0) Exit              %c   %c\n", load,load,load,load);
  printf("\t\t\t\t\t%c   %c                        %c   %c\n", load,load,load,load);
  printf("\t\t\t\t\t");
  for (int i = 0; i <= 33; i++) {
        printf("%c", load);
  }
  printf("\n");
}

typedef struct {
  char name[100];
  char password[100];
  int employee_id;
  int is_admin;
} Employee;

typedef struct {
  int account_number;
  char account_holder_name[100];
  char ifsc_code[100];
  char password[100];
  int balance;
} Account;

typedef struct {
  int account_number;
  char transaction_type[100];
  int amount;
  time_t timestamp;
} Transaction;

typedef struct HashTableNode {
  Employee employee;
  struct HashTableNode *next;
} HashTableNode;

typedef struct {
  HashTableNode *nodes[HASH_TABLE_SIZE];
} HashTable;

void hash_table_init(HashTable *table) {
  for (int i = 0; i < HASH_TABLE_SIZE; i++) {
    table->nodes[i] = NULL;
  }
}

int hash_table_hash(int employee_id) {
  return employee_id % HASH_TABLE_SIZE;
}

void hash_table_add(HashTable *table, Employee employee) {
  int index = hash_table_hash(employee.employee_id);
  HashTableNode *node = malloc(sizeof(HashTableNode));
  node->employee = employee;
  node->next = table->nodes[index];
  table->nodes[index] = node;
}

Employee *hash_table_get(HashTable *table, int employee_id) {
  int index = hash_table_hash(employee_id);
  HashTableNode *node = table->nodes[index];
  while (node != NULL) {
    if (node->employee.employee_id == employee_id) {
      return &node->employee;
    }
    node = node->next;
  }
  return NULL;
}

void hash_table_remove(HashTable *table, int employee_id) {
  int index = hash_table_hash(employee_id);
  HashTableNode *node = table->nodes[index];
  HashTableNode *prev = NULL;
  while (node != NULL) {
    if (node->employee.employee_id == employee_id) {
      if (prev == NULL) {
        table->nodes[index] = node->next;
      } else {
        prev->next = node->next;
      }
      free(node);
      return;
    }
    prev = node;
    node = node->next;
  }
}

void hash_table_free(HashTable *table) {
  for (int i = 0; i < HASH_TABLE_SIZE; i++) {
    HashTableNode *node = table->nodes[i];
    while (node != NULL) {
      HashTableNode *next = node->next;
      free(node);
      node = next;
    }
  }
}

void print_employee(Employee *employee) {
  printf("Employee ID: %d\n", employee->employee_id);
  printf("Name: %s\n", employee->name);
  printf("Is Admin: %d\n", employee->is_admin);
  printf("\n");
}

void print_account(Account *account) {
  printf("Account Number: %d\n", account->account_number);
  printf("Account Holder Name: %s\n", account->account_holder_name);
  printf("IFSC Code: %s\n", account->ifsc_code);
  printf("Balance: %d\n", account->balance);
  printf("\n");
}

void print_transaction(Transaction *transaction) {
  printf("Account Number: %d\n", transaction->account_number);
  printf("Transaction Type: %s\n", transaction->transaction_type);
  printf("Amount: %d\n", transaction->amount);
  printf("Timestamp: %s", ctime(&transaction->timestamp));
  printf("\n");
}

void admin_menu(HashTable *employee_table, Account accounts[], int num_accounts,
                Transaction transactions[], int num_transactions) {
  char choice[100];
  while (1) {
    admin_logo();
    printf("\n\t\t\t\t\t      Enter your choice: ");
    scanf("%s", choice);
    printf("\n");
    system("cls");

    if (strcmp(choice, "1") == 0) {
      Employee employee;
      printf("Enter Employee ID: ");
      scanf("%d", &employee.employee_id);
      printf("Enter Name: ");
      scanf("%s", employee.name);
      printf("Enter Password: ");
      scanf("%s", employee.password);
      printf("Enter Is Admin (0 for No, 1 for Yes): ");
      scanf("%d", &employee.is_admin);
      hash_table_add(employee_table, employee);
      printf("Employee added successfully.\n\n");
      system("pause");
        } else if (strcmp(choice, "2") == 0) {
      int employee_id;
      printf("Enter Employee ID to search: ");
      scanf("%d", &employee_id);
      Employee *employee = hash_table_get(employee_table, employee_id);
      if (employee == NULL) {
        printf("Employee not found.\n\n");
      } else {
        print_employee(employee);
        system("pause");
      }
    } else if (strcmp(choice, "3") == 0) {
      int employee_id;
      printf("Enter Employee ID to update: ");
      scanf("%d", &employee_id);
      Employee *employee = hash_table_get(employee_table, employee_id);
      if (employee == NULL) {
        printf("Employee not found.\n\n");
      } else {
        printf("Enter Name: ");
        scanf("%s", employee->name);
        printf("Enter Password: ");
        scanf("%s", employee->password);
        printf("Enter Is Admin (0 for No, 1 for Yes): ");
        scanf("%d", &employee->is_admin);
        printf("Employee updated successfully.\n\n");
        system("pause");
      }
    } else if (strcmp(choice, "4") == 0) {
      int employee_id;
      printf("Enter Employee ID to delete: ");
      scanf("%d", &employee_id);
      Employee *employee = hash_table_get(employee_table, employee_id);
      if (employee == NULL) {
        printf("Employee not found.\n\n");
      } else {
        hash_table_remove(employee_table, employee_id);
        printf("Employee deleted successfully.\n\n");
        system("pause");
      }

    } else if (strcmp(choice, "5") == 0) {
      char password[100];
      printf("Enter old password: ");
      scanf("%s", password);
      int employee_id;
      printf("Enter Employee ID: ");
      scanf("%d", &employee_id);
      Employee *employee = hash_table_get(employee_table, employee_id);
      if (employee == NULL) {
        printf("Employee not found.\n\n");
      } else if (strcmp(employee->password, password) != 0) {
        printf("Incorrect password.\n\n");
      } else {
        printf("Enter new password: ");
        scanf("%s", employee->password);
        printf("Password changed successfully.\n\n");
        system("pause");
      }

    } else if (strcmp(choice, "6") == 0) {

      load_Bar1();
      system("pause");
      break;

    } else {
      printf("Invalid choice.\n\n");
    }
  }
}
void user_logo() {
    system("cls");
    system("color 07");
    printf("\n\n");
    printf("\t\t\t\t\t");
    for (int i = 0; i <= 29; i++)
    {
        printf("%c", load);
    }
    printf("\n");
    printf("\t\t\t\t\t%c                            %c\n", load, load);
    printf("\t\t\t\t\t%c      User Portal           %c\n", load, load);
    printf("\t\t\t\t\t%c                            %c\n", load, load);
    printf("\t\t\t\t\t%c", load);
    for (int i = 0; i <= 27; i++)
    {
        printf("%c", lod);
    }
    printf("%c      \n", load);
    printf("\t\t\t\t\t%c                            %c\n", load, load);
    printf("\t\t\t\t\t%c  ", load);
    for (int i = 0; i <= 23; i++)
    {
        printf("%c", load);
    }
    printf("  %c\n", load);
    printf("\t\t\t\t\t%c  %c                      %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (1) withdraw Money   %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (2) Send Money       %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (3) check Balance    %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (4) change Pincode   %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c (5) Log out          %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  %c                      %c  %c\n", load, load, load, load);
    printf("\t\t\t\t\t%c  ", load);
    for (int i = 0; i <= 23; i++)
    {
        printf("%c", load);
    }
    printf("  %c\n", load);
    printf("\t\t\t\t\t%c                            %c\n", load, load);
    printf("\t\t\t\t\t");
    for (int i = 0; i <= 29; i++)
    {
        printf("%c", load);
    }
    printf("\n");
}


void employee_menu(Account accounts[], int num_accounts,
                   Transaction transactions[], int num_transactions) {
  char choice[100];
  while (1) {
        system("cls");
    employee_logo();
    printf("Enter choice: ");
    scanf("%s", choice);
    printf("\n");
    system("cls");
    if (strcmp(choice, "1") == 0) {
      if (num_accounts == 100) {
        printf("Cannot create more accounts.\n\n");
      } else {

        accounts[num_accounts].account_number = rand() % 1000000000 + 1000000000;
        printf("Account Number: %d\n", accounts[num_accounts].account_number);
        printf("Enter Name: ");
        scanf("%s", accounts[num_accounts].account_holder_name);
        printf("Enter IFSC Code: ");
        scanf("%s", accounts[num_accounts].ifsc_code);
        printf("Enter password: ");
        scanf("%s", accounts[num_accounts].password);
        printf("Enter Initial Balance: ");
        scanf("%d", &accounts[num_accounts].balance);
        FILE *fp = fopen("accounts.txt", "a");
  if (fp == NULL) {
    printf("Error opening accounts file.\n");
    return;
  }
  // Write the number of accounts to the first line of the file
  // Write the accounts to the rest of the lines in the file

    fprintf(fp, "%d %s %s %s %d\n", accounts[num_accounts].account_number, accounts[num_accounts].account_holder_name,accounts[num_accounts].ifsc_code,accounts[num_accounts].password, accounts[num_accounts].balance);

  fclose(fp);
        num_accounts++;
        printf("Account created successfully.\n\n");
        system("pause");

      }
    } else if (strcmp(choice, "2") == 0) {
      int account_number;
      printf("Enter Account Number to search: ");
      scanf("%d", &account_number);
      int index = -1;
      for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == account_number) {
          index = i;
          break;
        }
      }
      if (index == -1) {
        printf("Account not found.\n\n");
      } else {
        printf("Account Number: %d\n", accounts[index].account_number);
        printf("Name: %s\n", accounts[index].account_holder_name);
        printf("IFSC Code: %s\n", accounts[index].ifsc_code);
        printf("Balance: %d\n\n", accounts[index].balance);
      }
      system("pause");
    } else if (strcmp(choice, "3") == 0) {
      int account_number;
      printf("Enter Account Number to update: ");
      scanf("%d", &account_number);
      int index = -1;
      for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == account_number) {
          index = i;
          break;
        }
      }
      if (index == -1) {
        printf("Account not found.\n\n");
      } else {
        printf("Enter Name: ");
        scanf("%s", accounts[index].account_holder_name);
        printf("Enter IFSC Code: ");
        scanf("%s", accounts[index].ifsc_code);
        printf("Enter Initial Balance: ");
        scanf("%d", &accounts[index].balance);
        printf("Account updated successfully.\n\n");
        system("pause");
            }
    } else if (strcmp(choice, "4") == 0) {
      int account_number;
      printf("Enter Account Number: ");
      scanf("%d", &account_number);
      Account *account = NULL;
      for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == account_number) {
          account = &accounts[i];
          break;
        }
      }
      if (account == NULL) {
        printf("Account not found.\n\n");
      } else {
        int recipient_account_number;
        printf("Enter Recipient Account Number: ");
        scanf("%d", &recipient_account_number);
        Account *recipient_account = NULL;
        for (int i = 0; i < num_accounts; i++) {
          if (accounts[i].account_number == recipient_account_number) {
            recipient_account = &accounts[i];
            break;
          }
        }
        if (recipient_account == NULL) {
          printf("Recipient account not found.\n\n");
        } else {
          int amount;
          printf("Enter Amount: ");
          scanf("%d", &amount);
          if (amount > account->balance) {
            printf("Insufficient balance.\n\n");
            system("pause");
          } else {
            account->balance -= amount;
            recipient_account->balance += amount;
            transactions[num_transactions].account_number = account_number;
            strcpy(transactions[num_transactions].transaction_type, "Send Money");
            transactions[num_transactions].amount = amount;
            transactions[num_transactions].timestamp = time(NULL);
            FILE *fp = fopen("transactions.txt", "a");
  if (fp == NULL) {
    printf("Error opening transactions file.\n");
    return;
  }
  // Read the number of transactions from the first line of the file
fprintf(fp, "%d %s %d %d ", transactions[num_transactions].account_number, transactions[num_transactions].transaction_type, transactions[num_transactions].amount, transactions[num_transactions].timestamp);

  fclose(fp);
            num_transactions++;
            printf("Money sent successfully.\n\n");
            system("pause");
          }
        }
      }
    } else if (strcmp(choice, "5") == 0) {
      int account_number;
      printf("Enter Account Number to delete: ");
      scanf("%d", &account_number);
      int index = -1;
      for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == account_number) {
          index = i;
          break;
        }
      }
      if (index == -1) {
        printf("Account not found.\n\n");
        system("pause");
      } else {
        accounts[index] = accounts[num_accounts - 1];
        num_accounts--;
        printf("Account deleted successfully.\n\n");
        system("pause");
      }

    }

     else if (strcmp(choice, "6") == 0) {
            write_accounts(accounts,num_accounts);
            write_transactions(transactions,num_transactions);

            load_Bar1();
      system("pause");
      break;
    } else {
      printf("Invalid choice.\n\n");
      system("pause");
    }

}
  }


void user_menu(Account accounts[], int num_accounts,
               Transaction transactions[], int num_transactions) {
  char choice[100];
  while (1) {
    system("cls");
    user_logo();
    printf("Enter choice: ");
    scanf("%s", choice);
    printf("\n");
    system("cls");


    if (strcmp(choice, "1") == 0) {
      int account_number;
      printf("Enter Account Number: ");
      scanf("%d", &account_number);
     Account *account = NULL;
     int index=-1;

      for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == account_number) {
          account = &accounts[i];
          index=i;
          break;
        }
      }
      if (index==-1) {
        printf("Account not found.\n\n");
        system("pause");
      } else {
          int amount;
          printf("Enter Amount: ");
          scanf("%d", &amount);
          if (amount > account->balance) {
            printf("Insufficient balance.\n\n");
            system("pause");
          } else {
            account->balance -= amount;
            transactions[num_transactions].account_number = account_number;
            strcpy(transactions[num_transactions].transaction_type, "With draw Money");
            transactions[num_transactions].amount = amount;
            transactions[num_transactions].timestamp = time(NULL);
            num_transactions++;
            printf("Money Withdrawn successfully.\n\n");
            system("pause");
          }
      }

    } else if (strcmp(choice, "2") == 0) {
      int account_number;
      printf("Enter Account Number: ");
      scanf("%d", &account_number);
      Account *account = NULL;
      for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == account_number) {
          account = &accounts[i];
          break;
        }
      }
      if (account == NULL) {
        printf("Account not found.\n\n");
        system("pause");
      } else {
        int recipient_account_number;
        printf("Enter Recipient Account Number: ");
        scanf("%d", &recipient_account_number);
        Account *recipient_account = NULL;
        for (int i = 0; i < num_accounts; i++) {
          if (accounts[i].account_number == recipient_account_number) {
            recipient_account = &accounts[i];
            break;
          }
        }
        if (recipient_account == NULL) {
          printf("Recipient account not found.\n\n");
          system("pause");
        } else {
          int amount;
          printf("Enter Amount: ");
          scanf("%d", &amount);
          if (amount > account->balance) {
            printf("Insufficient balance.\n\n");
            system("pause");
          } else {
            account->balance -= amount;
            recipient_account->balance += amount;
            transactions[num_transactions].account_number = account_number;
            strcpy(transactions[num_transactions].transaction_type, "Send Money");
            transactions[num_transactions].amount = amount;
            transactions[num_transactions].timestamp = time(NULL);
            num_transactions++;
            printf("Money sent successfully.\n\n");
            system("pause");
          }
        }
      }
    } else if (strcmp(choice, "3") == 0) {
      int account_number;
      printf("Enter Account Number: ");
      scanf("%d", &account_number);
      Account *account = NULL;
      for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == account_number) {
          account = &accounts[i];
          break;
        }
      }
      if (account == NULL) {
        printf("Account not found.\n\n");
        system("pause");
      } else {
        printf("Bank Balance: %d\n\n", account->balance);
      }
    } else if (strcmp(choice, "4") == 0) {
      int account_number;
      printf("Enter Account Number: ");
      scanf("%d", &account_number);
      Account *account = NULL;
      for (int i = 0; i < num_accounts; i++) {
        if (accounts[i].account_number == account_number) {
          account = &accounts[i];
          break;
        }
      }
      if (account == NULL) {
          printf("Account not found.\n\n");
          system("pause");





              } else {
        int pin_code;
        printf("Enter Pin Code: ");
        scanf("%d", &pin_code);
        if (pin_code != account->password) {
          printf("Incorrect Pin Code.\n\n");
          system("pause");
        } else {
          printf("Enter new Pin Code: ");
          scanf("%d", &account->password);
          printf("Pin Code changed successfully.\n\n");
          system("pause");
        }
      }
    } else if (strcmp(choice, "5") == 0) {

      load_Bar1();
      system("pause");
      break;
    } else {
      printf("Invalid choice.\n\n");
    }
  }
}
void read_accounts(Account accounts[], int num_accounts) {
  FILE *fp = fopen("accounts1.txt", "r");
  if (fp == NULL) {
    printf("Error opening accounts file.\n");
    return;
  }
  // Read the number of accounts from the first line of the file
  fscanf(fp, "%d", num_accounts);
  // Read the accounts from the rest of the lines in the file
  for (int i = 0; i < num_accounts; i++) {
    fscanf(fp, "%d %s %s %d", &accounts[i].account_number, accounts[i].account_holder_name,&accounts[i].ifsc_code, &accounts[i].balance);
  }
  fclose(fp);
}

// Function to write the accounts from the accounts array to the accounts.txt file
void write_accounts(Account accounts[], int num_accounts) {
  FILE *fp = fopen("accounts1.txt", "w");
  if (fp == NULL) {
    printf("Error opening accounts file.\n");
    return;
  }
  // Write the number of accounts to the first line of the file
  fprintf(fp, "%d\n", num_accounts);
  // Write the accounts to the rest of the lines in the file
  for (int i = 0; i < num_accounts; i++) {
    fprintf(fp, "%d %s %s %d\n", &accounts[i].account_number, accounts[i].account_holder_name,&accounts[i].ifsc_code, &accounts[i].balance);
  }
  fclose(fp);
}

// Function to read the transactions from the transactions.txt file and store them in the transactions array
void read_transactions(Transaction transactions[], int num_transactions) {
  FILE *fp = fopen("transactions1.txt", "r");
  if (fp == NULL) {
    printf("Error opening transactions file.\n");
    return;
  }
  // Read the number of transactions from the first line of the file
  fscanf(fp, "%d", num_transactions);
  // Read the transactions from the rest of the lines in the file
  for (int i = 0; i < num_transactions; i++) {
    printf("%d %s %d %d ", transactions[i].account_number, transactions[i].transaction_type, transactions[i].amount, transactions[i].timestamp);
  }

  fclose(fp);
}

// Function to write the transactions from the transactions array to the transactions.txt file
void write_transactions(Transaction transactions[], int num_transactions) {
  FILE *fp = fopen("transactions1.txt", "w");
  if (fp == NULL) {
    printf("Error opening transactions file.\n");
    return;
  }
  // Read the number of transactions from the first line of the file
  fscanf(fp, "%d", num_transactions);
  for (int i = 0; i < num_transactions; i++) {
    fprintf(fp, "%d %s %d %d ", &transactions[i].account_number, &transactions[i].transaction_type, &transactions[i].amount, &transactions[i].timestamp);
  }
  fclose(fp);
}


int main() {
  HashTable employee_table;
  hash_table_init(&employee_table);

  Account accounts[100];
  int num_accounts = 0;

  Transaction transactions[100];
  int num_transactions = 0;
  wellcome_slomo();
  system("pause");
  system("cls");
  load_Bar();
  system("pause");


  while (1) {
   home_logo();
    printf("Enter choice: ");
    char choice[100];
    scanf("%s", choice);
    printf("\n");
    system("cls");

    if (strcmp(choice, "1") == 0) {
        system("cls");
            admin_account_login();


      char password[20];
  printf("Enter admin password: ");
  scanf("%s", password);
  system("cls");
  // Check if the password is correct
  if (strcmp(password, "Kumar@12345") != 0) {
    printf("Incorrect password!\n");
    system("pause");
    return;
  }
  log_in();
  printf("Logged in as admin\n");
  system("pause");
  admin_menu(&employee_table, accounts, num_accounts,
                     transactions, num_transactions);
        }

     else if (strcmp(choice, "2") == 0) {
         system("cls");
            employee_account_login();

        int employee_id;
      printf("Enter Employee ID: ");
      scanf("%d", &employee_id);
      Employee *employee = hash_table_get(&employee_table, employee_id);
      if (employee == NULL) {
        printf("Employee not found.\n\n");
        system("pause");
      } else {
        char password[100];
        printf("Enter Password: ");
        scanf("%s", password);
        system("cls");
        if (strcmp(employee->password, password) != 0) {
          printf("Incorrect password.\n\n");
          system("pause");
        } else {
            log_in();
            system("pause");
          employee_menu(accounts, num_accounts, transactions, num_transactions);
        }
      }

    } else if (strcmp(choice, "3") == 0) {
      user_menu(accounts, num_accounts, transactions, num_transactions);
    }
     else if (strcmp(choice, "0") == 0) {
            printf("Successfully exited\nTHANK YOU");
            break;
     }
    else {
      printf("Invalid choice.\n\n");
      system("pause");
    }
  }

  hash_table_free(&employee_table);

  return 0;
}





