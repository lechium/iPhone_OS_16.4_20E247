//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecord, CKDPRecordIdentifier, NSString;

@interface CKDPRecordMoveRequest : PBRequest
{
    NSString *_destinationEtag;	// 8 = 0x8
    CKDPRecord *_destinationRecord;	// 16 = 0x10
    NSString *_destinationRecordProtectionInfoTag;	// 24 = 0x18
    NSString *_destinationZoneProtectionInfoTag;	// 32 = 0x20
    NSString *_originEtag;	// 40 = 0x28
    CKDPRecordIdentifier *_originId;	// 48 = 0x30
    int _semantics;	// 56 = 0x38
    _Bool _merge;	// 60 = 0x3c
    struct {
        unsigned int semantics:1;
        unsigned int merge:1;
    } _has;	// 64 = 0x40
}

+ (id)options;	// IMP=0x00100000001079dc
- (void).cxx_destruct;	// IMP=0x0000000000108c56
@property(nonatomic) _Bool merge; // @synthesize merge=_merge;
@property(retain, nonatomic) CKDPRecord *destinationRecord; // @synthesize destinationRecord=_destinationRecord;
@property(retain, nonatomic) NSString *destinationRecordProtectionInfoTag; // @synthesize destinationRecordProtectionInfoTag=_destinationRecordProtectionInfoTag;
@property(retain, nonatomic) NSString *destinationZoneProtectionInfoTag; // @synthesize destinationZoneProtectionInfoTag=_destinationZoneProtectionInfoTag;
@property(retain, nonatomic) NSString *destinationEtag; // @synthesize destinationEtag=_destinationEtag;
@property(retain, nonatomic) NSString *originEtag; // @synthesize originEtag=_originEtag;
@property(retain, nonatomic) CKDPRecordIdentifier *originId; // @synthesize originId=_originId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000108a0d
- (unsigned long long)hash;	// IMP=0x00000000001088f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001086ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000108576
- (void)copyTo:(id)arg1;	// IMP=0x000000000010844f
- (Class)responseClass;	// IMP=0x000000000010843e
- (unsigned int)requestTypeCode;	// IMP=0x0000000000108433
- (void)writeTo:(id)arg1;	// IMP=0x0000000000108315
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000108308
- (id)dictionaryRepresentation;	// IMP=0x0000000000107cc6
- (id)description;	// IMP=0x0000000000107c17
@property(nonatomic) _Bool hasMerge;
@property(readonly, nonatomic) _Bool hasDestinationRecord;
@property(readonly, nonatomic) _Bool hasDestinationRecordProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasDestinationZoneProtectionInfoTag;
@property(readonly, nonatomic) _Bool hasDestinationEtag;
@property(readonly, nonatomic) _Bool hasOriginEtag;
@property(readonly, nonatomic) _Bool hasOriginId;
- (int)StringAsSemantics:(id)arg1;	// IMP=0x0000000000107ae9
- (id)semanticsAsString:(int)arg1;	// IMP=0x0000000000107a93
@property(nonatomic) _Bool hasSemantics;
@property(nonatomic) int semantics; // @synthesize semantics=_semantics;

@end

