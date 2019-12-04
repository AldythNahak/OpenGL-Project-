#include <stdio.h>
#include <math.h>

int main(){
	float
            Ax = 100.0,
			Ay = 50.0,
			Bx = 500.0,
			By = 475.0,
			Cx = 125.0,
			Cy = 300.0,
			Dx = 650.0,
			Dy = 275.0;

		float mAB, cAB, mCD, cCD, x,y;
		mAB = (By-Ay) / (Bx - Ax);
		cAB = Ay - (mAB * Ax);

		mCD = (Dy-Cy) / (Dx - Cx);
		cCD = (mAB * x) + cAB;

		x = (cCD - cAB) / (mAB-mCD);
		y = (mAB * x) + cAB;

printf("",mAB, cAB, x, y);
}
