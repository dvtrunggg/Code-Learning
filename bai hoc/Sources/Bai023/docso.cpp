/*Doc so co 3 chu so*/
# include <iostream>
void main()
{
	int n,t,c,dv ;
	int flag1 = 0;
 	cout <<"Nhap vao so nguyen < 1000: " << endl;
 	cin >> n;
 	t = n/100 ;
	c = (n%100)/10 ;
	dv= (n%100)%10 ;
  	switch(t)
    {   
		case 1 :cout<<"Mot tram "; break ;
		case 2 :cout<<"Hai tram " ; break ;
		case 3 :cout<<"Ba tram "  ; break ;
		case 4 :cout<<"Bon tram " ; break ;
		case 5 :cout<<"Nam tram " ; break ;
		case 6 :cout<<"Sau tram " ; break ;
		case 7 :cout<<"Bay tram " ; break ;
		case 8 :cout<<"Tam tram " ; break ;
		case 9 :cout<<"Chin tram "; break ;
    }
    switch(c)
    {   
		case 0 :if (dv!=0) cout<<"le ";else cout<<"chan"; break ;
		case 1 :cout<<"muoi "; break ;
		case 2 :cout<<"hai muoi " ; break ;
		case 3 :cout<<"ba muoi "  ; break ;
		case 4 :cout<<"bon muoi " ; break ;
		case 5 :cout<<"nam muoi " ; break ;
		case 6 :cout<<"sau muoi " ; break ;
		case 7 :cout<<"bay muoi " ; break ;
		case 8 :cout<<"tam muoi " ; break ;
		case 9 :cout<<"chin muoi "; break ;
    }
    switch(dv)
    {   
		case 1 :cout<<"mot don vi "; break ;
		case 2 :cout<<"hai don vi " ; break ;
		case 3 :cout<<"ba don vi "  ; break ;
		case 4 :cout<<"bon don vi " ; break ;
		case 5 :cout<<"nam don vi " ; break ;
		case 6 :cout<<"sau don vi " ; break ;
		case 7 :cout<<"bay don vi " ; break ;
		case 8 :cout<<"tam don vi " ; break ;
		case 9 :cout<<"chin don vi "; break ;
    }
    cout <<endl;
}
