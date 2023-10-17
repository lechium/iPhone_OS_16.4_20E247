//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilitySharedSupport/AXSSKeyChord.h>

@class AXAttributedString;

@interface AXSSKeyChord (Speaking)
+ (id)keyChordWithEvent:(id)arg1;	// IMP=0x00200000000b4250
@property(readonly, nonatomic) AXAttributedString *fkaSpeakableDisplayValue;
- (id)_accessibilitySpeakableDisplayValueWithStyle:(long long)arg1 isUSKeyboard:(_Bool)arg2;	// IMP=0x0010000000012c70
- (id)accessibilitySpeakableDisplayValueWithStyle:(long long)arg1;	// IMP=0x0010000000012b60
@property(readonly, nonatomic) AXAttributedString *accessibilitySpeakableDisplayValue;
- (id)keyChordByUpdatingModifiersFromEvent:(id)arg1;	// IMP=0x00100000000b4750
@end
