//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CoreCryptoP256Private : NSObject
{
    struct ccec_full_ctx *_full_key;	// 8 = 0x8
}

+ (id)generate;	// IMP=0x0010000000007d1a
@property struct ccec_full_ctx *full_key; // @synthesize full_key=_full_key;
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000816a
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008127
- (id)keychainData;	// IMP=0x00000000000080d3
- (void)dealloc;	// IMP=0x0000000000008094
- (id)publicKey;	// IMP=0x0000000000007fe8
- (id)keyAgreement:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007de4
- (id)initWithKey:(struct ccec_full_ctx *)arg1;	// IMP=0x0000000000007cdd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

