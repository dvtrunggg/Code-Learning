/*Tam giac*/
# include <iostream>
# include <math.h>
void main()
{
	int a,b,c;
 	cout <<"Nhap vao do dai 3 canh cua tam giac a,b,c: " <<endl;
 	cin >> a >> b >> c;
 	//dieu kien de a,b,c la do dai 3 canh cua tam giac
	if((a>0)&&(b>0)&&(c>0)&&(a-b<c)&&(a-c<b)&&(b-c<a))
	{
	    if((a==b)&&(b==c))
	    	cout <<"Do dai ba canh cua tam giac deu";
	    else if((a==b)||(a==c)||(c==b))
 			cout <<"Do dai ba canh cua tam giac can";
		else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
		    cout <<"Do dai ba canh cua tam giac vuong";
      	else if(((a*a+b*b==c*c)&&(a==b))||((a*a+c*c==b*b)&&(a==c))
		  		||((b*b+c*c==a*a)&&(b==c)))
			cout <<"Do dai ba canh cua tam giac vuong can";
		else
			cout <<"Do dai ba canh cua tam giac binh thuong";
	}
	else 
		cout <<"Khong phai do dai ba canh cua tam giac";
}
