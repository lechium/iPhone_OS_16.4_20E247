//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;
@protocol INIntentResponseObserver;

__attribute__((visibility("hidden")))
@interface INExtensionContextIntentResponseObserver : NSObject
{
    id <INIntentResponseObserver> _remoteObserver;	// 8 = 0x8
    NSMapTable *_remoteObservers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000035626b
@property(readonly, nonatomic) NSMapTable *remoteObservers; // @synthesize remoteObservers=_remoteObservers;
- (void)_intentResponseDidUpdate:(id)arg1;	// IMP=0x0000000000355f8b
- (void)getRideStatusResponseDidUpdate:(id)arg1;	// IMP=0x0000000000355f79
- (void)getCarPowerLevelStatusResponseDidUpdate:(id)arg1;	// IMP=0x0000000000355f67
- (void)setObserver:(id)arg1 forConnection:(id)arg2;	// IMP=0x0000000000355ec5
- (id)init;	// IMP=0x0000000000355e5f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
