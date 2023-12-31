//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPDate;

@interface PDDPHandoutEventDetails : PBCodable
{
    NSMutableArray *_attachmentDetails;	// 8 = 0x8
    NSString *_classId;	// 16 = 0x10
    PDDPDate *_dueDate;	// 24 = 0x18
    NSString *_handoutId;	// 32 = 0x20
    NSMutableArray *_recipientIds;	// 40 = 0x28
}

+ (Class)recipientIdsType;	// IMP=0x00200000000cfc66
+ (Class)attachmentDetailsType;	// IMP=0x00100000000cfb7f
- (void).cxx_destruct;	// IMP=0x00200000000d1000
@property(retain, nonatomic) NSMutableArray *recipientIds; // @synthesize recipientIds=_recipientIds;
@property(retain, nonatomic) PDDPDate *dueDate; // @synthesize dueDate=_dueDate;
@property(retain, nonatomic) NSMutableArray *attachmentDetails; // @synthesize attachmentDetails=_attachmentDetails;
@property(retain, nonatomic) NSString *handoutId; // @synthesize handoutId=_handoutId;
@property(retain, nonatomic) NSString *classId; // @synthesize classId=_classId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000d0c85
- (unsigned long long)hash;	// IMP=0x00100000000d0be2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d0a82
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d070e
- (void)copyTo:(id)arg1;	// IMP=0x00100000000d055f
- (void)writeTo:(id)arg1;	// IMP=0x00100000000d02f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000d02e4
- (id)dictionaryRepresentation;	// IMP=0x00100000000cfd26
- (id)description;	// IMP=0x00100000000cfc77
- (id)recipientIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000cfc49
- (unsigned long long)recipientIdsCount;	// IMP=0x00100000000cfc2c
- (void)addRecipientIds:(id)arg1;	// IMP=0x00100000000cfbc2
- (void)clearRecipientIds;	// IMP=0x00100000000cfba5
@property(readonly, nonatomic) _Bool hasDueDate;
- (id)attachmentDetailsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000cfb62
- (unsigned long long)attachmentDetailsCount;	// IMP=0x00100000000cfb45
- (void)addAttachmentDetails:(id)arg1;	// IMP=0x00100000000cfadb
- (void)clearAttachmentDetails;	// IMP=0x00100000000cfabe
@property(readonly, nonatomic) _Bool hasHandoutId;
@property(readonly, nonatomic) _Bool hasClassId;

@end

