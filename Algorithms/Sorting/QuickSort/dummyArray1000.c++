int n = 499, A[1000] = {637,
335,
875,
520,
412,
221,
528,
732,
69,
232,
601,
597,
993,
750,
526,
669,
30,
622,
310,
551,
981,
163,
28,
284,
293,
804,
538,
805,
891,
14,
648,
859,
308,
33,
200,
794,
347,
659,
840,
87,
325,
837,
182,
50,
784,
328,
760,
117,
604,
833,
713,
688,
121,
524,
13,
745,
780,
326,
690,
725,
458,
410,
466,
244,
1000,
666,
5,
704,
680,
498,
761,
47,
782,
234,
306,
618,
850,
423,
655,
121,
348,
226,
888,
552,
287,
539,
854,
450,
974,
206,
945,
777,
738,
5,
0,
244,
124,
922,
164,
981,
861,
303,
374,
184,
603,
399,
306,
976,
809,
555,
12,
491,
742,
314,
439,
739,
555,
81,
794,
929,
434,
773,
900,
104,
784,
157,
194,
786,
813,
935,
211,
268,
377,
978,
73,
548,
899,
268,
81,
852,
494,
136,
579,
977,
804,
301,
934,
279,
569,
515,
60,
375,
978,
889,
187,
546,
953,
677,
234,
701,
703,
707,
24,
650,
769,
727,
120,
572,
56,
556,
274,
262,
132,
399,
621,
607,
509,
602,
755,
425,
228,
582,
471,
172,
678,
523,
790,
501,
828,
257,
926,
410,
603,
359,
512,
573,
877,
25,
21,
624,
63,
159,
616,
471,
770,
798,
862,
761,
246,
882,
418,
151,
676,
372,
710,
456,
356,
749,
894,
361,
246,
254,
594,
571,
246,
612,
20,
680,
766,
730,
357,
368,
527,
782,
984,
416,
194,
741,
269,
337,
438,
646,
95,
183,
216,
773,
54,
70,
545,
900,
193,
995,
655,
946,
263,
141,
969,
980,
915,
573,
906,
805,
620,
542,
261,
19,
6,
360,
144,
388,
250,
906,
860,
27,
18,
444,
662,
217,
605,
252,
906,
314,
903,
371,
151,
521,
669,
615,
362,
572,
901,
301,
97,
125,
296,
528,
244,
129,
835,
124,
613,
561,
120,
919,
664,
474,
651,
185,
236,
930,
460,
492,
906,
382,
940,
571,
390,
406,
994,
856,
863,
343,
937,
662,
21,
57,
819,
734,
169,
893,
489,
522,
83,
214,
493,
221,
696,
673,
862,
949,
570,
880,
573,
637,
393,
632,
554,
793,
605,
764,
429,
649,
163,
345,
392,
339,
256,
188,
858,
956,
809,
538,
52,
14,
492,
26,
509,
129,
9,
560,
813,
776,
687,
26,
225,
882,
328,
288,
612,
740,
943,
962,
850,
444,
46,
513,
465,
2,
486,
533,
146,
391,
131,
404,
527,
669,
558,
869,
826,
857,
44,
561,
293,
839,
734,
255,
846,
701,
741,
757,
314,
864,
49,
369,
666,
751,
405,
963,
957,
576,
363,
503,
167,
344,
794,
250,
120,
867,
347,
294,
202,
521,
901,
790,
542,
605,
111,
177,
101,
44,
431,
26,
621,
795,
713,
303,
651,
20,
815,
621,
895,
794,
704,
910,
978,
395,
57,
383,
741,
470,
900,
736,
279,
507,
448,
659,
272,
212,
456,
348,
616,
933,
483,
843,
909,
336,
90,
404,
625,
132,
549,
267,
403,
481,
743,
174,
59,
561,
495,
639,
611,
610,
886,
172,
299,
647,
933,
379,
537,
451,
836,
185,
349,
210,
298,
908,
610,
310,
827,
976,
286,
987,
705,
25,
336,
688,
615,
108,
693,
245,
798,
586,
41,
147,
750,
300,
566,
267,
996,
653,
754,
328,
975,
967,
453,
134,
452,
154,
416,
231,
998,
255,
448,
495,
848,
74,
766,
48,
945,
95,
921,
740,
112,
953,
744,
374,
674,
854,
262,
853,
782,
419,
543,
25,
907,
362,
155,
436,
582,
688,
297,
201,
36,
468,
772,
580,
68,
663,
353,
0,
743,
378,
72,
35,
683,
129,
381,
628,
198,
437,
268,
543,
368,
83,
838,
320,
604,
932,
829,
844,
491,
163,
944,
50,
238,
759,
440,
996,
25,
763,
491,
813,
193,
534,
905,
258,
522,
598,
830,
753,
654,
84,
676,
240,
168,
813,
206,
188,
967,
224,
386,
938,
242,
228,
746,
403,
80,
903,
930,
711,
911,
343,
507,
16,
71,
400,
809,
506,
496,
173,
890,
288,
285,
556,
374,
872,
711,
595,
564,
685,
466,
996,
675,
362,
961,
941,
333,
683,
473,
476,
233,
668,
16,
40,
446,
270,
111,
622,
117,
64,
244,
734,
454,
309,
850,
420,
934,
116,
331,
64,
135,
930,
603,
832,
379,
609,
537,
286,
510,
805,
951,
603,
795,
793,
361,
881,
898,
122,
880,
761,
793,
731,
443,
157,
932,
172,
423,
772,
25,
594,
691,
488,
48,
959,
920,
529,
886,
216,
258,
731,
790,
705,
597,
838,
301,
562,
886,
852,
657,
775,
402,
187,
29,
229,
936,
90,
610,
499,
540,
4,
765,
179,
918,
822,
881,
247,
258,
352,
576,
712,
659,
474,
361,
317,
523,
1000,
479,
181,
44,
896,
9,
977,
801,
667,
871,
492,
744,
257,
93,
639,
728,
582,
971,
68,
366,
938,
296,
262,
480,
563,
767,
997,
445,
711,
199,
135,
251,
27,
148,
641,
494,
826,
850,
566,
224,
193,
438,
824,
723,
895,
253,
822,
845,
552,
582,
854,
757,
528,
455,
48,
569,
269,
400,
209,
997,
622,
838,
486,
615,
569,
230,
874,
6,
294,
743,
460,
848,
759,
676,
837,
409,
302,
90,
663,
268,
536,
426,
59,
203,
154,
222,
185,
598,
782,
414,
583,
106,
614,
207,
314,
827,
807,
616,
748,
133,
814,
184,
325,
161,
580,
344,
251,
988,
499,
557,
599,
770,
358,
776,
209,
122,
17,
657,
645,
880,
87,
452,
293,
934,
36,
907,
130,
520,
825,
317,
189,
568,
585,
95,
915,
245,
980,
81,
547,
829,
611,
41,
256,
525,
171,
49,
974,
317,
148,
444,
972,
240,
2,
777,
418,
382,
294,
569,
693,
35,
717,
40,
344,
370,
573,
952,
419,
14,
564,
563,
591,
965,
885,
584,
978,
287,
632,
465,
213,
949,
612,
517,
999,
710,
595,
926,
314,
617,
751,
90,
95,
911,
43,
1000,
412,
16,
813,
606,
499,
888,
999,
419,
242,
762,
727,
618,
130,
861,
608,
371,
453,
188,
813,
871,
349,
679,
940,
903,
311,
776,
49,
566,
636,
531,
78,
787,
431,
625,
884,
17,
335,
687,
960,
367,
677,
};