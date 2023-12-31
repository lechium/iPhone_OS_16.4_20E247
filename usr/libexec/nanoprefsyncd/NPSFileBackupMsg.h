//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NPSFileBackupMsg : PBCodable
{
    NSData *_fileData;	// 8 = 0x8
    NSData *_fileURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001d82d
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
@property(retain, nonatomic) NSData *fileURL; // @synthesize fileURL=_fileURL;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000001d780
- (unsigned long long)hash;	// IMP=0x001000000001d733
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001d66b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001d5cd
- (void)copyTo:(id)arg1;	// IMP=0x001000000001d56a
- (void)writeTo:(id)arg1;	// IMP=0x001000000001d50d
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000001d500
- (id)dictionaryRepresentation;	// IMP=0x001000000001d2e8
- (id)description;	// IMP=0x001000000001d239
@property(readonly, nonatomic) _Bool hasFileData;
@property(readonly, nonatomic) _Bool hasFileURL;

@end

