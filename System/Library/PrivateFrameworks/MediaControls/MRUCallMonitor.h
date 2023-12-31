//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXCallObserver, NSHashTable, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRUCallMonitor : NSObject
{
    _Bool _onCall;	// 8 = 0x8
    CXCallObserver *_callObserver;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
}

+ (id)sharedMonitor;	// IMP=0x00100000000cf763
- (void).cxx_destruct;	// IMP=0x00000000000cfcd4
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CXCallObserver *callObserver; // @synthesize callObserver=_callObserver;
@property(readonly, nonatomic, getter=isOnCall) _Bool onCall; // @synthesize onCall=_onCall;
- (void)updateOnCall;	// IMP=0x00000000000cfbf9
- (void)callObserver:(id)arg1 callChanged:(id)arg2;	// IMP=0x00000000000cfbe7
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000cfbd1
- (void)addObserver:(id)arg1;	// IMP=0x00000000000cfbbb
- (void)setOnCall:(_Bool)arg1;	// IMP=0x00000000000cf9e3
- (_Bool)isCallActive;	// IMP=0x00000000000cf8a6
- (id)init;	// IMP=0x00000000000cf7b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

