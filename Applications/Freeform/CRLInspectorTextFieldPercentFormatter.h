//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLInspectorTextFieldPercentFormatter
{
}

+ (id)sharedFormatter;	// IMP=0x00200000005141ce
- (id)crlaxLocalizedDescriptionFromValue:(id)arg1;	// IMP=0x00400000005146b3
- (id)stringForObjectValue:(id)arg1;	// IMP=0x0010000000514580
- (id)p_clampNumber:(id)arg1 toMinimum:(id)arg2 andMaximum:(id)arg3 wasNumberClamped:(_Bool *)arg4;	// IMP=0x0010000000514497
- (id)p_numberScaledWithMultiplerForNumber:(id)arg1;	// IMP=0x00100000005143ac
- (id)p_numberUnscaledWithMultiplerForNumber:(id)arg1;	// IMP=0x00100000005142b9
- (id)init;	// IMP=0x001000000051426d
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000514221
- (void)p_commonInitPercentFormatter;	// IMP=0x00100000005141e7

@end

