//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DownloadHandle : NSObject
{
    long long _downloadID;	// 8 = 0x8
    long long _transactionID;	// 16 = 0x10
}

@property(readonly, nonatomic) long long transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, nonatomic) long long downloadID; // @synthesize downloadID=_downloadID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ed5d0
- (unsigned long long)hash;	// IMP=0x00100000000ed5c2
- (id)description;	// IMP=0x00100000000ed595
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ed58a
- (id)initWithTransactionIdentifier:(long long)arg1 downloadIdentifier:(long long)arg2;	// IMP=0x00100000000ed542
- (id)init;	// IMP=0x00100000000ed52c

@end

