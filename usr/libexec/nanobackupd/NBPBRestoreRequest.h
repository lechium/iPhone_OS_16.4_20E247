//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface NBPBRestoreRequest : PBRequest
{
    NSData *_backupID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000020169
@property(retain, nonatomic) NSData *backupID; // @synthesize backupID=_backupID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000020120
- (unsigned long long)hash;	// IMP=0x0010000000020103
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000020069
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001fff1
- (void)copyTo:(id)arg1;	// IMP=0x001000000001ffc7
- (void)writeTo:(id)arg1;	// IMP=0x001000000001ffa3
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000001ff96
- (id)dictionaryRepresentation;	// IMP=0x001000000001fdc7
- (id)description;	// IMP=0x001000000001fd18
@property(readonly, nonatomic) _Bool hasBackupID;

@end

