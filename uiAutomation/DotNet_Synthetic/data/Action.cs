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

			lr.log("Event 1: new Class1();");
			Class1_1 = new Class1();

			lr.log("Event 2: Class1_1.f1(5);");
			Class1_1.f1(5);

			lr.log("Event 3: Class1_1.f2();");
			Class1_1.f2();

			lr.log("Event 4: Class1_1.f3();");
			StringRetVal = Class1_1.f3();

			lr.log("Event 5: Class1_1.f4();");
			Int32RetVal = Class1_1.f4();

			lr.log("Event 6: ((Int32)(Class1_1.f5()));");
			Int32RetVal = ((Int32)(Class1_1.f5()));

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

			lr.log("Event 11: Class1_1.f9(ref class_test_1);");
			class_test_2 = Class1_1.f9(ref class_test_1);

			lr.log("Event 12: new class_test();");
			class_test_3 = new class_test();

			lr.log("Event 13: Class1_1.f10(5D, class_test_3, out outTest_1);");
			Class1_1.f10(5D, class_test_3, out outTest_1);

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

			lr.log("Event 23: new class_test();");
			class_test_9 = new class_test();

			lr.log("Event 24: new class_test();");
			class_test_10 = new class_test();

			lr.log("Event 25: new class_test();");
			class_test_11 = new class_test();

			lr.log("Event 26: new class_test();");
			class_test_12 = new class_test();

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

            return 0;
        }
    }
}
