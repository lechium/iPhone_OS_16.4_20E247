//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLInspectorTextFieldAngleFormatter
{
    _Bool _normalizesAngle;	// 40 = 0x28
}

+ (id)sharedFormatter;	// IMP=0x002000000051543e
@property(nonatomic) _Bool normalizesAngle; // @synthesize normalizesAngle=_normalizesAngle;
- (id)crlaxLocalizedDescriptionFromValue:(id)arg1;	// IMP=0x0010000000515891
- (id)p_clampNumber:(id)arg1 toMinimum:(id)arg2 andMaximum:(id)arg3 wasNumberClamped:(_Bool *)arg4;	// IMP=0x00100000005156fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000051569b
- (id)stringForObjectValue:(id)arg1 originalValue:(id)arg2;	// IMP=0x0010000000515595
- (id)init;	// IMP=0x0010000000515549
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000005154fd
- (void)p_commonInitAngleFormatter;	// IMP=0x0010000000515457

@end
