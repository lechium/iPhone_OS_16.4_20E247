//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKFriendSuggesterSettings, NSString;

@interface GKAppendSuggestionsModifier : NSObject
{
    GKFriendSuggesterSettings *_settings;	// 8 = 0x8
    CDUnknownBlockType _suggestionsProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002465e1
@property(copy, nonatomic) CDUnknownBlockType suggestionsProvider; // @synthesize suggestionsProvider=_suggestionsProvider;
@property(retain, nonatomic) GKFriendSuggesterSettings *settings; // @synthesize settings=_settings;
- (id)modifySuggestions:(id)arg1;	// IMP=0x0010000000246275
- (id)initWithSettings:(id)arg1 suggestionsProvider:(CDUnknownBlockType)arg2;	// IMP=0x00100000002461d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
