package banner;

public class Curvedbanner extends Banner {
	private float radius;

	public Curvedbanner( float w, float h, float r) {
		super (w, h);
		radius = r;
	}
	public float getRadius() {
		return radius;
	}
	public void setRadius(float r) {
		radius = r;
	}
	public double area() {
		return super.area() - 0.86  * radius * radius;
	}
}
