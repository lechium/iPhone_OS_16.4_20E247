//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BCSDomainShardItem
{
    NSURL *_fileURL;	// 8 = 0x8
}

+ (id)shardItemWithFileURL:(id)arg1;	// IMP=0x001000000004e4db
- (void).cxx_destruct;	// IMP=0x000000000004ea49
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004e989
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004e90c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004e89f
@property(readonly, copy) NSString *description;
- (id)initWithFileURL:(id)arg1 startIndex:(long long)arg2 shardCount:(long long)arg3 type:(long long)arg4 expirationDate:(id)arg5;	// IMP=0x000000000004e757
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000459dc
- (id)initWithRecord:(id)arg1 type:(long long)arg2;	// IMP=0x00000000000456a5
- (id)initWithJSONObj:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000044fb0

// Remaining properties
@property(readonly, nonatomic) NSString *base64EncodedString;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long shardCount;
@property(readonly, nonatomic) long long startIndex;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long type;

@end

