//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (ContactsFoundation)
+ (id)_cn_dataFromHexString:(id)arg1;	// IMP=0x0080000000050e7d
- (id)_cn_padDataToLength:(unsigned long long)arg1;	// IMP=0x0010000000051161
- (id)_cn_trimTrailingZeros;	// IMP=0x00100000000510aa
- (id)_cn_writeToURL:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0010000000050f92
- (id)_cn_SHA1String;	// IMP=0x0010000000050db1
- (id)_cn_hexString;	// IMP=0x0010000000050ccf
- (id)_cn_md5Hash;	// IMP=0x0010000000050c2f
- (id)_cn_SHA256HashDataWithSalt:(id)arg1;	// IMP=0x0010000000050ae7
- (id)_cn_decodeBase64IgnoringWhitespace;	// IMP=0x001000000005089c
- (id)_cn_decodeBase64;	// IMP=0x0010000000050572
- (_Bool)_cn_containsData:(id)arg1;	// IMP=0x0010000000050504
@end

