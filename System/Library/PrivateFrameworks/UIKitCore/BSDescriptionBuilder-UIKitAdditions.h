//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSDescriptionBuilder.h>

@interface BSDescriptionBuilder (UIKitAdditions)
- (id)ui_appendReferenceDisplayModeStatus:(long long)arg1 withName:(id)arg2 skipIfNotSupported:(_Bool)arg3;	// IMP=0x007000000073ac24
- (id)ui_appendReferenceDisplayModeStatus:(long long)arg1 withName:(id)arg2;	// IMP=0x007000000073ac0f
- (id)ui_appendUserInterfaceIdiom:(long long)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x007000000073ab44
- (id)ui_appendUserInterfaceIdiom:(long long)arg1 withName:(id)arg2;	// IMP=0x007000000073ab2f
- (id)ui_appendInterfaceOrientationMask:(unsigned long long)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x007000000073aa65
- (id)ui_appendInterfaceOrientationMask:(unsigned long long)arg1 withName:(id)arg2;	// IMP=0x007000000073aa50
- (id)ui_appendInterfaceOrientation:(long long)arg1 withName:(id)arg2 skipIfUnknown:(_Bool)arg3;	// IMP=0x007000000073a986
- (id)ui_appendInterfaceOrientation:(long long)arg1 withName:(id)arg2;	// IMP=0x007000000073a971
- (id)ui_appendTransform:(struct CGAffineTransform)arg1 withName:(id)arg2 skipIfIdentity:(_Bool)arg3;	// IMP=0x007000000073a7f9
- (id)ui_appendTransform:(struct CGAffineTransform)arg1 withName:(id)arg2;	// IMP=0x007000000073a7e5
- (id)ui_appendRect:(struct CGRect)arg1 withName:(id)arg2 ifNotEqualTo:(struct CGRect)arg3;	// IMP=0x007000000073a75b
- (id)ui_appendFloat:(double)arg1 withName:(id)arg2 ifNotEqualTo:(double)arg3;	// IMP=0x007000000073a728
- (id)ui_appendInteger:(long long)arg1 withName:(id)arg2 ifNotEqualTo:(long long)arg3;	// IMP=0x007000000073a6f8
- (id)ui_appendCornerRadii:(struct UIRectCornerRadii)arg1 withName:(id)arg2;	// IMP=0x007000000073a680
- (id)ui_appendEdgeInsets:(struct UIEdgeInsets)arg1 withName:(id)arg2;	// IMP=0x007000000073a608
- (id)ui_appendFloat:(double)arg1 withName:(id)arg2;	// IMP=0x007000000073a58d
- (id)ui_appendSet:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x007000000073a502
- (id)ui_appendArray:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x007000000073a477
- (id)ui_appendObject:(id)arg1 withName:(id)arg2 usingLightweightDescription:(_Bool)arg3;	// IMP=0x007000000073a2e3
- (void)ui_appendOrientationDebuggingArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(_Bool)arg3;	// IMP=0x0070000000fa1bfe
- (void)ui_appendOrientationDebugDescription:(id)arg1 withName:(id)arg2 skipIfNil:(_Bool)arg3;	// IMP=0x0070000000fa1a7f
- (void)ui_appendOrientationDebugDescription:(id)arg1 withName:(id)arg2;	// IMP=0x0070000000fa1a6a
@end
