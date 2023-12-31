//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsEngine, NSArray, NSString;
@protocol CarShortcutsProviderDelegate, MapsSuggestionsFilter, OS_dispatch_queue;

@interface CarShortcutsProvider : NSObject
{
    MapsSuggestionsEngine *_mapsSuggestionsEngine;	// 8 = 0x8
    id <MapsSuggestionsFilter> _myAdditionalFilter;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_msgQueue;	// 24 = 0x18
    _Bool _sinkAttached;	// 32 = 0x20
    NSArray *_shortcuts;	// 40 = 0x28
    id <CarShortcutsProviderDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000008cdf53
@property(nonatomic) _Bool sinkAttached; // @synthesize sinkAttached=_sinkAttached;
@property(nonatomic) __weak id <CarShortcutsProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *shortcuts; // @synthesize shortcuts=_shortcuts;
- (void)invalidateForMapsSuggestionsManager:(id)arg1;	// IMP=0x00100000008cde4f
@property(readonly, nonatomic) NSString *uniqueName;
- (void)_processTopSuggestions:(id)arg1 error:(id)arg2;	// IMP=0x00100000008cdc5f
- (void)_fetchSuggestions;	// IMP=0x00100000008cdb29
- (void)_createMapsSuggestionEngineWithCallBack:(CDUnknownBlockType)arg1;	// IMP=0x00100000008cda3b
- (void)stop;	// IMP=0x00100000008cd980
- (void)start;	// IMP=0x00100000008cd7cc
- (id)init;	// IMP=0x00100000008cd664

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

