//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (AXConstraintBasedLayout)
- (void)ax_setContentHuggingAndCompressionResistance:(CDStruct_818bb265)arg1;	// IMP=0x0060000000024670
- (id)ax_pinConstraintsInAllDimensionsToView:(id)arg1;	// IMP=0x0060000000024470
- (id)ax_firstCommonAncestorWithView:(id)arg1;	// IMP=0x0060000000024230
- (unsigned long long)_ax_depth;	// IMP=0x0060000000024190
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6 priority:(float)arg7;	// IMP=0x0060000000023fe0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;	// IMP=0x0060000000023f20
- (void)ax_constrainLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6 priority:(float)arg7;	// IMP=0x0060000000023e60
- (void)ax_constrainLayoutAttribute:(long long)arg1 relatedBy:(long long)arg2 toItem:(id)arg3 attribute:(long long)arg4 multiplier:(double)arg5 constant:(double)arg6;	// IMP=0x0060000000023db0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x0060000000023cf0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x0060000000023c50
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x0060000000023ba0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x0060000000023b00
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2;	// IMP=0x0060000000023a80
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000023a20
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2;	// IMP=0x00600000000239d0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x0060000000023930
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x00600000000238b0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x0060000000023820
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x00600000000237a0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToValueOfView:(id)arg2;	// IMP=0x0060000000023730
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x00600000000236e0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asGreaterThanOrEqualToConstant:(double)arg2;	// IMP=0x0060000000023690
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x00600000000235d0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x0060000000023520
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x0060000000023460
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x00600000000233c0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2;	// IMP=0x0060000000023340
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x00600000000232e0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2;	// IMP=0x0060000000023290
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x00600000000231f0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x0060000000023170
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x00600000000230e0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x0060000000023060
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToValueOfView:(id)arg2;	// IMP=0x0060000000022ff0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000022fa0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asLessThanOrEqualToConstant:(double)arg2;	// IMP=0x0060000000022f50
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x0060000000022e90
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x0060000000022de0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3;	// IMP=0x0060000000022d50
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x0060000000022ca0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x0060000000022c10
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 priority:(float)arg3;	// IMP=0x0060000000022b80
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2;	// IMP=0x0060000000022b00
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000022aa0
- (id)ax_addedConstraintForLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;	// IMP=0x0060000000022a50
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4 priority:(float)arg5;	// IMP=0x00600000000229b0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3 withOffset:(double)arg4;	// IMP=0x0060000000022930
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToLayoutAttribute:(long long)arg2 ofView:(id)arg3;	// IMP=0x00600000000228c0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3 priority:(float)arg4;	// IMP=0x0060000000022830
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 withOffset:(double)arg3;	// IMP=0x00600000000227b0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2 priority:(float)arg3;	// IMP=0x0060000000022730
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToValueOfView:(id)arg2;	// IMP=0x00600000000226c0
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2 priority:(float)arg3;	// IMP=0x0060000000022670
- (void)ax_constrainLayoutAttribute:(long long)arg1 asEqualToConstant:(double)arg2;	// IMP=0x0060000000022620
@end

