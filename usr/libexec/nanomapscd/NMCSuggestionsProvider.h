//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsRemoteSource, NSLock, NSMutableDictionary, NSString;
@protocol MapsSuggestionsFullResourceDepot, NMCSuggestionsProviderDelegate;

@interface NMCSuggestionsProvider : NSObject
{
    id <MapsSuggestionsFullResourceDepot> _resourceDepot;	// 8 = 0x8
    MapsSuggestionsRemoteSource *_connectionToDestinationd;	// 16 = 0x10
    NSMutableDictionary *_storage;	// 24 = 0x18
    unsigned long long _changeCount;	// 32 = 0x20
    NSLock *_lock;	// 40 = 0x28
    _Bool _hasOngoingRequest;	// 48 = 0x30
    id <NMCSuggestionsProviderDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000003972f
@property(nonatomic) __weak id <NMCSuggestionsProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hintRefreshOfType:(long long)arg1;	// IMP=0x0010000000039702
- (_Bool)detachSource:(id)arg1;	// IMP=0x00100000000396fa
- (_Bool)attachSource:(id)arg1;	// IMP=0x00100000000396f2
- (unsigned long long)addOrUpdateSuggestionEntries:(id)arg1 source:(id)arg2;	// IMP=0x00100000000394c1
- (unsigned long long)_replaceEntriesFromSource:(id)arg1 withEntries:(id)arg2;	// IMP=0x0010000000038ebf
- (unsigned long long)_mergeInEntries:(id)arg1 fromSource:(id)arg2;	// IMP=0x0010000000038970
- (id)_entriesForSource:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x00100000000387f7
- (_Bool)_isEntry:(id)arg1 probablyEqualToNewEntry:(id)arg2;	// IMP=0x0010000000038471
- (void)_notifyDelegateOfChangesFinishingRequest:(_Bool)arg1;	// IMP=0x001000000003808b
- (void)_notifyDelegateOfChanges;	// IMP=0x0010000000038074
- (void)cleanup;	// IMP=0x001000000003800b
- (void)requestBlob;	// IMP=0x0010000000037eff
- (void)_disconnectFromDestinationd;	// IMP=0x0010000000037d1f
- (void)_connectToDestinationd;	// IMP=0x0010000000037b56
- (void)dealloc;	// IMP=0x00100000000379f5
- (id)initWithDelegate:(id)arg1 resourceDepot:(id)arg2;	// IMP=0x00100000000378ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

