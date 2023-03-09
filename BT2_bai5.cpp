#include<bits/stdc++.h>
using namespace std;
int main() {
	int x=0;
	string n;
	cin>>n;
	if(n[0]=='-') {
		cout<<"negative ";
		n.erase(n.begin()+0);
	}
	reverse(n.begin(),n.end());
	int length = n.size();
	string so[3];//tao mang string doc 3 so 1
	for(int i = 0; i<3; i++) {
		so[i].erase(so[i].begin(),so[i].end());
	}
	so[0]=n.substr(0,3);
	if(length > 3) {
		so[1]=n.substr(3,3);
	}
	if(length>6) {
		so[2]=n.substr(6,3);
	}
	string doc[3];
	for(int i =0; i<3; i++) {
		doc[i].erase(doc[i].begin(),doc[i].end());
	}
	for(int i=0; i<3; i++) {
		if(so[i][2]) {
			x = so[i][2] - 48;
			switch(x) {
				case 1:
					doc[i]+="one hundred ";
					break;
				case 2:
					doc[i]+="two hundred ";
					break;
				case 3:
					doc[i]+="three hundred ";
					break;
				case 4:
					doc[i]+="four hundred ";
					break;
				case 5:
					doc[i]+="five hundred ";
					break;
				case 6:
					doc[i]+="six hundred ";
					break;
				case 7:
					doc[i]+="seven hundred ";
					break;
				case 8:
					doc[i]+="eight hundred ";
					break;
				case 9:
					doc[i]+="nine hundred ";
					break;
			}
		}
		if(so[i][1]) {
			x = so[i][1] - 48;
			switch(x) {
				case 1:
					if(so[i][0]==0)doc[i] += "ten ";
					else if(so[i][0]==1)doc[i] += "eleven ";
					else if(so[i][0]==2)doc[i] += "twelwe ";
					else if(so[i][0]==3)doc[i] += "thirteen ";
					else if(so[i][0]==4)doc[i] += "fourteen ";
					else if(so[i][0]==5)doc[i] += "fifteen ";
					else if(so[i][0]==6)doc[i] += "sixteen ";
					else if(so[i][0]==7)doc[i] += "seventeen ";
					else if(so[i][0]==8)doc[i] += "eighteen ";
					else if(so[i][0]==9)doc[i] += "nineteen ";
					break;
				case 2:
					doc[i]+="twenty-";
					break;
				case 3:
					doc[i]+="thirty-";
					break;
				case 4:
					doc[i]+="fourty-";
					break;
				case 5:
					doc[i]+="fifty-";
					break;
				case 6:
					doc[i]+="sixty-";
					break;
				case 7:
					doc[i]+="seventy-";
					break;
				case 8:
					doc[i]+="eighty-";
					break;
				case 9:
					doc[i]+="ninety-";
					break;
			}
		}
		if(so[i][0]&&so[i][1]!=1) {
			x = so[i][0] - 48;
			switch(x) {
				case 1:
					doc[i]+="one ";
					break;
				case 2:
					doc[i]+="two ";
					break;
				case 3:
					doc[i]+="three ";
					break;
				case 4:
					doc[i]+="four ";
					break;
				case 5:
					doc[i]+="five ";
					break;
				case 6:
					doc[i]+="six ";
					break;
				case 7:
					doc[i]+="seven ";
					break;
				case 8:
					doc[i]+="eight ";
					break;
				case 9:
					doc[i]+="nine ";
					break;
			}
		}
	}
	if(doc[2]!="")cout<<doc[2]<<"million ";
	if(doc[1]!="")cout<<doc[1]<<"thousand ";
	if(doc[0]!="")cout<<doc[0];
}
