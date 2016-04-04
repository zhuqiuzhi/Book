class Point {
	public double x;
	public double y;
}

class MiddlePoint{
	public static void main(String[] argv) {
		Point lowerLeft     = new Point();
		Point upperRight    = new Point();
		Point middlePoint   = new Point();

		lowerLeft.x = 0.0;
		lowerLeft.y = 0.0;

		upperRight.x = 1280.0;
		upperRight.y = 1024.0;

		middlePoint.x = (lowerLeft.x + upperRight.x) / 2.0; 
		middlePoint.y = (lowerLeft.y + upperRight.y) / 2.0;

		System.out.println("middlePoint.x = " + middlePoint.x);
		System.out.println("middlePoint.y = " + middlePoint.y);
	}
}
