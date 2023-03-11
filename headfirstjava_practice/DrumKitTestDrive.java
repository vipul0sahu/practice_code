class DrumKit {
	
	void playSnare() {
		System.out.println("bang bang ba-bang");
	}

	void playTopHat() {
		System.out.println("ding ding da-ding");
	}

	boolean topHat = true;
	boolean snare = true;
}//class end parenthesis

	class DrumKitTestDrive {

		public static void main(String [] args) {

			DrumKit d = new DrumKit();
			d.playSnare();
			d.snare = false;
			d.playTopHat();

			if (d.snare == true) {
				d.playSnare();
			}//if end parenthesis
		}//main end parenthesis
	}//test class end parenthesis

