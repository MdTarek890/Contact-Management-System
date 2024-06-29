#include<stdio.h>

#include<conio.h>

#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdlib.h>

char currentPassword;



void login(char *username, char *password) {
    printf("\n\t\t\t\t\t\t\t ** Login **");
    printf("\n\n\t\t\t\t Enter Your Username: ");
    char inputtedUsername[15];
    scanf("%s", inputtedUsername);

    printf("\t\t\t\t Enter Your Password: ");
    char inputtedPassword[10];
    scanf("%s", inputtedPassword);

    if (strcmp(inputtedUsername, username) == 0 && strcmp(inputtedPassword, password) == 0) {
        printf("\n\t\t\t\t Login Successful!\n");
        int option;
        printf("\n\t\t\t\t [1] Change Password\n\t\t\t\t [2] Continue\n\t\t\t\t Enter Your Choice: ");
        scanf("%d", &option);

        if (option == 1) {
            changePassword(username, password);
        }
    } else {
        printf("\n\t\t\t\t Incorrect Username or Password!\n");
    }
}
void changePassword(char *username, char *password) {
    printf("\n\t\t\t\t ** Change Password **");
    printf("\n\t\t\t\t Enter Your Current Password: ");
    char currentPassword[10];
    scanf("%s", currentPassword);

    if (strcmp(currentPassword, password) == 0) {
        printf("\n\t\t\t\t Enter Your New Password: ");
        scanf("%s", password);
        printf("\n\t\t\t\t Password Changed Successfully!\n");
    } else {
        printf("\n\t\t\t\t Incorrect Current Password. Unable to change password.\n");
    }
}


int cmain() {
    // Your existing code...

    // Inside the main function where you use login function
    int choice;
    char registeredUsername;
    char registeredPassword;
    if (choice == 1) {
        registerUser(registeredUsername, registeredPassword);
        Main();
    } else if (choice == 2) {
        login(registeredUsername, registeredPassword);
    } else {
        printf("\n\t\t\t\t Invalid Choice. Exiting...\n");
    }

    // Your existing code...

    return 0;
}



void registerUser(char *username, char *password) {
    printf("\n\t\t\t\t **** Register New User ****");
    printf("\n\t\t\t\t Enter Your Username: "); //provoke to input user name
    scanf("%s", username);
    printf("\t\t\t\t Enter Your Password: ");
    scanf("%s", password);
    printf("\n\t\t\t\t Registration Successful!\n");
}

void Login(char *username, char *password) {
    printf("\n\t\t\t\t\t\t\t **** Login ****");
    printf("\n\n\t\t\t\t Enter Your Username: ");
    char inputtedUsername[15];
    scanf("%s", inputtedUsername);

    printf("\t\t\t\t Enter Your Password: ");
    char inputtedPassword[10];
    scanf("%s", inputtedPassword);

    if (strcmp(inputtedUsername, username) == 0 && strcmp(inputtedPassword, password) == 0) {
        printf("\n\t\t\t\t Login Successful!\n");
    } else {
        printf("\n\t\t\t\t Incorrect Username or Password!\n");
    }
}

int main() {
    // Registered user credentials
    char registeredUsername[15] = "sadrul";
    char registeredPassword[10] = "sadrul123";

    int choice;
    printf("\n\t\t\t\t ***** Welcome to Contact Management System *****");
    printf("\n\t\t\t\t\t\t\tLOGIN");
    printf("\n\t\t\t\t================================================");
    printf("\n\t\t\t\t[1] Register New User\t\t\t[2] Login");
    printf("\n\n\t\t\t\t\tEnter Your Choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        registerUser(registeredUsername, registeredPassword);
        Main();
    } else if (choice == 2) {
        login(registeredUsername, registeredPassword);

    } else {
        printf("\n\t\t\t\t Invalid Choice. Exiting...\n");
    }
                  Main();
    return 0;
}


struct contact  // Define a structure for contact details

{
    long ph;

    char name[20],add[20],email[30];

} list;

char query[20],name[20];

FILE *fp, *ft;  //// File pointer
struct block_contact
{
    char name[20], reason[50];
} block_list;
int i,n,ch,l,found;

void displayFavorites(); //// Function to display favorite contacts

int Main()

{
void displayFavorites()
{
    FILE *fp; // File pointer
    struct contact fav;

    fp = fopen("favorite.dll", "r");  // Open favorite contacts file in read mode

    if (fp == NULL)  // Check if file is empty
    {
        printf("No favorite contacts found.\n");
        return;
    }

    printf("\n\t\t\t[FAVORITE CONTACTS]\n");
    printf("Name\t\tPhone No\tAddress\t\tEmail");

    while (fread(&fav, sizeof(fav), 1, fp))  // Read and display favorite contacts
    {
        printf("%s\t%ld\t%s\t%s", fav.name, fav.ph, fav.add, fav.email);
    }

    fclose(fp);  // Close the file(fp);  // Close the file
}
main:

    system("cls");   // Clear the console screen
// Display the main menu
    printf("\n\t **** Welcome to Contact Management System ****");
 printf("\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Add a new Contact\n\t\t[2] List all Contacts\n\t\t[3] Search for contact\n\t\t[4] Edit a Contact\n\t\t[5] Delete a Contact\n\t\t[6] block contact\n\t\t[7] block list\n\t\t[8] Favorite contacts \n\t\t[9] changed password \n\t\t[10] Exit\n\t\t=====================\n\t\t");
     printf("Enter the choice:");

    scanf("%d",&ch);

    switch(ch)

    {

    case 0:

        printf("\n\n\t\tAre you sure you want to exit?");

        break;

       // Add a new contact
    case 1:

        system("cls");

        fp=fopen("contact.dll","a");

        for (;;)

        {
            fflush(stdin);

            printf("To exit enter blank space in the name input\nName (Use identical):");

            scanf("%[^\n]",&list.name);

            if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)

                break;

            fflush(stdin);

            printf("Phone:");

            scanf("%ld",&list.ph);

            fflush(stdin);

            printf("address:");

            scanf("%[^\n]",&list.add);

            fflush(stdin);

            printf("email address:");

            gets(list.email);

            printf("\n");

            fwrite(&list,sizeof(list),1,fp);

        }

        fclose(fp);

        break;

        /* *********************list of contacts*************************  */

    case 2:

        system("cls");

        printf("\n\t\t================================\n\t\t\tLIST OF CONTACTS\n\t\t================================\n\nName\t\tPhone No\t    Address\t\tE-mail ad.\n=================================================================\n\n");

        for(i=97; i<=122; i=i+1)

        {

            fp=fopen("contact.dll","r");

            fflush(stdin);

            found=0;

            while(fread(&list,sizeof(list),1,fp)==1)

            {

                if(list.name[0]==i || list.name[0]==i-32)

                {

                    printf("\nName\t: %s\nPhone\t: %ld\nAddress\t: %s\nEmail\t: %s\n",list.name,

                           list.ph,list.add,list.email);

                    found++;

                }

            }

            if(found!=0)

            {
                printf("=========================================================== [%c]-(%d)\n\n",i-32,found);

                getch();
            }

            fclose(fp);

        }

        break;

        /* *******************search contacts**********************  */

    case 3:

        system("cls");

        do

        {

            found=0;

            printf("\n\n\t..::CONTACT SEARCH\n\t===========================\n\t..::Name of contact to search: ");

            fflush(stdin);

            scanf("%[^\n]",&query);

            l=strlen(query);

            fp=fopen("contact.dll","r");

            system("cls");

            printf("\n\n..::Search result for '%s' \n===================================================\n",query);

            while(fread(&list,sizeof(list),1,fp)==1)

            {

                for(i=0; i<=l; i++)

                    name[i]=list.name[i];

                name[l]='\0';

                if(stricmp(name,query)==0)

                {

                    printf("\n..::Name\t: %s\n..::Phone\t: %ld\n..::Address\t: %s\n..::Email\t: %s\n",list.name,list.ph,list.add,list.email);

                    found++;

                    if (found%4==0)

                    {

                        printf("..::Press any key to continue...");

                        getch();

                    }

                }

            }

            if(found==0)

                printf("\n..::No match found!");

            else

                printf("\n..::%d match(s) found!",found);

            fclose(fp);

            printf("\n ..::Try again?\n\n\t[1] Yes\t\t[0] No\n\t");

            scanf("%d",&ch);

        }
        while(ch==1);

        break;

        /* *********************edit contacts************************/

    case 4:

        system("cls");

        fp=fopen("contact.dll","r");

        ft=fopen("temp.dat","w");

        fflush(stdin);

        printf("..::Edit contact\n===============================\n\n\t..::Enter the name of contact to edit:");

        scanf("%[^\n]",name);

        while(fread(&list,sizeof(list),1,fp)==1)

        {

            if(stricmp(name,list.name)!=0)

                fwrite(&list,sizeof(list),1,ft);

        }

        fflush(stdin);

        printf("\n\n..::Editing '%s'\n\n",name);

        printf("..::Name(Use identical):");

        scanf("%[^\n]",&list.name);

        fflush(stdin);

        printf("..::Phone:");

        scanf("%ld",&list.ph);

        fflush(stdin);

        printf("..::address:");

        scanf("%[^\n]",&list.add);

        fflush(stdin);

        printf("..::email address:");

        gets(list.email);

        printf("\n");

        fwrite(&list,sizeof(list),1,ft);

        fclose(fp);

        fclose(ft);

        remove("contact.dll");

        rename("temp.dat","contact.dll");

        break;

        /* ********************delete contacts**********************/

    case 5:

        system("cls");

        fflush(stdin);

        printf("\n\n\t..::DELETE A CONTACT\n\t==========================\n\t..::Enter the name of contact to delete:");

        scanf("%[^\n]",&name);

        fp=fopen("contact.dll","r");

        ft=fopen("temp.dat","w");
 // Copy all contacts except the one to be deleted to a temporary file
        while(fread(&list,sizeof(list),1,fp)!=0)

            if (stricmp(name,list.name)!=0)

                fwrite(&list,sizeof(list),1,ft);

        fclose(fp);

        fclose(ft);
 // Remove the original contact file and rename the temporary file
        remove("contact.dll");

        rename("temp.dat","contact.dll");

        break;

    default:

        printf("Invalid choice");

        break;
           /* ********************block a  contacts**********************/
    case 6:

        system("cls");

        fflush(stdin);


        printf("\n\n\t..::BLOCK A CONTACT\n\t==========================\n\t..::Enter the name of contact to block:");

        scanf("%[^\n]",&name);

        fp=fopen("contact.dll","r");

        ft=fopen("temp.dat","w");

        while(fread(&list,sizeof(list),1,fp)!=0)

            if (stricmp(name,list.name)!=0) {

                fwrite(&list,sizeof(list),1,ft);

        fclose(fp);

        fclose(ft);
        remove("contact.dll");
            rename("temp.dat","contact.dll");


            }




        break;
case 7:

        system("cls");

        printf("\n\t\t================================\n\t\t\tLIST OF BLOCK CONTACTS\n\t\t================================\n\nName\t\tPhone No\t    Address\t\tE-mail ad.\n=================================================================\n\n");

        for(i=97; i<=122; i=i+1)

        {

            fp=fopen("contact.dll","r");

            fflush(stdin);

            found=0;

            while(fread(&list,sizeof(list),1,fp)==1)

            {

                if(list.name[0]==i || list.name[0]==i-32)

                {

                    printf("\nName\t: %s\nPhone\t: %ld\nAddress\t: %s\nEmail\t: %s\n",list.name,

                           list.ph,list.add,list.email);

                    found++;

                }

            }

            if(found!=0)

            {
                printf("=========================================================== [%c]-(%d)\n\n",i-32,found);

                getch();
            }

            fclose(fp);

        }

        break;
        case 8:
    system("cls"); // Clear the console screen

    printf("\n\t..::ADD A FAVORITE CONTACT\t==========================\n");

    // Prompt the user to enter the details of the favorite contact
    printf("Name: ");
    fflush(stdin); // Flush the input buffer
    scanf("%[^\n]", list.name);

    printf("Phone: ");
    scanf("%ld", &list.ph);

    printf("Address: ");
    fflush(stdin); // Flush the input buffer
    scanf("%[^\n]", list.add);

    printf("Email: ");
    fflush(stdin); // Flush the input buffer
    gets(list.email);

    printf("\n");

    // Open the file in append mode and write the favorite contact data to it
    fp = fopen("favorite.dll", "a");
    fwrite(&list, sizeof(list), 1, fp);
    fclose(fp);  // Close the file(fp);

    printf("Favorite contact added successfully!");

    break;

    //change password function
    case 9:
    system("cls"); // Clear the console screen // Clear the console screen
     fp=fopen("password.dll","r");

        ft=fopen("temp.dat","w");
       printf("\n\t\t\t\t ** Change Password **");
    printf("\n\t\t\t\t Enter Your Current Password: ");
    char currentPassword[10];
    int password;
    int i;
    int newPassword;
    scanf("%s", currentPassword);

    if (currentPassword || password ==1 ) {
        printf("\n\t\t\t\t Enter Your New Password: ");
        scanf("%s", password);
        newPassword= password;

        printf("\n\t\t\t\t Password Changed Successfully!\n");


    } else {
        printf("\n\t\t\t\t Incorrect Current Password. Unable to change password.\n");
    }
 cmain();
remove("password.dll");

        rename("temp.dat","password.dll");

    break;

    }


    printf("\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n");

    scanf("%d",&ch);

    switch (ch)

    {

    case 1:

        goto main; // Return to the main menu

    case 0:

        break;// Exit the program

    default:

        printf("Invalid choice");

        break;


    }

    return 0;

}
