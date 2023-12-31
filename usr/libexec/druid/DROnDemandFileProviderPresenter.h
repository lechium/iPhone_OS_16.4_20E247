//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSSet, NSString, NSURL, PBSecurityScopedURLWrapper;

@interface DROnDemandFileProviderPresenter : NSObject
{
    PBSecurityScopedURLWrapper *_sourceURLWrapper;	// 8 = 0x8
    _Bool _operationQueue_valid;	// 16 = 0x10
    _Bool _shouldEvictWhenDone;	// 17 = 0x11
    _Bool _operationQueue_hasObservedEvent;	// 18 = 0x12
    NSURL *_folderURL;	// 24 = 0x18
    NSURL *_fileURL;	// 32 = 0x20
}

+ (id)presenterPresentingURLWrapper:(id)arg1 type:(id)arg2 outURLWrapper:(id *)arg3;	// IMP=0x0020000000009dfa
+ (double)presenterValiditySeconds;	// IMP=0x0010000000009573
+ (void)setPresenterValiditySeconds:(double)arg1;	// IMP=0x0010000000009565
- (void).cxx_destruct;	// IMP=0x002000000000a829
@property(readonly, nonatomic) _Bool operationQueue_hasObservedEvent; // @synthesize operationQueue_hasObservedEvent=_operationQueue_hasObservedEvent;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSURL *folderURL; // @synthesize folderURL=_folderURL;
@property(nonatomic) _Bool shouldEvictWhenDone; // @synthesize shouldEvictWhenDone=_shouldEvictWhenDone;
- (void)relinquishPresentedItemToReader:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009f08
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (void)_operationQueue_invalidate;	// IMP=0x0010000000009c81
- (void)beginPresenting;	// IMP=0x001000000000993b
- (id)initWithURLWrapper:(id)arg1 type:(id)arg2;	// IMP=0x0010000000009581

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

