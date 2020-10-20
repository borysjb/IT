
void matrix::create (int x, int y)
{
	m=x;
	n=y;
	a=new double *[m];
	for (int i=0;i<m;i++)
	{
		a[i]=new double [n] ();
	}

	return;
}

void matrix::fill ()
{
	for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=rand()%10;
		}
	}
	return;
}

void matrix::show ()
{
	for (int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return;
}

void matrix::set (int i, int j, double r)
{
	a[i][j]=r;
	return;
}

double matrix::get (int i,int j)
{
	return a[i][j];
}
