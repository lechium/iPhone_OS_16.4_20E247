//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface COSInternalPairingDashboardModel : NSObject
{
    _Bool _tinker;	// 8 = 0x8
    NSMutableDictionary *_eventGuide;	// 16 = 0x10
    NSArray *_eventNames;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000d73fc
@property(nonatomic) _Bool tinker; // @synthesize tinker=_tinker;
@property(retain, nonatomic) NSArray *eventNames; // @synthesize eventNames=_eventNames;
@property(retain, nonatomic) NSMutableDictionary *eventGuide; // @synthesize eventGuide=_eventGuide;
- (id)eventSummaryForKey:(id)arg1;	// IMP=0x00100000000d7331
- (id)changedIndicesForGenericPairingEvent:(id)arg1 andValue:(id)arg2;	// IMP=0x00100000000d6fed
- (id)changedIndicesForPairingBegins:(id)arg1 andValue:(id)arg2;	// IMP=0x00100000000d6e7d
- (id)changedIndicesForPushedController:(id)arg1 andValue:(id)arg2;	// IMP=0x00100000000d6b91
- (void)_checkIfTinker;	// IMP=0x00100000000d6af6
- (id)updateEvent:(id)arg1;	// IMP=0x00100000000d67e2
- (id)pairingEvents;	// IMP=0x00100000000d65eb
- (id)_tinkerPairingEventList;	// IMP=0x00100000000d650b
- (id)_classicPairingEventList;	// IMP=0x00100000000d6441
- (void)populateEventGuide;	// IMP=0x00100000000d61ad
- (id)init;	// IMP=0x00100000000d612d

@end

