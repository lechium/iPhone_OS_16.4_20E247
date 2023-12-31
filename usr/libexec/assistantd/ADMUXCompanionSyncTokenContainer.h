//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADMUXCompanionSyncTokenContainer : NSObject
{
    NSMutableDictionary *_aceHostSyncTokens;	// 8 = 0x8
    NSString *_primeToken;	// 16 = 0x10
    double _lastPrimeTokenTimestamp;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_fileOperationQueue;	// 32 = 0x20
    NSFileHandle *_fileHandle;	// 40 = 0x28
    NSString *_filePath;	// 48 = 0x30
    struct os_unfair_lock_s _tokenLock;	// 56 = 0x38
    _Bool _deviceUnlockedAtleastOnce;	// 60 = 0x3c
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001e5864
+ (id)sharedInstance;	// IMP=0x00100000001e580f
- (void).cxx_destruct;	// IMP=0x00200000001e6d68
- (void);	// IMP=0x00100000001e6d57
@property(retain, nonatomic) NSMutableDictionary *aceHostSyncTokens; // @synthesize aceHostSyncTokens=_aceHostSyncTokens;
@property(nonatomic) double lastPrimeTokenTimestamp; // @synthesize lastPrimeTokenTimestamp=_lastPrimeTokenTimestamp;
- (void)handleMuxTokenExchangeMessage:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e69a9
@property(copy, nonatomic) NSString *primeToken;
- (id)getSyncTokenForAceHost:(id)arg1;	// IMP=0x00100000001e67f7
- (void)putSyncToken:(id)arg1 forAceHost:(id)arg2;	// IMP=0x00100000001e676c
- (void)_cleanUpPostFileOperationErrors;	// IMP=0x00100000001e6728
- (void)_writeTokensToFile;	// IMP=0x00100000001e654d
- (void)_syncTokens;	// IMP=0x00100000001e64ec
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001e638b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001e62e1
- (_Bool)_openFileAtPath:(id)arg1 withFlags:(int)arg2;	// IMP=0x00100000001e6224
- (_Bool)_loadContentsOfFileIfExists;	// IMP=0x00100000001e5df2
- (void)_loadContentsOfFileOnNotification;	// IMP=0x00100000001e5d91
- (void)_deviceUnlockedPostBoot:(id)arg1;	// IMP=0x00100000001e5d4d
- (void)_removeFilePostAccountRemoval:(id)arg1;	// IMP=0x00100000001e5b83
- (void)_handleAccountCreatedNotification:(id)arg1;	// IMP=0x00100000001e5ae5
- (id)init;	// IMP=0x00100000001e586c

@end

