//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLTickedSliderAccessibility
{
}

+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x00200000002a08fa
+ (id)crlaxTargetClassName;	// IMP=0x00100000002a08ed
+ (id)crlaxCastFrom:(id)arg1;	// IMP=0x00100000002a0914
@property(readonly, nonatomic) unsigned long long _crlaxTickCount;
@property(readonly, nonatomic) unsigned long long _crlaxCurrentTickIndex;
- (void)accessibilityDecrement;	// IMP=0x00100000002a0b37
- (void)accessibilityIncrement;	// IMP=0x00100000002a0a5a
- (id)accessibilityValue;	// IMP=0x00100000002a0965
- (id)crlaxTarget;	// IMP=0x00100000002a090b

@end
