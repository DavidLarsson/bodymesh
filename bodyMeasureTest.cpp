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
