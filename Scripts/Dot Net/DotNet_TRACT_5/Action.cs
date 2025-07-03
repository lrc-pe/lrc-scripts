//---------------------------------------------
//Script Title        :
//Script Description  :
//
//
//Recorder Version    : 1203
//---------------------------------------------

namespace Script {
    using ClassLibrary1;
    using LoadRunner;
    using Mercury.LoadRunner.DotNetProtocol.Replay;
    using System;
    
    
    public partial class VuserClass {
        
        public virtual int Action() {
			lr.start_transaction("1");
			lr.log("Event 1: new Class1();");
			Class1_1 = new Class1();

			lr.log("Event 2: Class1_1.f1(5);");
			Class1_1.f1(5);
			lr.end_transaction("1", lr.AUTO);

			lr.log("Event 3: Class1_1.f2();");
			Class1_1.f2();

			lr.log("Event 4: Class1_1.f3();");
			StringRetVal = Class1_1.f3();

			lr.log("Event 5: Class1_1.f4();");
			Int32RetVal = Class1_1.f4();

			lr.log("Event 6: ((Int32)(Class1_1.f5()));");
			Int32RetVal = ((Int32)(Class1_1.f5()));

			lr.start_transaction("2");
			Int32 j_1;
			j_1 = 4;
			lr.log("Event 7: ((Int32)(Class1_1.f6(ref j_1)));");
			Int32RetVal = ((Int32)(Class1_1.f6(ref j_1)));

			lr.log("Event 8: Class1.f7();");
			Int32RetVal = Class1.f7();

			struct_test struct_test_1 = st_1;
			lr.log("Event 9: Class1_1.f8(ref struct_test_1);");
			struct_test_2 = Class1_1.f8(ref struct_test_1);
			st_2 = struct_test_1;

			lr.log("Event 10: new class_test();");
			class_test_1 = new class_test();
			lr.end_transaction("2", lr.AUTO);

			lr.log("Event 11: Class1_1.f9(ref class_test_1);");
			class_test_2 = Class1_1.f9(ref class_test_1);

			lr.log("Event 12: new class_test();");
			class_test_3 = new class_test();

			lr.log("Event 13: Class1_1.f10(5D, class_test_3, out outTest_1);");
			Class1_1.f10(5D, class_test_3, out outTest_1);

			lr.start_transaction("3");
			lr.log("Event 14: Class1_1.f11(5, out outTest_2, \"Hello!\");");
			Class1_1.f11(5, out outTest_2, "Hello!");

			nums_1 = new int[] {
				  1,
				  2,
				  3,
				  4,
				  5};
			lr.log("Event 15: Class1_1.f12(nums_1);");
			Int32Array_1 = Class1_1.f12(nums_1);

			lr.log("Event 16: new class_test();");
			class_test_4 = new class_test();

			lr.log("Event 17: new class_test();");
			class_test_5 = new class_test();

			lr.log("Event 18: new class_test();");
			class_test_6 = new class_test();

			lr.log("Event 19: new class_test();");
			class_test_7 = new class_test();

			lr.log("Event 20: new class_test();");
			class_test_8 = new class_test();
			lr.end_transaction("3", lr.AUTO);

			lr.start_transaction("10");
			structs_1 = new class_test[5];
			structs_1[0] = class_test_4;
			structs_1[1] = class_test_5;
			structs_1[2] = class_test_6;
			structs_1[3] = class_test_7;
			structs_1[4] = class_test_8;
			lr.log("Event 21: Class1_1.f13(structs_1);");
			class_testArray_1 = Class1_1.f13(structs_1);

			structs_2 = new struct_test[5];
			structs_2[0] = structs_3;
			structs_2[1] = structs_4;
			structs_2[2] = structs_5;
			structs_2[3] = structs_6;
			structs_2[4] = structs_7;
			lr.log("Event 22: Class1_1.f14(ref structs_2, out retArr_1);");
			Class1_1.f14(ref structs_2, out retArr_1);

			lr.start_transaction("4");
			lr.log("Event 23: new class_test();");
			class_test_9 = new class_test();
			lr.end_transaction("10", lr.AUTO);

			lr.log("Event 24: new class_test();");
			class_test_10 = new class_test();

			lr.log("Event 25: new class_test();");
			class_test_11 = new class_test();

			lr.log("Event 26: new class_test();");
			class_test_12 = new class_test();
			lr.end_transaction("4", lr.AUTO);

			lr.log("Event 27: new class_test();");
			class_test_13 = new class_test();

			structs_8 = new class_test[5];
			structs_8[0] = class_test_9;
			structs_8[1] = class_test_10;
			structs_8[2] = class_test_11;
			structs_8[3] = class_test_12;
			structs_8[4] = class_test_13;
			lr.log("Event 28: Class1_1.f15(ref structs_8, out retArr_2);");
			Class1_1.f15(ref structs_8, out retArr_2);

			structs_9 = new struct_test[2, 5];
			structs_9[0, 0] = structs_3;
			structs_9[0, 1] = structs_4;
			structs_9[0, 2] = structs_5;
			structs_9[0, 3] = structs_6;
			structs_9[0, 4] = structs_7;
			structs_9[1, 0] = structs_4;
			structs_9[1, 1] = structs_5;
			structs_9[1, 2] = structs_6;
			structs_9[1, 3] = structs_7;
			structs_9[1, 4] = structs_10;
			lr.log("Event 29: Class1_1.f16(ref structs_9, out outArr_1);");
			struct_testArray_1 = Class1_1.f16(ref structs_9, out outArr_1);

			lr.think_time(9);

			lr.start_transaction("5");
			lr.log("Event 30: Class1_1.f4();");
			Int32RetVal = Class1_1.f4();

			lr.think_time(4);

			lr.log("Event 31: new class_test();");
			class_test_14 = new class_test();

			struct_test Tempstruct_test_1;
			lr.log("Event 32: Class1_1.f10(5D, class_test_14, out Tempstruct_test_1);");
			Class1_1.f10(5D, class_test_14, out Tempstruct_test_1);
			outTest_1 = Tempstruct_test_1;

			structs_11 = new struct_test[2, 5];
			structs_11[0, 0] = struct_testArray_1[0, 0];
			structs_11[0, 1] = struct_testArray_1[0, 1];
			structs_11[0, 2] = struct_testArray_1[1, 0];
			structs_11[0, 3] = struct_testArray_1[1, 1];
			structs_11[0, 4] = struct_testArray_1[1, 2];
			structs_11[1, 0] = struct_testArray_1[0, 1];
			structs_11[1, 1] = struct_testArray_1[1, 0];
			structs_11[1, 2] = struct_testArray_1[1, 1];
			structs_11[1, 3] = struct_testArray_1[1, 2];
			structs_11[1, 4] = struct_testArray_1[1, 3];
			lr.log("Event 33: Class1_1.f16(ref structs_11, out outArr_2);");
			struct_testArray_2 = Class1_1.f16(ref structs_11, out outArr_2);

			lr.think_time(4);
			lr.end_transaction("5", lr.AUTO);

			lr.log("Event 34: Class1_1.f11(5, out outTest_3, \"Hello!\");");
			Class1_1.f11(5, out outTest_3, "Hello!");

			lr.start_transaction("6");
			lr.log("Event 35: new class_test();");
			class_test_15 = new class_test();

			struct_test Tempstruct_test_2;
			lr.log("Event 36: Class1_1.f10(5D, class_test_15, out Tempstruct_test_2);");
			Class1_1.f10(5D, class_test_15, out Tempstruct_test_2);
			outTest_1 = Tempstruct_test_2;

			lr.think_time(4);

			lr.log("Event 37: new class_test();");
			lr.end_transaction("6", lr.AUTO);
			class_test_16 = new class_test();

			lr.start_transaction("7");
			lr.log("Event 38: new class_test();");
			class_test_17 = new class_test();

			lr.end_transaction("7", lr.AUTO);
			lr.log("Event 39: new class_test();");
			class_test_18 = new class_test();

			lr.start_transaction("8");
			lr.log("Event 40: new class_test();");
			class_test_19 = new class_test();

			lr.end_transaction("8", lr.AUTO);
			lr.log("Event 41: new class_test();");
			class_test_20 = new class_test();

			lr.start_transaction("9");
			structs_12 = new class_test[5];
			structs_12[0] = class_test_16;
			structs_12[1] = class_test_17;
			structs_12[2] = class_test_18;
			structs_12[3] = class_test_19;
			structs_12[4] = class_test_20;
			lr.log("Event 42: Class1_1.f13(structs_12);");
			class_testArray_2 = Class1_1.f13(structs_12);

			lr.end_transaction("9", lr.AUTO);
			
			lr.user_data_point("mic_recv", 100);
            lr.user_data_point("HTTP_200", 1);     
            return 0;
        }
    }
}
