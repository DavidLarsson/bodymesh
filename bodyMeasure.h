#include <cmath>

class bodyMeasure {
 public:
  bodyMeasure() = delete;
 bodyMeasure(double inLength, double inWeight, double inChest, double inWaist, double inHips) :
  length(inLength), weight(inWeight), chest(inChest), waist(inWaist), hips(inHips) {}

  inline double getLength() { return length; }
  inline double getWeight() { return weight; }
  inline double getChest() { return chest; }
  inline double getWaist() { return waist; }
  inline double getHips() { return hips; }
  inline void setLength(double newLength) { length = newLength; return; }
  inline void setWeight(double newWeight) { weight = newWeight; return; }
  inline void setChest(double newChest) { chest = newChest; return; }
  inline void setWaist(double newWaist) { waist = newWaist; return; }
  inline void setHips(double newHips) { hips = newHips; return; }

  inline double waistToLength() { return waist/length; }
  inline double waistToHips() { return waist/hips; }
  inline double BMI() { return 10000*weight/(length*length); }

 private:
  double length;
  double weight;
  double chest;
  double waist;
  double hips;
};
