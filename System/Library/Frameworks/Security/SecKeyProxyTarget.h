//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, SecKeyProxy;

__attribute__((visibility("hidden")))
@interface SecKeyProxyTarget : NSObject
{
    id _key;	// 8 = 0x8
    NSData *_certificate;	// 16 = 0x10
    SecKeyProxy *_publicKeyProxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d2de7
- (void)performOperation:(long long)arg1 mode:(long long)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d2bd0
- (void)getPublicKey:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d2b0c
- (void)getAlgorithmIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d2ab8
- (void)getDescriptionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d2991
- (void)getExternalRepresentationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d2915
- (void)getAttributesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d28a9
- (void)getBlockSizeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d2855
- (void)initializeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d2843
@property(readonly, nonatomic) struct __SecKey *key;
- (id)initWithKey:(id)arg1 certificate:(id)arg2;	// IMP=0x00000000000d27a0

@end
