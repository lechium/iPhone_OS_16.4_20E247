//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockGeminiLogger : NSObject
{
}

- (void)fetchBestResultForInteraction:(id)arg1 error:(id)arg2;	// IMP=0x000000000010ca0c
- (void)fetchedBestResult:(id)arg1 forInteraction:(id)arg2;	// IMP=0x000000000010ca06
- (void)fetchedSortedResults:(id)arg1 forInteraction:(id)arg2;	// IMP=0x000000000010ca00
- (void)fetchSortedResultsForInteraction:(id)arg1 error:(id)arg2;	// IMP=0x000000000010c9fa
- (void)updateSubscriptionInfoError:(id)arg1;	// IMP=0x000000000010c9f4
- (void)updatedSubscriptionInfo:(id)arg1;	// IMP=0x000000000010c9ee
- (void)unregisteredForContextUpdatesWithToken:(id)arg1;	// IMP=0x000000000010c9e8
- (void)registeredForContextUpdatesWithToken:(id)arg1;	// IMP=0x000000000010c9e2
- (void)recordInteractionError:(id)arg1;	// IMP=0x000000000010c9dc
- (void)recordedInteraction:(id)arg1 forContext:(id)arg2;	// IMP=0x000000000010c9d6
- (void)fetchingBestResultForDestinationHandle:(CDUnknownBlockType)arg1;	// IMP=0x000000000010c9bb
- (void)updatingSubscriptionInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000000010c9a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

