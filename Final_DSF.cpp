#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<unordered_map>

using namespace std;
#define SIZE 50

///--------------------------------------------------------/
class NODE {
public:
    char a[50];
	int d;
	NODE *left, *right,*cent;
	NODE() {
		left = right = NULL;
	}
	NODE(int x) {
		d = x;
		left = right = NULL;
	}

};

class BST {

	NODE *root,*root1,*root2;
	NODE *root3;
	NODE *root4;
NODE* insertrec(NODE* T, NODE *temp);
public:
	void insert1(int x);
	void insert2(int x);
	void insert3(int x);
	NODE *ret(int k,NODE *t);
	NODE *ret1(int k,NODE *t);
	NODE *ret2(int k,NODE *t);
    void insert_rec(int x);


	BST() {
		root = NULL;
		root1=NULL;
		root2=NULL;
	}
};


void BST::insert1(int x) {

	NODE *current, *parent;
	NODE *temp = new NODE(x);

	if (root == NULL)
		root = temp;
	else {
		current = root;

		while (current != NULL) {

			parent = current;

			if (temp->d < current->d)
				current = current->left;
			else
				current = current->right;
		}

		if (temp->d < parent->d)
			parent->left = temp;
		else
			parent->right = temp;
	}
}

void BST::insert2(int x) {

	NODE *current, *parent;
	NODE *temp = new NODE(x);

	if (root1 == NULL)
		root1 = temp;
	else {
		current = root1;

		while (current != NULL) {

			parent = current;

			if (temp->d < current->d)
				current = current->left;
			else
				current = current->right;
		}

		if (temp->d < parent->d)
			parent->left = temp;
		else
			parent->right = temp;
	}
}

void BST::insert3(int x) {

	NODE *current, *parent;
	NODE *temp = new NODE(x);

	if (root2 == NULL)
		root2 = temp;
	else {
		current = root2;

		while (current != NULL) {

			parent = current;

			if (temp->d < current->d)
				current = current->left;
			else
				current = current->right;
		}

		if (temp->d < parent->d)
			parent->left = temp;
		else
			parent->right = temp;
	}
}


void BST::insert_rec(int x)
{
NODE *temp = new NODE(x);
root=insertrec(root,temp);
}

NODE* BST::insertrec(NODE* T, NODE* temp)
{

if(T==NULL)
	return temp;
if(temp->d<T->d)
	T->left= insertrec(T->left,temp);
else
  T->right= insertrec(T->right,temp);
}

NODE *BST::ret(int k,NODE *t)
{
    if(root->d==k)
    {
        return root;
    }
    else
    {
        cout << "SOME ERROR OCCURED!\n";

    }
}

NODE *BST::ret1(int k,NODE *t)
{
    if(root1->d==k)
    {
        return root1;
    }
    else
    {
        cout << "SOME ERROR OCCURED!\n";

    }
}

NODE *BST::ret2(int k,NODE *t)
{
    if(root2->d==k)
    {
        return root2;
    }
    else
    {
        cout << "SOME ERROR OCCURED!\n";
    }
}
int main()
{

     int opt,i,k,h;
     h=1;
     int f,d;
    BST a;
    NODE *t;
    NODE *t1;
    NODE *t2;
    int j1 = 50;
    int j2=200;
    int j3=430;
    d=0;
    unordered_map<int, string> umap;
    while(1)
    {
    cout << "1.Initialize the game\n2.Play the game\n3.Exit\n";
    cin >> f;
    switch(f)
    {
    case 1:
    d=1;
    h=1;
    while(h)
    {
    cout << "Choose your option\n1.Initialize Companies\n2.Initialize Celebrities\n3.Initialize Animals\n4.Exit loop\n";

        cin >> opt;
        switch(opt)
        {
        case 1:
            //Company initialization here
            a.insert1(50);
            umap[50]="Is it an automobile company?";
            a.insert1(35);
            umap[35]="Is it of Indian Origin?";
            a.insert1(65);
            umap[65]="Is it an e-commerce company?";
            a.insert1(30);
            umap[30]="You are thinking of TATA Motors.";
            a.insert1(40);
            umap[40]="You are thinking of BMW.";
            a.insert1(55);
            umap[55]="Is it of Indian Origin?";
            a.insert1(70);
            umap[70]="Is it a network providing company?";
            a.insert1(54);
            umap[54]="You are thinking of Flipkart.";
            a.insert1(56);
            umap[56]="You are thinking of Amazon.";
            a.insert1(67);
            umap[67]="Is it of Indian Origin?";
            a.insert1(73);
            umap[73]="Is the CEO of the company an IITian?";
            a.insert1(66);
            umap[66]="You are thinking of Jio.";
            a.insert1(68);
            umap[68]="You are thinking of Vodafone.";
            a.insert1(71);
            umap[71]="You are thinking of Google.";;
            a.insert1(72);
            umap[72]="You are thinking of Microsoft.";;
            break;
        case 2:
           // Character Initialization Here
           a.insert2(200);
           umap[200]="Is youtuber?";
           a.insert2(150);
           umap[150]="Is Teacher?";
           a.insert2(280);
           umap[280]="is actor?";
           a.insert2(110);
           umap[110]="Is male?";
           a.insert2(160);
           umap[160]="is Roaster?";
           a.insert2(225);
           umap[225]="Is From Tollywood?";
           a.insert2(360);
           umap[360]="Is technical Person?";
           a.insert2(90);
           umap[90]="Sorry!We dont have such character in our Database till now!";
           a.insert2(111);
           umap[111]="we think She's jenny Maam!";
           a.insert2(155);
           umap[155]="Is Male?";
           a.insert2(165);
           umap[165]="Sorry!We dont have such character in our Database till now!";
           a.insert2(220);
           umap[220]="Is male?";
           a.insert2(230);
           umap[230]="Is From Hollywood Movies?";
           a.insert2(330);
           umap[330]="Is Indian?";
           a.insert2(400);
           umap[400]="Is Politician?";
           a.insert2(153);
           umap[153]="We guess He's Carry!";
           a.insert2(157);
           umap[157]="Sorry!We dont have such character in our Database till now!";
           a.insert2(218);
           umap[218]="We guess he's Rajnikant!";
           a.insert2(222);
           umap[222]="Sorry!We dont have such character in our Database till now!";
           a.insert2(227);
           umap[227]="Is male?";
           a.insert2(235);
           umap[235]="Sorry!We dont have such character in our Database till now!";
           a.insert2(320);
           umap[320]="Is CEO?";
           a.insert2(340);
           umap[340]="Is Richest Person?";
           a.insert2(380);
           umap[380]="From Bjp?";
           a.insert2(410);
           umap[410]="Sorry!We dont have such character in our Database till now!";
           a.insert2(226);
           umap[226]="We guess He's Iron Man!";
           a.insert2(228);
           umap[228]="Sorry!We dont have such character in our Database till now!";
           a.insert2(318);
           umap[318]="We guess He's Sundar Pichai";
           a.insert2(322);
           umap[322]="Sorry!We dont have such character in our Database till now!";
           a.insert2(335);
           umap[335]="We guess He's Elon Musk!";
           a.insert2(345);
           umap[345]="Sorry!We dont have such character in our Database till now!";
           a.insert2(370);
           umap[370]="Is Male?";
           a.insert2(391);
           umap[391]="From Congress Party?";
           a.insert2(365);
           umap[365]="Is PM?";
           a.insert2(372);
           umap[372]="Sorry!We dont have such character in our Database till now!";
           a.insert2(386);
           umap[386]="Is Male?";
           a.insert2(393);
           umap[393]="Sorry!We dont have such character in our Database till now!";
           a.insert2(363);
           umap[363]="He's Narendra Modi?";
           a.insert2(368);
           umap[368]="Sorry!We dont have such character in our Database till now!";
           a.insert2(384);
           umap[384]="Delivers Comedy Speech?";
           a.insert2(390);
           umap[390]="Sorry!We dont have such character in our Database till now!";
           a.insert2(383);
           umap[383]="We guess He's Pappu!";
           a.insert2(385);
           umap[385]="Sorry!We dont have such character in our Database till now!";
           a.insert2(390);
           umap[390]="Sorry!We dont have such character in our Database till now!";
            break;
        case 3:
          // Animal Initialization Here
            a.insert3(430);
            umap[430]="Animal is carnivorous?";
            a.insert3(418);
            umap[418]="Is it related to cat family?";
            a.insert3(414);
            umap[414]="Is it a national animal of India?";
            a.insert3(412);
            umap[412]="You are thinking of Tiger";
            a.insert3(416);
            umap[416]="You are thinking of Lion.";
            a.insert3(422);
            umap[422]="Is it familiar to lizards";
            a.insert3(420);
            umap[420]="You are thinking of comodo Dragon.";
            a.insert3(424);
            umap[424]="You are thinking of Crocodile.";
            a.insert3(438);
            umap[438]="Tallest of all mammals";
            a.insert3(436);
            umap[436]="You are thinking of Giraffe";
            a.insert3(440);
            umap[440]="You are thinking of Horse";
            break;
        case 4:
            h=0;
            break;
        default:
            cout << "INVALID INPUT!\n";
        }
    }
        break;
    case 2:
        if(d==0)
        {
            cout << "You need to initialize the game first!\n";
        }
        else
        {
            int r;
            cout << "What do you want me to guess?\n1.Companies\n2.Character\n3.Animals\n";
            cin >> r;
            if(r==1)
            {
                //int q=50;
    int waste;
    t=a.ret(j1,t);
    cout << "Choose one of these in your mind\n1.TATA Motors\n2.BMW\n3.Flipkart\n4.Amazon\n5.Jio\n6.Vodafone\n7.Google\n8.Microsoft\nPress any number when you are done\n";
    cin >> waste;
    cout << "Is it an automobile company?\n";
    int q=1;
    while(q)
    {

        cout << "Say 1 for Yes or 0 for No or type 3 to exit\n";
        cin >> opt;
        if(opt==1)
        {
           t=t->left;
           cout << umap.at(t->d) <<endl;
        }
        else if(opt==0)
        {
            t=t->right;
            cout << umap.at(t->d) <<endl;
        }
        else if(opt==3)
        {
            q=0;
        }
        else
        {
            cout << "Invalid input!\n";
        }
    }

            }
            else if(r==2)
            {
                t1=a.ret1(j2,t1);
                //Character game here
                int waste;
                cout << "Choose one of these in your mind\n1.Narendra Modi\n2.Carryminati\n3.Sundar Pichai\n4.Elon Musk\n5.Rahul Gandhi\n6.Rajnikanth\n7.Robert Downey Jr.\n8.Jenny Tutorials\nPress any number when you are done\n";
                cin >> waste;
                cout << "Is he/she Youtuber??\n";
                int q=1;
                while(q)
                {

                    cout << "Say 1 for Yes or 0 for No or type 3 to exit\n";
                    cin >> opt;
                    if(opt==1)
                    {
                        t1=t1->left;
                        cout << umap.at(t1->d) <<endl;
                    }
                    else if(opt==0)
                    {
                        t1=t1->right;
                        cout << umap.at(t1->d)<<endl;
                    }
                    else if(opt==3)
                    {
                        q=0;
                    }
                    else
                    {
                        cout << "Invalid input!\n";
                    }
                }

            }
            else if(r==3)
            {
                t2=a.ret2(j3,t2);
                //Animal game here
                int waste;
                cout << "Choose one of these in your mind\n1.Lion\n2.Tiger\n3.Komodo dragon\n4.Giraffe\n5.Horse\n6.Crocodile\nPress any number when you are done\n";
                cin >> waste;
                cout << "Animal is carnivorous?\n";


                int q=1;
                while(q)
                {

                    cout << "Say 1 for Yes or 0 for No or type 3 to exit\n";
                    cin >> opt;
                    if(opt==1)
                    {
                        t2=t2->left;
                        cout << umap.at(t2->d) <<endl;
                    }
                    else if(opt==0)
                    {
                        t2=t2->right;
                        cout << umap.at(t2->d)<<endl;
                    }
                    else if(opt==3)
                    {
                        q=0;
                    }
                    else
                    {
                        cout << "Invalid input!\n";
                    }
                }


            }
            else
            {
                cout << "INVALID INPUT! TRY AGAIN!\n";
            }
        }
        break;
    case 3:
        return 0;
    default:
        cout << "UH-OH, Invalid input! Try again!\n";
    }

}

}
