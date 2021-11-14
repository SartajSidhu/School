public class ParkedCar{
	private String make;
	private int model;
	private String colour;
	private String licenseNum;
	private int minsParked;

	public ParkedCar(String mk, int mod, String col, String li, int mins){
		make = mk;
		model = mod;
		colour = col;
		licenseNum = li;
		minsParked = mins;

	}

	public String getMake() {
		return make;
	}
	
	public int getModel() {
		return model;
	}

	public String getColour() {
		return colour;
	}

	public String getLicenseNum() {
		return licenseNum;
	}

	public int getMinsParked() {
		return minsParked;
	}

	@Override
	public String toString() {
		return
			"Make:" + getMake() + "\n" +
			"Model:'" + getModel() + "\n" +
			"Colour:" + getColour() + "\n" +
			"LicenseNum:" + getLicenseNum() + "\n" +
			"MinsParked:" + getMinsParked() + "\n"
			;
	}
}