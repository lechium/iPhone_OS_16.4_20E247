//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDUserActivity, NSMutableDictionary, NSMutableOrderedSet, NSString, UABestAppSuggestion, UABestAppSuggestionManager;
@protocol CSDUserActivityCommunicatorDelegate, OS_dispatch_queue;

@interface CSDUserActivityCommunicator : NSObject
{
    id <CSDUserActivityCommunicatorDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableOrderedSet *_activityQueue;	// 24 = 0x18
    CSDUserActivity *_currentlyBroadcastedActivity;	// 32 = 0x20
    UABestAppSuggestionManager *_bestAppSuggestionManager;	// 40 = 0x28
    UABestAppSuggestion *_mostRecentBestAppSuggestion;	// 48 = 0x30
    NSMutableDictionary *_listeningIdentifiersByActivityType;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000014987d
- (void)setListeningIdentifiersByActivityType:(id)arg1;	// IMP=0x001000000014986c
- (id)listeningIdentifiersByActivityType;	// IMP=0x0010000000149862
@property(retain, nonatomic) UABestAppSuggestion *mostRecentBestAppSuggestion; // @synthesize mostRecentBestAppSuggestion=_mostRecentBestAppSuggestion;
@property(retain, nonatomic) UABestAppSuggestionManager *bestAppSuggestionManager; // @synthesize bestAppSuggestionManager=_bestAppSuggestionManager;
@property(retain, nonatomic) CSDUserActivity *currentlyBroadcastedActivity; // @synthesize currentlyBroadcastedActivity=_currentlyBroadcastedActivity;
@property(retain, nonatomic) NSMutableOrderedSet *activityQueue; // @synthesize activityQueue=_activityQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSDUserActivityCommunicatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)bestAppSuggestionChanged:(id)arg1;	// IMP=0x00100000001491c0
- (id)_untrackListenedActivityType:(unsigned int)arg1 matchingDynamicIdentifierSubstring:(id)arg2;	// IMP=0x0010000000148d22
- (void)_untrackListenedActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x0010000000148abe
- (void)_trackListenedActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x00100000001488e5
- (void)_stopListeningForBestAppSuggestionIfAppropriate;	// IMP=0x00100000001485f2
- (void)_stopListeningForActivityType:(unsigned int)arg1 matchingDynamicIdentifierSubstring:(id)arg2;	// IMP=0x00100000001482d8
- (void)_stopListeningForActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x0010000000148167
- (void)_listenForActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x0010000000147f2d
- (void)_stopBroadcastingActivity:(id)arg1;	// IMP=0x0010000000147de4
- (void)_broadcastActivity:(id)arg1 withTimeout:(double)arg2 shouldPrioritize:(_Bool)arg3;	// IMP=0x0010000000147b5b
- (void)_updateCurrentlyBroadcastedActivity;	// IMP=0x00100000001479c7
- (void)stopListeningForActivityType:(unsigned int)arg1 matchingDynamicIdentifierSubstring:(id)arg2;	// IMP=0x00100000001478ef
- (void)stopListeningForActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x0010000000147817
- (void)listenForActivityType:(unsigned int)arg1 dynamicIdentifier:(id)arg2;	// IMP=0x001000000014773f
- (void)stopBroadcastingActivity:(id)arg1;	// IMP=0x0010000000147671
- (void)broadcastActivity:(id)arg1 withTimeout:(double)arg2 shouldPrioritize:(_Bool)arg3;	// IMP=0x0010000000147585
- (void)broadcastActivity:(id)arg1 withTimeout:(double)arg2;	// IMP=0x0010000000147571
- (void)broadcastActivity:(id)arg1;	// IMP=0x0010000000147557
- (id)queuedActivitiesOfType:(unsigned int)arg1;	// IMP=0x0010000000147208
- (id)init;	// IMP=0x0010000000146f96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

