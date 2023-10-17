//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSData, NSString, PDDPAdminRequestRequestor;

@interface PDDPEERequestZone : PBCodable
{
    NSData *_cursor;	// 8 = 0x8
    int _limit;	// 16 = 0x10
    PDDPAdminRequestRequestor *_requestor;	// 24 = 0x18
    NSString *_zoneName;	// 32 = 0x20
    MISSING_TYPE *_has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000016c3bc
@property(retain, nonatomic) PDDPAdminRequestRequestor *requestor; // @synthesize requestor=_requestor;
@property(retain, nonatomic) NSData *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) int limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000016c280
- (unsigned long long)hash;	// IMP=0x001000000016c1ea
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000016c0c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000016bfda
- (void)copyTo:(id)arg1;	// IMP=0x001000000016bf37
- (void)writeTo:(id)arg1;	// IMP=0x001000000016be99
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000016be8c
- (id)dictionaryRepresentation;	// IMP=0x001000000016ba7f
- (id)description;	// IMP=0x001000000016b9d0
@property(readonly, nonatomic) _Bool hasRequestor;
@property(readonly, nonatomic) _Bool hasCursor;
@property(nonatomic) _Bool hasLimit;
@property(readonly, nonatomic) _Bool hasZoneName;

@end
