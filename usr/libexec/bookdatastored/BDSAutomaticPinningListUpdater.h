//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSProgress;

@interface BDSAutomaticPinningListUpdater : NSObject
{
    struct os_unfair_lock_s _stateLock;	// 8 = 0x8
    _Bool _jaliscoUpdateSuccessful;	// 12 = 0xc
    NSProgress *_currentProgress;	// 16 = 0x10
    NSHashTable *_managers;	// 24 = 0x18
    CDUnknownBlockType _observer;	// 32 = 0x20
    unsigned long long _currentObserverIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000003e584
@property(nonatomic) _Bool jaliscoUpdateSuccessful; // @synthesize jaliscoUpdateSuccessful=_jaliscoUpdateSuccessful;
@property(nonatomic) unsigned long long currentObserverIdentifier; // @synthesize currentObserverIdentifier=_currentObserverIdentifier;
@property(copy, nonatomic) CDUnknownBlockType observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSHashTable *managers; // @synthesize managers=_managers;
@property(retain, nonatomic) NSProgress *currentProgress; // @synthesize currentProgress=_currentProgress;
- (void)_l_finishWithError:(id)arg1;	// IMP=0x001000000003e23e
- (void)_l_finishedFetchingCollectionsWithManager:(_Bool)arg1;	// IMP=0x001000000003df99
- (void)_updateAttachmentCompletedFromObserver:(unsigned long long)arg1 attached:(_Bool)arg2;	// IMP=0x001000000003dcf4
- (_Bool)_updateCloudDataWithManager:(id)arg1;	// IMP=0x001000000003d644
- (void)_l_cancelWithManagers:(id)arg1;	// IMP=0x001000000003d19b
- (void)cancelWithManager:(id)arg1;	// IMP=0x001000000003d06d
- (_Bool)startUpdateWithManager:(id)arg1 jaliscoUpdateSuccessful:(_Bool)arg2;	// IMP=0x001000000003cf4e
- (id)init;	// IMP=0x001000000003cee1

@end

