//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>

@class NSString;

@interface NavdBaseNavigationSessionTrigger : MapsSuggestionsBaseTrigger
{
}

- (void)didNavigationStateChange;	// IMP=0x00200000000158fd
- (_Bool)isTrue;	// IMP=0x00100000000158e7
- (void)didRemoveLastObserver;	// IMP=0x0010000000015880
- (void)didAddFirstObserver;	// IMP=0x0010000000015819
- (id)objectForJSON;	// IMP=0x00100000000157ff
- (id)initWithName:(id)arg1;	// IMP=0x00100000000157d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

