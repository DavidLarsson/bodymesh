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
#include "gmock/gmock.h"
#include "bodyMeasure.h"

using namespace testing;

class bodyMeasureBasics : public testing::Test {
public:
  bodyMeasure bM = bodyMeasure(185,90.1,79,80,78);
};

class bodyMeasureCalculations : public testing::Test {
public:
  bodyMeasure bM = bodyMeasure(182,96.4,104,99,114);
};

TEST_F(bodyMeasureBasics,IsConstructedWithMeasuresOfWeightChestWaistHips) {
  ASSERT_THAT(bM.getLength(),Eq(185));
  ASSERT_THAT(bM.getWeight(),Eq(90.1));
  ASSERT_THAT(bM.getChest(),Eq(79));
  ASSERT_THAT(bM.getWaist(),Eq(80));
  ASSERT_THAT(bM.getHips(),Eq(78));
}

TEST_F(bodyMeasureBasics,CanChangeLength) {
  bM.setLength(188);
  ASSERT_THAT(bM.getLength(),Eq(188));
}


TEST_F(bodyMeasureBasics,CanChangeWeight) {
  bM.setWeight(98);
  ASSERT_THAT(bM.getWeight(),Eq(98));
}

TEST_F(bodyMeasureBasics,CanChangeChest) {
  bM.setChest(98);
  ASSERT_THAT(bM.getChest(),Eq(98));
}

TEST_F(bodyMeasureBasics,CanChangeWaist) {
  bM.setWaist(98);
  ASSERT_THAT(bM.getWaist(),Eq(98));
}

TEST_F(bodyMeasureBasics,CanChangeHips) {
  bM.setHips(98);
  ASSERT_THAT(bM.getHips(),Eq(98));
}

TEST_F(bodyMeasureCalculations,CalculatesWaistToLength) {
  ASSERT_DOUBLE_EQ(bM.waistToLength(),0.54395604395604391);
}

TEST_F(bodyMeasureCalculations,CalculatesWaistToHips) {
  ASSERT_DOUBLE_EQ(bM.waistToHips(),0.86842105263157898);
}

TEST_F(bodyMeasureCalculations,CalculatesBMI) {
  ASSERT_DOUBLE_EQ(bM.BMI(),29.102765366501629);
}
