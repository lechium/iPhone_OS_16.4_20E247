//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface MIFreeProfileValidatedAppTracker : NSObject
{
    NSMutableSet *_refs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_q;	// 16 = 0x10
}

+ (id)sharedTracker;	// IMP=0x004000000004608b
- (void).cxx_destruct;	// IMP=0x00200000000473bb
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *q; // @synthesize q=_q;
@property(retain, nonatomic) NSMutableSet *refs; // @synthesize refs=_refs;
- (_Bool)removeReferenceForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000047187
- (_Bool)_onQueue_removeReferenceForBundle:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000046dd6
- (_Bool)addReferenceForApplicationIdentifier:(id)arg1 bundle:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000046b90
- (_Bool)_onQueue_addReferenceForApplicationIdentifier:(id)arg1 bundle:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000467fb
- (_Bool)_onQueue_discoverReferencesWithError:(id *)arg1;	// IMP=0x0000000000046676
- (_Bool)_onQueue_addAppIdentifierIfCachedOnContainer:(struct container_object_s *)arg1 error:(id *)arg2;	// IMP=0x0010000000046278
- (void)invalidateCache;	// IMP=0x00100000000461ef
- (id)init;	// IMP=0x0010000000046118

@end

