//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKSecureElementPass.h>

@class NSSet;

@interface PKSecureElementPass (NanoPassKit)
- (unsigned long long)npkLinkedAccountFeatureIdentifier;	// IMP=0x00300000000271d7
- (_Bool)npkProvidesLinkedAccountFeatureIdentifier;	// IMP=0x00300000000271be
- (_Bool)npkSupportUWBSecureRanging;	// IMP=0x003000000002713e
@property(readonly, nonatomic) NSSet *npkSubcredentials;
- (_Bool)npkExclusivelyTransactsOverNFC;	// IMP=0x0030000000027082
- (_Bool)npkExclusivelyTransactsOverBluetooth;	// IMP=0x0030000000027016
- (_Bool)npkSupportsNFC;	// IMP=0x0030000000026faa
- (_Bool)npkSupportsBluetooth;	// IMP=0x0030000000026f3e
@end
