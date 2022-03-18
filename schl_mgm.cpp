#include<iostream>
using namespace std;

string Names[20], rollNo[20], Courses[20], Class[20], Address[20];
int total =0;

void enter(){
    
    int choice;
    cout<<"How many students do you want to enter: ";
    cin>>choice;
    if(total ==0){
    total = total + choice;

        for(int i =0; i< choice ; i++){
            cout<<"Enter the data of the student: "<<i+1<<endl<<endl;
            cout<<"Enter the Name of the Student: ";
            cin>>Names[i];
            cout<<"Enter the rollNo of the Student: ";
            cin>>rollNo[i];
            cout<<"Enter the course of the Student: ";
            cin>>Courses[i];
            cout<<"Enter the class of the Student: ";
            cin>>Class[i];
            cout<<"Enter the contact address of the student: ";
            cin>>Address[i];
            cout<<endl;
        }
    }
    else {
            for(int i =total; i< total + choice; i++){
                cout<<"Enter the data of the student: "<<i+1<<endl<<endl;
                cout<<"Enter the Name of the Student: ";
                cin>>Names[i];
                cout<<"Enter the rollNo of the Student: ";
                cin>>rollNo[i];
                cout<<"Enter the course of the Student: ";
                cin>>Courses[i];
                cout<<"Enter the class of the Student: ";
                cin>>Class[i];
                cout<<"Enter the contact address of the student: ";
                cin>>Address[i];
                cout<<endl;
            }
        total = total + choice;
        }
}

void show(){

    for(int i=0; i< total; i++){
        cout<<"Data of Student: "<<i+1<<endl<<endl;
        cout<<"Name: "<<Names[i]<<endl;
        cout<<"Roll No. : "<<rollNo[i]<<endl;
        cout<<"Course: "<<Courses[i]<<endl;
        cout<<"Class: "<<Class[i]<<endl;
        cout<<"Contact Address: "<<Address[i]<<endl;
        cout<<endl;
    }

}

void search (){

    string roll;
    cout<<"Enter the roll no. you want to search for: ";
    cin>>roll;

    for(int i=0; i<total; i++)
    {
        if( roll == rollNo[i])
        {
            cout<<"Data of Student: "<<i+1<<endl<<endl;
            cout<<"Name: "<<Names[i]<<endl;
            cout<<"Roll No. : "<<rollNo[i]<<endl;
            cout<<"Course: "<<Courses[i]<<endl;
            cout<<"Class: "<<Class[i]<<endl;
            cout<<"Contact Address: "<<Address[i]<<endl;
            cout<<endl;

        }
    }

}

void update(){

    string roll;
    cout<<"Enter the roll no. you want to search for: ";
    cin>>roll;
    cout<<endl;

    for(int i=0; i<total; i++)
    {
        if( roll == rollNo[i])
        {
            cout<<"PREVIOUS DATA"<<endl<<endl;
            cout<<"Data of Student: "<<i+1<<endl<<endl;
            cout<<"Name: "<<Names[i]<<endl;
            cout<<"Roll No. : "<<rollNo[i]<<endl;
            cout<<"Course: "<<Courses[i]<<endl;
            cout<<"Class: "<<Class[i]<<endl;
            cout<<"Contact Address: "<<Address[i]<<endl;
            cout<<endl<<endl;

            cout<<"Enter the new data: "<<endl;
            cout<<"Enter the updated name : "<<endl;
            cin>>Names[i];
            cout<<"Enter the updated rollNo of the Student: ";
            cin>>rollNo[i];
            cout<<"Enter the updated course of the Student: ";
            cin>>Courses[i];
            cout<<"Enter the updated class of the Student: ";
            cin>>Class[i];
            cout<<"Enter the updated contact address of the student: ";
            cin>>Address[i];
            cout<<endl;

        }
    }

}

void deleteRecord (){

    int a;
    cout<<"Press 1 to delete full record"<<endl;
    cout<<"Press 2 to delete a specific record"<<endl;
    cin>>a;

    if(a==1)
    {
        total =0;
        cout<<"ALL RECORDS ARE DELETED SUCCESSFULLY!"<<endl;
    }

    else if (a==2)
    {
        string roll;
        cout<<"Enter for which roll no. you want to delete the data: "<<endl;
        cin>> roll;

        for(int i=0; i< total; i++)
        {
            if(roll == rollNo[i])
            {
                for(int j = i; j<total; j++)
                {
                    Names[j] = Names[j+1];
                    rollNo[j]= rollNo[j+1];
                    Courses[j]= Courses[j+1];
                    Class[j] = Class[j+1];
                    Address[j]= Address[j+1];
                }

                total--;
                cout<<"YOUR REQUIRED DATA IS DELETED...!!"<<endl;
            }
        }
    }

}
main()
{
    int value;
    while(true){
    cout<<"Press 1 to enter data"<<endl;
    cout<<"Press 2 to show data"<<endl;
    cout<<"Press 3 to search data"<<endl;
    cout<<"Press 4 to update data"<<endl;
    cout<<"Press 5 to delete data"<<endl;
    cout<<"Press 6 to exit"<<endl;
    cin>>value;
    cout<<endl;

    switch(value)
    {
        case 1:
            enter();
            break;
        case 2:
            show();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            deleteRecord();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout<<"Your Input is Invalid"<<endl;
    }
    }

}