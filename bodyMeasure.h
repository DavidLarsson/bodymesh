/*   Body Mesh, Keep track of body measurements
 *   Copyright (C) 2015  David Larsson
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
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
