//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface BCSShardItem : NSObject
{
    NSString *_base64EncodedString;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    long long _startIndex;	// 24 = 0x18
    long long _shardCount;	// 32 = 0x20
    NSDate *_expirationDate;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000009f22
- (void).cxx_destruct;	// IMP=0x0000000000009f9a
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) long long shardCount; // @synthesize shardCount=_shardCount;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *base64EncodedString; // @synthesize base64EncodedString=_base64EncodedString;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000009e00
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009d50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009c88
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, copy) NSString *description;
- (id)initWithBase64EncodedString:(id)arg1 shardType:(long long)arg2 startIndex:(long long)arg3 shardCount:(long long)arg4 expirationDate:(id)arg5;	// IMP=0x00000000000099f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
