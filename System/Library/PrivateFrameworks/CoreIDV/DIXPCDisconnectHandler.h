//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface DIXPCDisconnectHandler : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _isDisconnected;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    NSMutableDictionary *_disconnectCallbacks;	// 24 = 0x18
    NSMutableDictionary *_disconnectResultCallbacks;	// 32 = 0x20
    NSMutableDictionary *_disconnectOptionCallbacks;	// 40 = 0x28
    NSString *_disconnectErrorDomain;	// 48 = 0x30
    long long _disconnectErrorCode;	// 56 = 0x38
    NSObject<OS_os_log> *_logger;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000024f8
@property(readonly) NSObject<OS_os_log> *logger; // @synthesize logger=_logger;
@property long long disconnectErrorCode; // @synthesize disconnectErrorCode=_disconnectErrorCode;
@property(retain) NSString *disconnectErrorDomain; // @synthesize disconnectErrorDomain=_disconnectErrorDomain;
@property(retain) NSMutableDictionary *disconnectOptionCallbacks; // @synthesize disconnectOptionCallbacks=_disconnectOptionCallbacks;
@property(retain) NSMutableDictionary *disconnectResultCallbacks; // @synthesize disconnectResultCallbacks=_disconnectResultCallbacks;
@property(retain) NSMutableDictionary *disconnectCallbacks; // @synthesize disconnectCallbacks=_disconnectCallbacks;
@property(retain) NSString *name; // @synthesize name=_name;
@property _Bool isDisconnected; // @synthesize isDisconnected=_isDisconnected;
- (id)randomCallbackIdentifier;	// IMP=0x00000000000023b6
- (id)createDaemonDisconnectedError;	// IMP=0x00000000000021b2
- (void)handleInterruption;	// IMP=0x0000000000001d93
- (void)unregisterOptionResultCallback:(id)arg1;	// IMP=0x0000000000001d1b
- (id)registerOptionResultCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001c60
- (void)unregisterResultCallback:(id)arg1;	// IMP=0x0000000000001be8
- (id)registerResultCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001b2d
- (void)unregisterCallback:(id)arg1;	// IMP=0x0000000000001ab5
- (id)registerCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000000019fa
- (void)configureHandlersForConnection:(id)arg1;	// IMP=0x0000000000001863
- (id)initWithName:(id)arg1 errorDomain:(id)arg2 errorCode:(long long)arg3 logger:(id)arg4;	// IMP=0x00000000000016f0

@end

