//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol OS_dispatch_queue;

@interface CKNanoCryptographer : NSObject
{
    NSData *_deviceSalt;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSString *_cachedRecipientName;	// 24 = 0x18
    NSString *_cachedRecipientDigest;	// 32 = 0x20
}

+ (id)sharedCryptographer;	// IMP=0x004000000000637d
- (void).cxx_destruct;	// IMP=0x0020000000006b78
@property(copy, nonatomic) NSString *cachedRecipientDigest; // @synthesize cachedRecipientDigest=_cachedRecipientDigest;
@property(copy, nonatomic) NSString *cachedRecipientName; // @synthesize cachedRecipientName=_cachedRecipientName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (id)stringDigestForName:(id)arg1;	// IMP=0x0010000000006780
@property(readonly, nonatomic) NSData *deviceSalt;
- (void)prewarmDeviceSalt;	// IMP=0x001000000000642a
- (id)init;	// IMP=0x00100000000063d2

@end
