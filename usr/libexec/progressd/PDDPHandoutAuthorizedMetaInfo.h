//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSString;

@interface PDDPHandoutAuthorizedMetaInfo : PBCodable
{
    NSString *_attachmentId;	// 8 = 0x8
    int _attachmentType;	// 16 = 0x10
    NSString *_classId;	// 24 = 0x18
    NSString *_handoutAuthorizedObjectId;	// 32 = 0x20
    NSString *_handoutId;	// 40 = 0x28
    CDStruct_d173f725 _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000019e383
@property(retain, nonatomic) NSString *handoutId; // @synthesize handoutId=_handoutId;
@property(retain, nonatomic) NSString *classId; // @synthesize classId=_classId;
@property(retain, nonatomic) NSString *handoutAuthorizedObjectId; // @synthesize handoutAuthorizedObjectId=_handoutAuthorizedObjectId;
@property(retain, nonatomic) NSString *attachmentId; // @synthesize attachmentId=_attachmentId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000019e22c
- (MISSING_TYPE *)hash;	// IMP=0x001000000019e174
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019e010
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019df03
- (void)copyTo:(id)arg1;	// IMP=0x001000000019de40
- (void)writeTo:(id)arg1;	// IMP=0x001000000019dd85
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000019dd78
- (id)dictionaryRepresentation;	// IMP=0x001000000019d9a7
- (id)description;	// IMP=0x001000000019d8f8
@property(readonly, nonatomic) _Bool hasHandoutId;
@property(readonly, nonatomic) _Bool hasClassId;
@property(readonly, nonatomic) _Bool hasHandoutAuthorizedObjectId;
@property(readonly, nonatomic) _Bool hasAttachmentId;
- (int)StringAsAttachmentType:(id)arg1;	// IMP=0x001000000019d78d
- (id)attachmentTypeAsString:(int)arg1;	// IMP=0x001000000019d744
@property(nonatomic) _Bool hasAttachmentType;
@property(nonatomic) int attachmentType; // @synthesize attachmentType=_attachmentType;

@end
