//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, SCRCThread, SCRCThreadKey, VOTElement;
@protocol OS_dispatch_queue, VOTElementFetchDelegateProtocol;

@interface VOTElementFetcher : NSObject
{
    SCRCThread *_fillerThread;	// 8 = 0x8
    SCRCThreadKey *_fillerThreadKey;	// 16 = 0x10
    NSLock *_cacheLock;	// 24 = 0x18
    NSMutableArray *_elementCache;	// 32 = 0x20
    VOTElement *_currentElement;	// 40 = 0x28
    unsigned long long _canceledSearchGeneration;	// 48 = 0x30
    unsigned long long _currentSearchGeneration;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_searchGenerationQueue;	// 64 = 0x40
    unsigned long long _canceledCountGeneration;	// 72 = 0x48
    unsigned long long _currentCountGeneration;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_countGenerationQueue;	// 88 = 0x58
    unsigned long long _cacheSize;	// 96 = 0x60
    long long _cacheBufferEdge;	// 104 = 0x68
    _Bool _retrievingAllElements;	// 112 = 0x70
    _Bool _shouldPerformSearchSynchronously;	// 113 = 0x71
    _Bool _triggerSignpostCollection;	// 114 = 0x72
    id <VOTElementFetchDelegateProtocol> _delegate;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000011c37c
@property(nonatomic) _Bool triggerSignpostCollection; // @synthesize triggerSignpostCollection=_triggerSignpostCollection;
@property(nonatomic) _Bool shouldPerformSearchSynchronously; // @synthesize shouldPerformSearchSynchronously=_shouldPerformSearchSynchronously;
@property(nonatomic) __weak id <VOTElementFetchDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void)fillCacheWithElements:(id)arg1;	// IMP=0x001000000011c212
- (id)_debugElementCache;	// IMP=0x001000000011c1bf
- (void)retrieveElementsWithElement:(id)arg1 groupNavigationStyle:(_Bool)arg2;	// IMP=0x001000000011c0fc
- (void)_retrieveElementsWithElement:(id)arg1 groupNavigationStyle:(id)arg2;	// IMP=0x001000000011b8a0
- (void)_retrieveAllElements;	// IMP=0x001000000011b89a
- (void)_informDelegateOfRetrieveElements;	// IMP=0x001000000011b7d3
- (void)searchForElementInDirection:(long long)arg1 fromElement:(id)arg2 matchBlock:(CDUnknownBlockType)arg3 rangeMatch:(CDUnknownBlockType)arg4 searchType:(long long)arg5 generation:(unsigned long long)arg6 startingRange:(struct _NSRange)arg7 groupNavigationStyle:(_Bool)arg8;	// IMP=0x001000000011b78d
- (void)searchForElementInDirection:(long long)arg1 fromElement:(id)arg2 needsForceCacheUpdate:(_Bool)arg3 matchBlock:(CDUnknownBlockType)arg4 rangeMatch:(CDUnknownBlockType)arg5 searchType:(long long)arg6 generation:(unsigned long long)arg7 startingRange:(struct _NSRange)arg8 groupNavigationStyle:(_Bool)arg9;	// IMP=0x001000000011af11
- (void)countElementsMatchingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000011adb0
- (void)cancelPreviousSearch;	// IMP=0x001000000011ad09
- (void)_searchForElementWithParameters:(id)arg1 searchFromOpaqueElementsInRemoteParent:(_Bool)arg2;	// IMP=0x00100000001184ab
- (void)_searchForElementWithParameters:(id)arg1;	// IMP=0x0010000000118497
- (_Bool)_wasCanceledWithSearchGeneration:(unsigned long long)arg1;	// IMP=0x00100000001183e7
- (id)_hitTestedElementForOriginalElement:(id)arg1 hitTestPoint:(struct CGPoint)arg2 opaqueParent:(id)arg3;	// IMP=0x00100000001182c5
- (id)_handleOpaqueSearchForElementInDirection:(long long)arg1 opaqueParent:(id)arg2 searchType:(long long)arg3 range:(struct _NSRange *)arg4 matchBlock:(CDUnknownBlockType)arg5 resetContentOffsetInOpaqueParent:(_Bool *)arg6;	// IMP=0x0010000000117fbb
- (void)_countElementsMatchingBlock:(CDUnknownBlockType)arg1 generation:(id)arg2;	// IMP=0x0010000000117cc7
- (_Bool)_wasCanceledWithCountGeneration:(unsigned long long)arg1;	// IMP=0x0010000000117c17
- (void)cancelPreviousCount;	// IMP=0x0010000000117bba
- (void)forceUpdate;	// IMP=0x0010000000117b44
- (void)_forceUpdate;	// IMP=0x0010000000117b03
- (void)updateCacheWithElement:(id)arg1;	// IMP=0x0010000000117a89
- (void)_updateCacheWithElement:(id)arg1;	// IMP=0x0010000000116eb6
- (void)_initializeThread;	// IMP=0x0010000000116e33
- (void)dealloc;	// IMP=0x0010000000116d80
- (id)init;	// IMP=0x0010000000116c38

@end

