#ifndef MATRIX_H
#define MATRIX_H

class matrix
{
	public:
	 	double **a;
		int m;
		int n;
		string name;

		matrix():m(0),n(0) {};
		void create (int x,int y);
		matrix (int m, int n, string N);
		void fill();
		void show();
		void set (int i, int j, double r);
		double get(int i,int j);

};

#endif
