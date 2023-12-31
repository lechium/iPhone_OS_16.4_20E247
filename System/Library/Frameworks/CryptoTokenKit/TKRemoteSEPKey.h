//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TKSEPKey.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface TKRemoteSEPKey : TKSEPKey
{
    id _keyType;	// 8 = 0x8
    long long _keySize;	// 16 = 0x10
    _Bool _systemKey;	// 24 = 0x18
    NSData *_publicKey;	// 32 = 0x20
    id _accessControl;	// 40 = 0x28
    _Bool _forceSystemSession;	// 48 = 0x30
    id _keyID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000028c3c
@property(readonly, nonatomic) id keyID; // @synthesize keyID=_keyID;
- (_Bool)lifetimeControlWithType:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000002895d
- (id)attestKey:(id)arg1 nonce:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002855a
- (id)recryptData:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000028210
- (id)computeSharedSecret:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000027efc
- (id)signDigest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000027be8
- (_Bool)deleteWithError:(id *)arg1;	// IMP=0x0000000000027934
- (struct __SecAccessControl *)accessControl;	// IMP=0x0000000000027923
- (id)publicKeyWithError:(id *)arg1;	// IMP=0x000000000002790e
- (_Bool)systemKey;	// IMP=0x00000000000278fe
- (long long)keySize;	// IMP=0x00000000000278ed
- (id)keyType;	// IMP=0x00000000000278d8
- (id)objectID;	// IMP=0x00000000000278c6
- (id)_initWithKeyType:(id)arg1 keySize:(long long)arg2 accessControl:(struct __SecAccessControl *)arg3 options:(id)arg4 authContext:(id)arg5 forceSystemSession:(_Bool)arg6 error:(id *)arg7;	// IMP=0x000000000002738e
- (id)_initWithObjectID:(id)arg1 authContext:(id)arg2 forceSystemSession:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000026fd4
- (id)withError:(id *)arg1 invoke:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026ba1
- (_Bool)processServerAtributes:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000268c4

@end

