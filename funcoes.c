#include <stdio.h>
#include <math.h>

double CF (double CF){

double Q1, A = 98.03, B = -36.45, C = 3.138, D = 0.06776;


if (CF > 1000000){


	return 3;

}else{

Q1 = A + ( B * log10(CF)) + ( C * pow( log10(CF), 2 )) + (D * pow( log10(CF), 3 ));


return Q1;
}
 
}

double DBO (double DBO){


double Q3, A = 102.6, B = -0.1101;

if (DBO > 30){


	return 2.0;
	
}else{


	Q3 = A * exp((B * DBO));
}


return Q3;
}

double FT (double FT){
	double q5, b;
	if(FT>10){
		return 1;
	}
		b = -1.680 * pow(FT,0.3325);
		q5 = 213.7 * exp(b);
return q5;

}

double NT (double NT){


	if (NT > 100){

		return 1;
	}else{

		double Q4, A = 98.96, B = -0.2232, C = -0.006457;

		Q4 = A * pow(NT, (B + (C*NT)));

		return Q4;

	}
}



double OD(double OD) {
	double q9, a;
	if(OD == 140){
		return 47;
	}
	a = (OD + (-106)) * (OD + (-106));
	q9 = 100.8 * exp(a / -3745);
	return q9;
}


double PH (double PH){

double Q2, A = 0.05421, B = 1.23, C = -0.09873;

if (PH >= 12){

	return 3.0;

}else if (PH < 2){


	return 2.0;

}else{


	Q2 = A * pow(PH, ((B * PH) + (C * pow( PH , 2 )))) + 5.213;

return Q2;

}	

}

double ST(double ST) {
	double q8;
	if (ST > 500){
		return 32;
	}
	q8 = 80.26 * exp(-0.00107 * ST + 0.03009 * sqrt(ST)) + -0.1185 * ST;
	return q8;
}


double TU(double TU) {
	double q7;
	if(TU > 100){
		return 5;
	}
	q7 = 97.34 * exp(-0.01139 * TU + -0.04917 * sqrt(TU));
	return q7;
}


double VT(double VT) {
	double q6, a;
		if(VT >15){
		return 9;
		}
	a = (VT + 0.1815) * (VT + 0.1815);
    q6 = 1 / (0.0003869 * a + 0.01081);
	return q6;
}
