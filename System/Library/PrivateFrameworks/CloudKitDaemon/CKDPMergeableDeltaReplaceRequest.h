//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPMergeableValueIdentifier, NSMutableArray;

@interface CKDPMergeableDeltaReplaceRequest : PBRequest
{
    NSMutableArray *_deltaIdentifiers;	// 8 = 0x8
    NSMutableArray *_deltas;	// 16 = 0x10
    CKDPMergeableValueIdentifier *_identifier;	// 24 = 0x18
    _Bool _containsNewData;	// 32 = 0x20
    _Bool _ignoreMissingDeltas;	// 33 = 0x21
    struct {
        unsigned int containsNewData:1;
        unsigned int ignoreMissingDeltas:1;
    } _has;	// 36 = 0x24
}

+ (Class)deltasType;	// IMP=0x001000000015d0a0
+ (Class)deltaIdentifiersType;	// IMP=0x001000000015cfce
+ (id)options;	// IMP=0x001000000015cea8
- (void).cxx_destruct;	// IMP=0x000000000015e61b
@property(nonatomic) _Bool containsNewData; // @synthesize containsNewData=_containsNewData;
@property(nonatomic) _Bool ignoreMissingDeltas; // @synthesize ignoreMissingDeltas=_ignoreMissingDeltas;
@property(retain, nonatomic) NSMutableArray *deltas; // @synthesize deltas=_deltas;
@property(retain, nonatomic) NSMutableArray *deltaIdentifiers; // @synthesize deltaIdentifiers=_deltaIdentifiers;
@property(retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015e2d0
- (unsigned long long)hash;	// IMP=0x000000000015e213
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015e0ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015dd43
- (void)copyTo:(id)arg1;	// IMP=0x000000000015db94
- (Class)responseClass;	// IMP=0x000000000015db83
- (unsigned int)requestTypeCode;	// IMP=0x000000000015db78
- (void)writeTo:(id)arg1;	// IMP=0x000000000015d8fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015d8f0
- (id)dictionaryRepresentation;	// IMP=0x000000000015d1ee
- (id)description;	// IMP=0x000000000015d13f
@property(nonatomic) _Bool hasContainsNewData;
@property(nonatomic) _Bool hasIgnoreMissingDeltas;
- (id)deltasAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015d083
- (unsigned long long)deltasCount;	// IMP=0x000000000015d066
- (void)addDeltas:(id)arg1;	// IMP=0x000000000015cffc
- (void)clearDeltas;	// IMP=0x000000000015cfdf
- (id)deltaIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015cfb1
- (unsigned long long)deltaIdentifiersCount;	// IMP=0x000000000015cf94
- (void)addDeltaIdentifiers:(id)arg1;	// IMP=0x000000000015cf2a
- (void)clearDeltaIdentifiers;	// IMP=0x000000000015cf0d
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

