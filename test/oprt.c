#include "ctest.h"
#include <stdlib.h>

#include"../src/libtrpo/command.h"

CTEST(tar_meg_test, test_meg_case1) {
	int m1 = 11;
    struct tarif expected_result = {550, 50, 600, 250};
    struct tarif result = meg(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_meg_test, test_meg_case2) {
	int m1 = 12;
    struct tarif expected_result = {720, 30, 900, 600};
    struct tarif result = meg(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_meg_test, test_meg_case3) {
	int m1 = 13;
    struct tarif expected_result = {1000, 30, 1500, 0};
    struct tarif result = meg(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_meg_test, test_meg_case4) {
	int m1 = 14;
    struct tarif expected_result = {2000, 60, 9999, 250};
    struct tarif result = meg(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_meg_test, test_meg_case5) {
	int m1 = 15;
    struct tarif expected_result = {200, 0, 300, 100};
    struct tarif result = meg(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}

//===========================================================


CTEST(tar_mts_test, test_mts_case1) {
	int m1 = 21;
    struct tarif expected_result = {950, 50, 500, 500};
    struct tarif result = mts(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_mts_test, test_mts_case2) {
	int m1 = 22;
    struct tarif expected_result = {717, 30, 900, 100};
    struct tarif result = mts(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_mts_test, test_mts_case3) {
	int m1 = 23;
    struct tarif expected_result = {600, 30, 600, 1000};
    struct tarif result = mts(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_mts_test, test_meg_case4) {
	int m1 = 24;
    struct tarif expected_result = {1900, 100, 3500, 2000};
    struct tarif result = mts(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_mts_test, test_mts_case5) {
	int m1 = 25;
    struct tarif expected_result = {225, 1, 500, 100};
    struct tarif result = mts(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}

//===========================================================


CTEST(tar_tel_test, test_tel_case1) {
	int m1 = 31;
    struct tarif expected_result = {800, 50, 200, 250};
    struct tarif result = tel(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_tel_test, test_tel_case2) {
	int m1 = 32;
    struct tarif expected_result = {600, 30, 700, 100};
    struct tarif result = tel(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_tel_test, test_tel_case3) {
	int m1 = 33;
    struct tarif expected_result = {600, 30, 700, 100};
    struct tarif result = tel(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_tel_test, test_tel_case4) {
	int m1 = 34;
    struct tarif expected_result = {900, 60, 1000, 999};
    struct tarif result = tel(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_tel_test, test_tel_case5) {
	int m1 = 35;
    struct tarif expected_result = {250, 10, 500, 500};
    struct tarif result = tel(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}

//===========================================================


CTEST(tar_bil_test, test_bil_case1) {
	int m1 = 41;
    struct tarif expected_result = {650, 60, 500, 250};
    struct tarif result = bil(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_bil_test, test_bil_case2) {
	int m1 = 42;
    struct tarif expected_result = {580, 30, 600, 100};
    struct tarif result = bil(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_bil_test, test_bil_case3) {
	int m1 = 43;
    struct tarif expected_result = {730, 40, 900, 999};
    struct tarif result = bil(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_bil_test, test_bil_case4) {
	int m1 = 44;
    struct tarif expected_result = {1800, 100, 999, 1999};
    struct tarif result = bil(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}
CTEST(tar_bil_test, test_bil_case5) {
	int m1 = 45;
    struct tarif expected_result = {240, 5, 500, 100};
    struct tarif result = bil(m1);
    ASSERT_EQUAL(expected_result.cost, result.cost);
    ASSERT_EQUAL(expected_result.web, result.web);
    ASSERT_EQUAL(expected_result.min, result.min);
    ASSERT_EQUAL(expected_result.sms, result.sms);}

