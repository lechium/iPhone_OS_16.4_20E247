//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RMActivationEngine, RMStatusEngine;

@interface RMStoreClient : NSObject
{
    NSString *_storeIdentifier;	// 8 = 0x8
    RMActivationEngine *_activationEngine;	// 16 = 0x10
    RMStatusEngine *_statusEngine;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000007e1ab
@property(retain, nonatomic) RMStatusEngine *statusEngine; // @synthesize statusEngine=_statusEngine;
@property(retain, nonatomic) RMActivationEngine *activationEngine; // @synthesize activationEngine=_activationEngine;
@property(readonly, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
- (void)_sendStatusData:(id)arg1;	// IMP=0x001000000007e0c6
- (void)_sendStatusOnlyIfNeeded:(_Bool)arg1;	// IMP=0x001000000007df4e
- (void)statusEngineHasUnacknowledgedSubscription:(id)arg1;	// IMP=0x001000000007dee7
- (void)syncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007ddaa
- (void)remove;	// IMP=0x001000000007dda4
- (void)create;	// IMP=0x001000000007dc48
- (void)start;	// IMP=0x001000000007db14
- (id)initWithActivationEngine:(id)arg1 statusEngine:(id)arg2 storeIdentifier:(id)arg3;	// IMP=0x001000000007da5d
- (id)initWithManagementSourceObjectID:(id)arg1 storeIdentifier:(id)arg2 statusQuerier:(id)arg3 persistentContainer:(id)arg4;	// IMP=0x001000000007d849

@end
