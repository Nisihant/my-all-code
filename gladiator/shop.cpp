#include <iostream>
#include <fstream>
#include <process.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <direct.h>
#include <windows.h>
#include <time.h>
#include <algorithm>
using namespace std;
void customer_detail(int);
void bill(int);
int row, total_bill;
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
/*******
CLASS SHOP
*******/
class SHOP
{
public:
    int code;
    char name[30];
    int quantity;
    double price;
    /******
    FUNCTION TO GET INFORMATION
    ******/
    void getinfo()
    {
        gotoxy(100, 50);
        cout << "\n\t\tENTERPRODUCT DETAILS";
        gotoxy(100, 90);
        cout << "\n\tEnter product code: ";
        cin >> code;
        gotoxy(100, 130);
        cout << "\n\tEnter product name: ";
        getchar();
        fgets(name, 30, stdin);
        gotoxy(100, 170);
        cout << "\n\tEnter quantity of product: ";
        cin >> quantity;
        gotoxy(100, 210);
        cout << "\n\tEnter price of product: ";
        cin >> price;
        // taxation();
    }
    /******
    FUNCTION TO SHOW INFORMATION
    ******/
    void showinfo()
    {
        gotoxy(5, row);
        cout << code;
        gotoxy(20, row);
        puts(name);
        gotoxy(37, row);
        cout << quantity;
        gotoxy(52, row);
        cout << price;
        row++;
    }
    /******
    FUNCTION TO MODIFY INFORMATION
    ******/
    void modifyinfo()
    {
        gotoxy(100, 300);
        cout << "\n\tENTER NEW PRODUCT DETAILS";
        gotoxy(100, 300);
        cout << "\n\tNew Product Code: ";
        cin >> code;
        gotoxy(100, 360);
        cout << "\n\tNew product name: ";
        getchar();
        fgets(name, 30, stdin);
        gotoxy(100, 400);
        cout << "\n\tNew quantity of product: ";
        cin >> quantity;
        gotoxy(100, 440);
        cout << "\n\tNew price of product:";
        cin >> price;
        // taxation();
    }
    /******
    FUNCTION TO SHOW ALL INFORMATION
    ******/
    void showallinfo()
    {
        gotoxy(5, row);
        cout << code;
        gotoxy(20, row);
        puts(name);
        gotoxy(37, row);
        cout << quantity;
        gotoxy(52, row);
        cout << price;
        row++;
    }
    /****** FUNCTION TO RETURN PRODUCT CODE
    ******/
    inline int retcode()
    {
        return code;
    }
    /******
    FUNCTION TO RETURN PRODUCT NAME
    ******/
    inline char retname()
    {
        return name[30];
    }
    inline int retquantity()
    {
        return quantity;
    }
    inline int retprice()
    {
        return price;
    }
} shop;
class customer
{
public:
    int c_id;
    char c_firstname[30];
    char c_lastname[30];
    char c_phone[12];
    char c_state[30];
    char c_city[30];
    int c_pin;
    void c_detail()
    {
        gotoxy(100, 50);
        cout << "\n\t\tFirst name:";
        getchar();
        fgets(c_firstname, 30, stdin);
        gotoxy(100, 90);
        cout << "\n\t\tLast name: ";
        getchar();
        fgets(c_lastname, 30, stdin);
        gotoxy(100, 130);
        cout << "\n\t\tPhone number: ";
        getchar();
        fgets(c_phone, 11, stdin);
        c_address();
        srand(time(0));
        c_id = rand() % 10000;
    }
    void c_address()
    {
        gotoxy(100, 170);
        cout << "\n\t\t\tADDRESS DETAIL";
        gotoxy(100, 210);
        cout << "\n\t\tEnter state: ";
        cin >> c_state;
        gotoxy(100, 240);
        cout << "\n\t\tEnter city: ";
        getchar();
        fgets(c_city, 30, stdin);
        gotoxy(100, 270);
        cout << "\n\t\tEnter pin code: ";
        cin >> c_pin;
    }
    void showc_info()
    {
        gotoxy(0, row);
        cout << c_id;
        gotoxy(7, row);
        puts(c_firstname);
        gotoxy(25, row);
        puts(c_phone);
        gotoxy(47, row);
        puts(c_state);
        gotoxy(61, row);
        puts(c_city);
        gotoxy(74, row);
        cout << c_pin;
        row++;
    }
    int inline ret_cid()
    {
        return c_id;
    }
} cus_det;
class password
{
public:
    char username[30];
    char password[7];
    int c_id;
    void write_password(int c)
    {
        cout << "\n\tusername:";
        getchar();
        fgets(username, 30, stdin);
        cout << "\n\tPassword(6 character):";
        getchar();
        fgets(password, 7, stdin);
        c_id = c;
    }
    inline char retusername()
    {
        return username[30];
    }
    inline char retpassword()
    {
        return password[7];
    }
    inline int retcustomerid()
    {
        return c_id;
    }
} PASS;
class order_detail
{
public:
    fstream f1;
    int ordercode, orderquantity, orderprice, flag = 0, cid;
    char ordername[30];
    int getorder(int c, int i, int q, char *n, int p)
    {
        cid = c;
        strcpy(n, ordername);
        ordercode = i;
        orderprice = p;
        orderquantity = q;
    }
    void showorder()
    {
        gotoxy(5, row);
        cout << ordercode;
        gotoxy(20, row);
        puts(ordername);
        gotoxy(37, row);
        cout << orderquantity;
        gotoxy(52, row);
        cout << orderprice;
        row++;
        total_bill += orderquantity * orderprice;
    }
    int inline retordercode()
    {
        return ordercode;
    }
    int inline retorderquantity()
    {
        return orderquantity;
    }
    int inline retordercid()
    {
        return cid;
    }
} Order;
/*******
WELCOME
*******/
void welcome()
{
    system("CLS");
    gotoxy(45, 200);
    cout << "AAYSRI SUPERMARKET";
    getch();
}
/*******
CREDITS
*******/
void intro()
{
    system("CLS");
    gotoxy(100, 50);
    cout << "Developed by:";
    gotoxy(100, 200);
    cout << "group 9";
    getch();
}
void customer_menu()
{
to:
    system("CLS");
    int flag = 0, cid;
    char go, uname[30], ch;
    char upass[7];
    fstream c1;
    cout << "\n\t1.LOGIN";
    cout << "\n\t2.CREATE ACCOUNT";
    cout << "\n\tEnter your choice:";
    cin >> go;
    switch (go)
    {
    case '1':
        system("CLS");
        gotoxy(100, 0);
        cout << "\n\tEnter username:";
        getchar();
        fgets(uname, 30, stdin);
        gotoxy(100, 70);
        cout << "\n\tEnter password:";
        getchar();
        fgets(upass, 7, stdin);
        c1.open("pass.txt", ios::binary | ios::in);
        while (c1.read((char *)&PASS, sizeof(password)))
        {
            if (strcmp(uname, PASS.username) == 0 && strcmp(upass, PASS.password) == 0)
            {
                cout << "\n\tWELCOME BACK";
                flag = 1;
                cid = PASS.retcustomerid();
                getch();
                system("CLS");
                c1.close();
                customer_detail(cid);
            }
        }
        if (flag == 0)
        {
            system("CLS");
            gotoxy(100, 0);
            cout << "\n\tYou entered wrong password or username";
            gotoxy(100, 10);
            cout << "\n\t Please try again";
            getche();
            goto to;
        }
        break;
    case '2':
        system("CLS");
        c1.open("customer_detail.txt", ios::binary | ios::out | ios::app);
        cus_det.c_detail();
        cid = cus_det.ret_cid();
        c1.write((char *)&cus_det, sizeof(customer));
        c1.close();
        system("CLS");
        cout << "\n\t\t\tNow create username and Password:";
        c1.open("pass.txt", ios::binary | ios::out | ios::app);
        PASS.write_password(cid);
        c1.write((char *)&PASS, sizeof(password));
        c1.close();
        goto to;
        break;
    default:
        cout << "\n\tInvalid Choice!!";
        getche();
        goto to;
    }
}
void customer_detail(int c)
{
    int cus_id = c;
to:
    system("CLS");
    row = 8;
    fstream f1;
    int ch, flag = 0;
    ;
    char go, co, na[30];
    system("CLS");
    cout << "\n\t1.Account Detail";
    cout << "\n\t2.Show all the products";
    cout << "\n\t3.Check for product availability";
    cout << "\n\t4.Place order";
    cout << "\n\t5.Exit";
    cout << "\n\tEnter your choice: ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        system("CLS");
        cout.setf(ios::left);
        cout << "\n\n***** CUSTOMER DETAIL ****";
        cout << "\n\n\n==================== ================================ == == == == == == == == == == == == === ";
        cout << "\nID NAME PHONE NUMBER STATE CITY PINCODE ";
        f1.open("customer_detail.txt", ios::binary | ios::in);
        while (f1.read((char *)&cus_det, sizeof(customer)))
        {
            if (cus_det.ret_cid() == cus_id)
                cus_det.showc_info();
        }
        f1.close();
        cout << "\n\n\n==================== ================================ == == == == == == == == == == == == === ";
        cout << "\n Press any key to go operations menu";
        go = getche();
        goto to;
        break;
    case 2:
        system("CLS");
        cout.setf(ios::left);
        cout << "\n\n***** PRODUCT LIST ****";
        cout << "\n\n\n==================== ================================ == == == == == == == == == == == == === ";
        cout << "\n PRODUCT_CODE   PRODUCT_NAME   PRODUCT_QUANTITY   PRODUCT_PRICE ";
        f1.open("SHOP.txt", ios::binary | ios::in);
        while (f1.read((char *)&shop, sizeof(SHOP)))
        {
            shop.showallinfo();
        }
        f1.close();
        cout << "\n\n\n==================== ================================ == == == == == == == == == == == == === ";
        cout << "\n Press any key to go operations menu";
        go = getche();
        goto to;
        break;
    /*******
    CHECK FOR PRODUCT AVAILABILITY
    ******/
    case 3:
        system("CLS");
        cout << "\nHow do you want to search the product ('C' for code,'N' for name): ";
        ch = getche();
        system("CLS");
        if (ch == 'C' || ch == 'c')
        {
            gotoxy(100, 55);
            cout << "\n\tEnter the code of product to be searched for: ";
            cin >> co;
        }
        else if (ch == 'N' || ch == 'n')
        {
            gotoxy(100, 55);
            cout << "\n\tEnter the name of product to be searched for: ";
            getchar();
            fgets(na, 30, stdin);
        }
        else
        {
            cout << "\n\tInvalid Choice";
            getche();
            goto to;
        }
        system("CLS");
        cout.setf(ios::left);
        cout << "\n\n\n==================== ================================ == == == == == == == == == == == == === ";
        cout << "\n PRODUCT_CODE   PRODUCT_NAME   PRODUCT_QUANTITY   PRODUCT_PRICE ";
        row = 6;
        f1.open("SHOP.txt", ios::binary | ios::in);
        while (f1.read((char *)&shop, sizeof(SHOP)))
        {
            if (ch == 'C' || ch == 'c')
            {
                if (shop.retcode() == co)
                {
                    shop.showinfo();
                    flag = 1;
                }
            }
            else if (ch == 'N' || ch == 'n')
            {
                if (strcmpi(shop.name, na) == 0)
                {
                    shop.showinfo();
                    flag = 1;
                }
            }
        }
        f1.close();
        if (flag == 0)
        {
            gotoxy(100, 200);
            cout << "\n\tProduct does not exist!!";
        }
        gotoxy(100, 280);
        cout << "\n Press any key to go operations menu";
        go = getche();
        goto to;
        break;
    case 4:
        int i, q, p;
        char n[30];
        system("CLS");
        cout << "\n\nEnter The product code Of The Item: \n";
        cin >> i;
        cout << "\nQuantity in number: \n";
        cin >> q;
        f1.open("SHOP.txt", ios::binary | ios::in | ios::out);
        while (f1.read((char *)&shop, sizeof(SHOP)))
        {
            if (shop.retcode() == i && Order.retorderquantity() <= q)
            {
                p = shop.retprice();
                strcpy(shop.name, n);
                Order.getorder(cus_id, i, q, n, p);
                flag = 1;
                shop.quantity -= Order.retorderquantity();
                int pos = (-1) * sizeof(SHOP);
                f1.seekp(pos, ios::cur);
                break;
            }
        }
        f1.close();
        if (flag == 1)
        {
            cout << "\n\nThank You For Placing The Order";
            f1.open("order.txt", ios::binary | ios::out | ios::app);
            f1.write((char *)&Order, sizeof(order_detail));
            f1.close();
            getch();
            bill(cus_id);
        }
        else
        {
            cout << "This product is out of stack ";
        }
        break;
    case 5:
        exit(0);
        break;
    default:
        cout << "you enter wrong choice";
        getch();
        goto to;
    }
}
void production_menu()
{
// system("CLS");
// welcome();
// intro();
// pass();
to:
    row = 8;
    system("CLS");
    int choice;
    char go;
    fstream f1, f2;
    char ch, ch1;
    int co, flag = 0;
    char na[30];
    float pr;
    /******
    MENU
    ******/
    gotoxy(100, 0);
    cout << "\n\t\tMANAGER MENU ";
    gotoxy(100, 70);
    cout << "\n\t1.Add a new product";
    gotoxy(100, 100);
    cout << "\n\t2.Show all the products";
    gotoxy(100, 130);
    cout << "\n\t3.Check for product availability";
    gotoxy(100, 160);
    cout << "\n\t4.Modify a product";
    gotoxy(100, 190);
    cout << "\n\t5.Delete a product";
    gotoxy(100, 220);
    cout << "\n\t6.Exit";
    gotoxy(100, 280);
    cout << "\nSelect an option (1/2/3/4/5/6):";
    cin >> choice;
    switch (choice)
    {
    /*******
    ADD A NEW PRODUCT
    ******/
    case 1:
    TO1:
        system("CLS");
        f1.open("SHOP.txt", ios::binary | ios::out | ios::app);
        shop.getinfo();
        f1.write((char *)&shop, sizeof(SHOP));
        f1.close();
        gotoxy(100, 260);
        cout << "\n\tProduct successfully entered!";
        gotoxy(100, 280);
        cout << "\n\tDo you want to add more products(Y/N):";
        go = getche();
        if (go == 'Y' || go == 'y')
        {
            goto TO1;
        }
        else
        {
            goto to;
        }
    /*******
    SHOW ALL PRODUCTS
    ******/
    case 2:
        system("CLS");
        cout.setf(ios::left);
        cout << "\n\n***** PRODUCT LIST ****";
        cout << "\n\n\n==================== ================================ == == == == == == == == == == == == === ";
        cout << "\n PRODUCT_CODE   PRODUCT_NAME   PRODUCT_QUANTITY   PRODUCT_PRICE ";
        f1.open("SHOP.txt", ios::binary | ios::in);
        while (f1.read((char *)&shop, sizeof(SHOP)))
        {
            shop.showallinfo();
        }
        f1.close();
        cout << "\n\n\n==================== ================================ == == == == == == == == == == == == === ";
        cout << "\n Press any key to go operations menu";
        go = getche();
        goto to;
        break;
    /*******
    CHECK FOR PRODUCT AVAILABILITY
    ******/
    case 3:
        system("CLS");
        cout << "\nHow do you want to search the product ('C' for code,'N' for name): ";
        ch = getche();
        system("CLS");
        if (ch == 'C' || ch == 'c')
        {
            gotoxy(100, 55);
            cout << "\n\tEnter the code of product to be searched for: ";
            cin >> co;
        }
        else if (ch == 'N' || ch == 'n')
        {
            gotoxy(100, 55);
            cout << "\n\tEnter the name of product to be searched for: ";
            getchar();
            fgets(na, 30, stdin);
        }
        else
        {
            cout << "\n\tInvalid Choice";
            getche();
            goto to;
        }
        system("CLS");
        cout.setf(ios::left);
        cout << "\n\n\n==================== ================================ == == == == == == == == == == == == === ";
        cout << "\n PRODUCT_CODE   PRODUCT_NAME   PRODUCT_QUANTITY   PRODUCT_PRICE ";
        row = 6;
        f1.open("SHOP.txt", ios::binary | ios::in);
        while (f1.read((char *)&shop, sizeof(SHOP)))
        {
            if (ch == 'C' || ch == 'c')
            {
                if (shop.retcode() == co)
                {
                    shop.showinfo();
                    flag = 1;
                }
            }
            else if (ch == 'N' || ch == 'n')
            {
                if (strcmpi(shop.name, na) == 0)
                {
                    shop.showinfo();
                    flag = 1;
                }
            }
        }
        f1.close();
        if (flag == 0)
        {
            gotoxy(100, 200);
            cout << "\n\tProduct does not exist!!";
        }
        gotoxy(100, 280);
        cout << "\n Press any key to go operations menu";
        go = getche();
        goto to;
        break;
    /*******
    MODIFY A PRODUCT
    ******/
    case 4:
    TO4:
        system("CLS");
        row = 4;
        cout << "\nHow do you want to search the product ('C' for code,'N' for name):";
        ch = getche();
        system("CLS");
        if (ch == 'C' || ch == 'c')
        {
            cout << "\n\tEnter the code of product to be searched for: ";
            cin >> co;
        }
        else if (ch == 'N' || ch == 'n')
        {
            cout << "\n\tEnter the name of product to be searched for: ";
            getchar();
            fgets(na, 30, stdin);
        }
        else
        {
            cout << "\n\tInvalid Choice";
            getche();
            goto to;
        }
        f1.open("SHOP.txt", ios::binary | ios::in | ios::out);
        cout << "\n PRODUCT_CODE   PRODUCT_NAME   PRODUCT_QUANTITY   PRODUCT_PRICE ";
        while (f1.read((char *)&shop, sizeof(SHOP)) && flag == 0)
        {
            if (ch == 'C' || ch == 'c')
            {
                if (shop.retcode() == co)
                {
                    shop.showinfo();
                    gotoxy(100, 280);
                    shop.modifyinfo();
                    int pos = (-1) * sizeof(SHOP);
                    f1.seekp(pos, ios::cur);
                    f1.write((char *)&shop, sizeof(SHOP));
                    gotoxy(100, 450);
                    cout << "\n\tProduct Modified!";
                    flag = 1;
                }
            }
            else if (ch == 'N' || ch == 'n')
            {
                if (strcmpi(shop.name, na) == 0)
                {
                    shop.showinfo();
                    gotoxy(100, 280);
                    shop.modifyinfo();
                    int pos = (-1) * sizeof(SHOP);
                    f1.seekp(pos, ios::cur);
                    f1.write((char *)&shop, sizeof(SHOP));
                    gotoxy(100, 450);
                    cout << "\n\tProduct Modified!";
                    flag = 1;
                }
            }
        }
        f1.close();
        if (flag == 0)
        {
            gotoxy(100, 450);
            cout << "\n\tProduct not found!!";
        }
        else
        {
            gotoxy(100, 460);
            cout << "\nDo you want to modify more products(Y/N)";
        }
        cin >> go;
        if (go == 'Y' || go == 'y')
            goto TO4;
        else
            goto to;
    /*******
    DELETE A PRODUCT
    ******/
    case 5:
    TO5:
        system("CLS");
        cout << "\nHow do you want to search the product ('C' for code,'N' for name)";
        ch = getche();
        system("CLS");
        if (ch == 'C' || ch == 'c')
        {
            cout << "\n\tEnter the code of product to be searched for: ";
            cin >> co;
        }
        else if (ch == 'N' || ch == 'n')
        {
            cout << "\n\tEnter the name of product to be searched for: ";
            getchar();
            fgets(na, 30, stdin);
        }
        else
        {
            cout << "\n\tInvalid Choice!!";
            getche();
            goto to;
        }
        f1.open("SHOP.txt", ios::binary | ios::in);
        f2.open("TEMP.txt", ios::binary | ios::out);
        f1.seekg(0, ios::beg);
        while (f1.read((char *)&shop, sizeof(SHOP)))
        {
            if (ch == 'C' || ch == 'c')
            {
                if (shop.retcode() != co)
                {
                    f2.write((char *)&shop, sizeof(SHOP));
                }
            }
            else if (ch == 'N' || ch == 'n')
            {
                if (strcmpi(shop.name, na) != 0)
                {
                    f2.write((char *)&shop, sizeof(SHOP));
                }
            }
        }
        f2.close();
        f1.close();
        remove("SHOP.txt");
        rename("TEMP.txt", "SHOP.txt");
        gotoxy(100, 80);
        cout << "\n\tProduct deleted!";
        gotoxy(100, 110);
        cout << "\n\tDo you want to delete more products(Y/N)";
        cin >> go;
        if (go == 'Y' || go == 'y')
            goto TO5;
        else
            goto to;
    /*******
    EXIT
    ******/
    case 6:
        system("CLS");
        gotoxy(45, 200);
        cout << "\n\tThanks for visiting!";
        getch();
        exit(0);
    default:
        system("CLS");
        gotoxy(45, 200);
        cout << "\n\tWrong Choice!!";
        gotoxy(45, 300);
        cout << "\n\tDo you want to try again?(Y/N)";
        cin >> go;
        if (go == 'Y' || go == 'y')
            goto to;
        else
            break;
    }
    getch();
}
void bill(int c)
{
    row = 8;
    system("CLS");
    fstream f1;
    cout.setf(ios::left);
    cout << "\n\n CUSTOMER DETAIL";
    cout << "\n\n\n==================== ================================ == == == == == == == == == == == == === ";
    cout << "\nUSER_ID  USER_NAME   PHONE_NUMBER   STATE   CITY   PINCODE ";
    f1.open("customer_detail.txt", ios::binary | ios::in);
    while (f1.read((char *)&cus_det, sizeof(customer)))
    {
        if (cus_det.ret_cid() == c)
            cus_det.showc_info();
    }
    f1.close();
    cout << "\n\n\n PRODUCT DETAIL ";
    cout << "\n PRODUCT_CODE   PRODUCT_NAME   PRODUCT_QUANTITY   PRODUCT_PRICE ";
    row = 14;
    total_bill = 0;
    f1.open("order.txt", ios::binary | ios::in);
    while (f1.read((char *)&Order, sizeof(order_detail)))
    {
        if (Order.retordercid() == c)
            Order.showorder();
    }
    cout << "\n\n\t\t\t\tTOTAL BILL: Rs." << total_bill << "/=";
}
int main()
{
    system("CLS");
    int choice;
    cout << "\n\t1.Customer:";
    cout << "\n\t2.Manager:";
    cout << "\n\tSelect your role:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        customer_menu();
        break;
    case 2:
        production_menu();
        break;
    }
}