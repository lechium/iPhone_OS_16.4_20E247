//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, REObserverStore;

@interface REDActionTrainingNotifier : NSObject
{
    REObserverStore *_observers;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x002000000000a4aa
- (void).cxx_destruct;	// IMP=0x002000000000a85e
- (void)donationActionStoreDidFinishLoadingData;	// IMP=0x001000000000a816
- (void)donationActionStoreWillBeginLoadingData;	// IMP=0x001000000000a805
- (void)donationActionStoreReceivedDonation:(id)arg1 isNewDonation:(_Bool)arg2;	// IMP=0x001000000000a758
- (void)removeObserver:(id)arg1;	// IMP=0x001000000000a742
- (void)addObserver:(id)arg1;	// IMP=0x001000000000a72c
- (void)dealloc;	// IMP=0x001000000000a6b6
- (id)init;	// IMP=0x001000000000a4ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
